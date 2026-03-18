/*
 * XREFs of ExCovReadjustUnloadedModuleEntry @ 0x1404531A0
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusive @ 0x1400F30D4 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406F880C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406F8ABC (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x1406F9624 (ExpCovReadFriendlyName.c)
 */

void __fastcall ExCovReadjustUnloadedModuleEntry(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  bool v7; // di
  __int64 v8; // r14
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  __int64 v11; // r10
  __int64 v12; // r9
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    CurrentThread = KeGetCurrentThread();
    String2.Buffer = 0LL;
    *(_DWORD *)&String2.Length = 0;
    --CurrentThread->KernelApcDisable;
    ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
    v6 = ExpCovUnloadedModuleList;
    v7 = 0;
    if ( (__int64 *)ExpCovUnloadedModuleList == &ExpCovUnloadedModuleList )
      goto LABEL_25;
    while ( 1 )
    {
      v8 = v6;
      if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 72, &String2) >= 0
        && !RtlCompareUnicodeString((PCUNICODE_STRING)(v6 + 32), &String2, 1u) )
      {
        break;
      }
      if ( String2.Buffer )
        RtlFreeAnsiString(&String2);
      v6 = *(_QWORD *)v6;
      if ( (__int64 *)v6 == &ExpCovUnloadedModuleList )
        goto LABEL_8;
    }
    if ( String2.Buffer )
      RtlFreeAnsiString(&String2);
LABEL_8:
    if ( !v8 || (__int64 *)v6 == &ExpCovUnloadedModuleList )
    {
LABEL_25:
      v7 = a2 == 0;
    }
    else
    {
      v9 = *(_DWORD **)(v8 + 56);
      v10 = *(_DWORD **)(a1 + 128);
      if ( v10[1] == v9[1] && v10[6] == v9[6] && v10[7] == v9[7] && RtlCompareMemory(v10 + 2, v9 + 2, 0x10uLL) == 16 )
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for same versioned %wZ found\n", v8 + 16, *(_QWORD *)&String2.Length);
        v11 = *(_QWORD *)(a1 + 128) + (unsigned int)v10[8];
        v12 = *(_QWORD *)(v8 + 56) + (unsigned int)v9[8];
        if ( a2 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 128) + (unsigned int)v10[8]),
            (const void *)(*(_QWORD *)(v8 + 56) + (unsigned int)v9[8]),
            (unsigned int)v10[7]);
          ExpCovDeleteUnloadedModuleEntry(v8);
        }
        else
        {
          v5 = 0LL;
          if ( (v9[7] & 0xFFFFFFFC) != 0 )
          {
            do
            {
              _InterlockedOr(
                (volatile signed __int32 *)(v12 + 4LL * (unsigned int)v5),
                *(_DWORD *)(v11 + 4LL * (unsigned int)v5));
              v5 = (unsigned int)(v5 + 1);
            }
            while ( (unsigned int)v5 < v9[7] >> 2 );
          }
        }
      }
      else
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for different versioned %wZ found\n", v8 + 16, *(_QWORD *)&String2.Length);
        ExpCovDeleteUnloadedModuleEntry(v8);
        if ( !a2 )
          v7 = 1;
      }
    }
    ExfReleasePushLock(&ExpCovPushLock, v5);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v7 )
      ExpCovCreateUnloadedModuleEntry(a1);
  }
}
