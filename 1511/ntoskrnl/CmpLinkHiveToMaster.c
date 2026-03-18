/*
 * XREFs of CmpLinkHiveToMaster @ 0x1403BAC9C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x140744EB4 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140745898 (CmpInitializePreloadedHive.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryObject @ 0x140150820 (ZwQueryObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpParseCacheAddHive @ 0x1403BB0AC (CmpParseCacheAddHive.c)
 *     CmpInitializeKcbCache @ 0x1403BDA28 (CmpInitializeKcbCache.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x140499400 (CmpDestroyHive.c)
 *     CmpRecordUnloadEventForHive @ 0x140499B10 (CmpRecordUnloadEventForHive.c)
 *     CmpEtwDumpKcb @ 0x1405DDA84 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x1405DDCE0 (CmpLogHiveLinkEvent.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        const UNICODE_STRING *a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        struct _KEVENT *Event,
        __int64 a8,
        char a9)
{
  int v13; // eax
  ULONG_PTR *v14; // rsi
  char v15; // r15
  __int64 result; // rax
  int v17; // eax
  PCWSTR *PoolWithTag; // rax
  PVOID v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  PCWSTR *v23; // r13
  int v24; // edi
  char v25; // r14
  ULONG v26; // ecx
  NTSTATUS v27; // eax
  PVOID v28; // rax
  __int16 v29; // ax
  NTSTATUS v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v34; // [rsp+44h] [rbp-BCh]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  void *v39; // [rsp+68h] [rbp-98h]
  const UNICODE_STRING *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  _QWORD v44[24]; // [rsp+90h] [rbp-70h] BYREF

  memset(v44, 0, 136);
  v13 = *(_DWORD *)(a3 + 144);
  v14 = 0LL;
  P = 0LL;
  if ( (v13 & 0x20) != 0 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    *(_DWORD *)(a3 + 144) = v13 | 0x20;
    *(_QWORD *)(a3 + 5416) = KeGetCurrentThread();
  }
  result = CmpInitializeKcbCache(a3, a5);
  if ( (int)result < 0 )
    goto LABEL_5;
  v17 = 67;
  v44[6] = a3;
  if ( a6 )
    v17 = 1091;
  LODWORD(v44[0]) = v17;
  LODWORD(v44[5]) = a4 ? -1 : *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
  v42 = a8;
  v38 = 48;
  v39 = a2;
  v41 = 576;
  v40 = a1;
  v43 = 0LL;
  result = ObOpenObjectByName((unsigned int)&v38, (_DWORD)CmKeyObjectType, 0, 0, 131103, (__int64)v44, (__int64)&Handle);
  if ( (int)result < 0 )
  {
LABEL_5:
    if ( !v15 )
    {
      *(_DWORD *)(a3 + 144) &= ~0x20u;
      *(_QWORD *)(a3 + 5416) = 0LL;
    }
    return result;
  }
  PoolWithTag = (PCWSTR *)ExAllocatePoolWithTag(PagedPool, 0x202uLL, 0x71684D43u);
  v22 = 0LL;
  v23 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_14;
  ReturnLength = 0;
  v26 = 0;
  if ( a2 )
  {
    v27 = ZwQueryObject(a2, ObjectNameInformation, PoolWithTag, 0x200u, &ReturnLength);
    v22 = 0LL;
    v24 = v27;
    if ( v27 < 0 )
      goto LABEL_15;
    v26 = ReturnLength;
  }
  v34 = v26 + a1->Length + 4;
  v28 = ExAllocatePoolWithTag(PagedPool, v34, 0x70684D43u);
  v22 = 0LL;
  P = v28;
  v19 = v28;
  if ( v28 )
  {
    v29 = v34;
    *(_WORD *)(a3 + 3024) = 0;
    *(_WORD *)(a3 + 3026) = v29;
    *(_QWORD *)(a3 + 3032) = v19;
    if ( a2 )
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(a3 + 3024), v23[1]);
      RtlAppendUnicodeToString((PUNICODE_STRING)(a3 + 3024), L"\\");
    }
    RtlAppendUnicodeStringToString((PUNICODE_STRING)(a3 + 3024), a1);
    v30 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    v14 = (ULONG_PTR *)Object;
    v22 = 0LL;
    v24 = v30;
    if ( v30 >= 0 )
    {
      v25 = 1;
      v31 = CmpParseCacheAddHive(a3, *((_QWORD *)Object + 1));
      v22 = 0LL;
      v24 = v31;
      if ( v31 >= 0 )
      {
        *(_BYTE *)(a3 + 125) = 0;
        *(_DWORD *)(a3 + 2828) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a9 )
          CmpLockRegistry(v19, 0LL, v20, v21);
        CmpReportNotify(v14[1], *(_QWORD *)(v14[1] + 32), *(_DWORD *)(v14[1] + 40), 0, 1, 0LL);
        v25 = 0;
        if ( a6 )
        {
          CmpLockKcbExclusive(v14[1]);
          CmpReferenceKeyControlBlock(v14[1]);
          *(_QWORD *)(a3 + 4104) = v14[1];
          if ( Event )
          {
            KeResetEvent(Event);
            CmpRecordUnloadEventForHive(a3);
          }
          CmpUnlockKcb((PVOID)v14[1]);
          v25 = 0;
        }
        if ( CmpTraceRoutine )
        {
          LOBYTE(v32) = 33;
          CmpEtwDumpKcb(v14[1], v32);
        }
        if ( !a9 )
          CmpUnlockRegistry();
        ObfDereferenceObject(Object);
        ZwClose(Handle);
        v22 = 0LL;
        if ( a6 )
          *(_BYTE *)(a3 + 4112) = 1;
      }
      goto LABEL_16;
    }
  }
  else
  {
LABEL_14:
    v24 = -1073741801;
  }
LABEL_15:
  v25 = 0;
LABEL_16:
  if ( !v15 )
  {
    *(_DWORD *)(a3 + 144) &= ~0x20u;
    *(_QWORD *)(a3 + 5416) = 0LL;
  }
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    v22 = 0LL;
  }
  if ( v24 < 0 )
  {
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v22 = 0LL;
    }
    *(_DWORD *)(a3 + 3024) = 0;
    *(_QWORD *)(a3 + 3032) = 0LL;
    if ( v25 )
      ObfDereferenceObject(v14);
    if ( !a9 )
      CmpLockRegistry(v19, v22, v20, v21);
    CmpDestroyHive(a3, *(unsigned int *)(*(_QWORD *)(a3 + 64) + 36LL));
    if ( !a9 )
      CmpUnlockRegistry();
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, a1);
  return (unsigned int)v24;
}
