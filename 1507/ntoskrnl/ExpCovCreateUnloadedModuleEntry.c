/*
 * XREFs of ExpCovCreateUnloadedModuleEntry @ 0x1406F880C
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404531A0 (ExCovReadjustUnloadedModuleEntry.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusive @ 0x1400F30D4 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1406F8B30 (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x1406F9624 (ExpCovReadFriendlyName.c)
 */

void __fastcall ExpCovCreateUnloadedModuleEntry(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // edi
  __int64 v8; // rdx
  PVOID PoolWithTag; // rax
  __int64 v10; // rsi
  PVOID v11; // rax
  __int64 **v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // r9
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  UNICODE_STRING StringIn; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF

  v1 = a1 + 72;
  v3 = *(_QWORD *)(a1 + 128);
  StringIn.Buffer = 0LL;
  *(_DWORD *)&StringIn.Length = 0;
  if ( (int)ExpCovReadFriendlyName(v3, v1, &StringIn) < 0 )
  {
    DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
  if ( ExpCovCurrentPagedPoolInUse + 64 < (unsigned int)ExpCovCurrentPagedPoolInUse
    || (v5 = StringIn.Length + ExpCovCurrentPagedPoolInUse + 64, v5 < ExpCovCurrentPagedPoolInUse)
    || v5 == -1 )
  {
    v14 = a1 + 88;
  }
  else
  {
    v6 = StringIn.Length + v5;
    if ( v6 >= v5 )
    {
      v7 = *(_DWORD *)(a1 + 124) + v6;
      if ( v7 >= v5 && v7 != -1 )
      {
        if ( v7 <= ExCovMaxPagedPoolToUse )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x72766F43u);
          v10 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_21;
          memset(PoolWithTag, 0, 0x40uLL);
          if ( RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v10 + 32)) < 0 )
            goto LABEL_21;
          if ( StringIn.Buffer )
            RtlFreeAnsiString(&StringIn);
          if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 88, &StringIn) >= 0
            && RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v10 + 16)) >= 0
            && (*(_DWORD *)(v10 + 48) = *(_DWORD *)(a1 + 124),
                v11 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 124), 0x72766F43u),
                (*(_QWORD *)(v10 + 56) = v11) != 0LL) )
          {
            memset(v11, 0, *(unsigned int *)(a1 + 124));
            memmove(*(void **)(v10 + 56), *(const void **)(a1 + 128), *(unsigned int *)(a1 + 124));
            v12 = (__int64 **)qword_140324988;
            *(_QWORD *)v10 = &ExpCovUnloadedModuleList;
            *(_QWORD *)(v10 + 8) = v12;
            if ( *v12 != &ExpCovUnloadedModuleList )
              __fastfail(3u);
            *v12 = (__int64 *)v10;
            qword_140324988 = v10;
            v13 = *(_OWORD *)(a1 + 88);
            ExpCovCurrentPagedPoolInUse = v7;
            v18 = v13;
            DbgPrintEx(0x7Eu, 2u, "COV: Entry created for %wZ in ExpCovUnloadedModuleList\n", &v18);
          }
          else
          {
LABEL_21:
            DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
            ExpCovFreeUnloadedModuleEntry((PVOID)v10);
          }
        }
        else
        {
          DbgPrintEx(0x7Eu, 2u, "COV: Max paged pool size (%u) reached, coverage lost for %wZ\n");
        }
        goto LABEL_25;
      }
    }
    v14 = v1;
  }
  DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating paged pool size for %wZ\n", v14);
LABEL_25:
  ExfReleasePushLock(&ExpCovPushLock, v8);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
}
