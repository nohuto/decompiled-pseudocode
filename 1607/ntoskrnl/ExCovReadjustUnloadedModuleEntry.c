/*
 * XREFs of ExCovReadjustUnloadedModuleEntry @ 0x140547A34
 * Callers:
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ExfAcquirePushLockExclusive @ 0x1400C5F04 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6C40 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406B6EBC (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x1406B796C (ExpCovReadFriendlyName.c)
 */

void __fastcall ExCovReadjustUnloadedModuleEntry(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  bool v6; // di
  __int64 v7; // r14
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int v12; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    CurrentThread = KeGetCurrentThread();
    String2.Buffer = 0LL;
    *(_DWORD *)&String2.Length = 0;
    --CurrentThread->KernelApcDisable;
    ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
    v5 = ExpCovUnloadedModuleList;
    v6 = 0;
    if ( (__int64 *)ExpCovUnloadedModuleList == &ExpCovUnloadedModuleList )
      goto LABEL_25;
    while ( 1 )
    {
      v7 = v5;
      if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 72, &String2) >= 0
        && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 32), &String2, 1u) )
      {
        break;
      }
      if ( String2.Buffer )
        RtlFreeAnsiString(&String2);
      v5 = *(_QWORD *)v5;
      if ( (__int64 *)v5 == &ExpCovUnloadedModuleList )
        goto LABEL_8;
    }
    if ( String2.Buffer )
      RtlFreeAnsiString(&String2);
LABEL_8:
    if ( !v7 || (__int64 *)v5 == &ExpCovUnloadedModuleList )
    {
LABEL_25:
      v6 = a2 == 0;
    }
    else
    {
      v8 = *(_DWORD **)(v7 + 56);
      v9 = *(_DWORD **)(a1 + 128);
      if ( v9[1] == v8[1] && v9[6] == v8[6] && v9[7] == v8[7] && RtlCompareMemory(v9 + 2, v8 + 2, 0x10uLL) == 16 )
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for same versioned %wZ found\n", v7 + 16, *(_QWORD *)&String2.Length);
        v10 = *(_QWORD *)(a1 + 128) + (unsigned int)v9[8];
        v11 = *(_QWORD *)(v7 + 56) + (unsigned int)v8[8];
        if ( a2 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 128) + (unsigned int)v9[8]),
            (const void *)(*(_QWORD *)(v7 + 56) + (unsigned int)v8[8]),
            (unsigned int)v9[7]);
          ExpCovDeleteUnloadedModuleEntry(v7);
        }
        else
        {
          v12 = 0;
          if ( (v8[7] & 0xFFFFFFFC) != 0 )
          {
            do
            {
              _InterlockedOr((volatile signed __int32 *)(v11 + 4LL * v12), *(_DWORD *)(v10 + 4LL * v12));
              ++v12;
            }
            while ( v12 < v8[7] >> 2 );
          }
        }
      }
      else
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for different versioned %wZ found\n", v7 + 16, *(_QWORD *)&String2.Length);
        ExpCovDeleteUnloadedModuleEntry(v7);
        if ( !a2 )
          v6 = 1;
      }
    }
    ExfReleasePushLock(&ExpCovPushLock);
    KeLeaveCriticalRegion();
    if ( v6 )
      ExpCovCreateUnloadedModuleEntry(a1);
  }
}
