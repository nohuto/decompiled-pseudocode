/*
 * XREFs of CmpLinkHiveToMaster @ 0x1404E9E8C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1407D74A8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryObject @ 0x14017F1F0 (ZwQueryObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpParseCacheAddHive @ 0x1404EA29C (CmpParseCacheAddHive.c)
 *     CmpInitializeKcbCache @ 0x1404EA528 (CmpInitializeKcbCache.c)
 *     CmpRecordUnloadEventForHive @ 0x1404ED934 (CmpRecordUnloadEventForHive.c)
 *     CmpDestroyHive @ 0x1404EE8E0 (CmpDestroyHive.c)
 *     CmpEtwDumpKcb @ 0x140652FB0 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x14065320C (CmpLogHiveLinkEvent.c)
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
  __int64 *v14; // rsi
  char v15; // r15
  __int64 result; // rax
  int v17; // eax
  PCWSTR *PoolWithTag; // r13
  NTSTATUS v19; // edi
  char v20; // r14
  ULONG v21; // ecx
  PVOID v22; // rcx
  __int16 v23; // ax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v29; // [rsp+44h] [rbp-BCh]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  void *v34; // [rsp+68h] [rbp-98h]
  const UNICODE_STRING *v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  _QWORD v39[24]; // [rsp+90h] [rbp-70h] BYREF

  memset(v39, 0, 136);
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
  v39[6] = a3;
  if ( a6 )
    v17 = 1091;
  LODWORD(v39[0]) = v17;
  LODWORD(v39[5]) = a4 ? -1 : *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
  v37 = a8;
  v33 = 48;
  v34 = a2;
  v36 = 576;
  v35 = a1;
  v38 = 0LL;
  result = ObOpenObjectByName((__int64)&v33, (__int64)CmKeyObjectType, 0, 0LL, 0x2001Fu, (__int64)v39, &Handle);
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
  if ( !PoolWithTag )
    goto LABEL_14;
  ReturnLength = 0;
  v21 = 0;
  if ( a2 )
  {
    v19 = ZwQueryObject(a2, ObjectNameInformation, PoolWithTag, 0x200u, &ReturnLength);
    if ( v19 < 0 )
      goto LABEL_15;
    v21 = ReturnLength;
  }
  v29 = v21 + a1->Length + 4;
  P = ExAllocatePoolWithTag(PagedPool, v29, 0x70684D43u);
  v22 = P;
  if ( P )
  {
    v23 = v29;
    *(_WORD *)(a3 + 3024) = 0;
    *(_WORD *)(a3 + 3026) = v23;
    *(_QWORD *)(a3 + 3032) = v22;
    if ( a2 )
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(a3 + 3024), PoolWithTag[1]);
      RtlAppendUnicodeToString((PUNICODE_STRING)(a3 + 3024), L"\\");
    }
    RtlAppendUnicodeStringToString((PUNICODE_STRING)(a3 + 3024), a1);
    v24 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    v14 = (__int64 *)Object;
    v19 = v24;
    if ( v24 >= 0 )
    {
      v20 = 1;
      v19 = CmpParseCacheAddHive(a3, *((_QWORD *)Object + 1));
      if ( v19 >= 0 )
      {
        *(_BYTE *)(a3 + 125) = 0;
        *(_DWORD *)(a3 + 2828) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a9 )
          CmpLockRegistry();
        CmpReportNotify(v14[1], *(_QWORD *)(v14[1] + 32), *(_DWORD *)(v14[1] + 40), 0LL, 1, 0LL);
        v20 = 0;
        if ( a6 )
        {
          CmpLockKcbExclusive(v14[1], v25, v26, v27);
          CmpReferenceKeyControlBlock(v14[1]);
          *(_QWORD *)(a3 + 4104) = v14[1];
          if ( Event )
          {
            KeResetEvent(Event);
            CmpRecordUnloadEventForHive(a3, Event);
          }
          CmpUnlockKcb((char *)v14[1]);
          v20 = 0;
        }
        if ( CmpTraceRoutine )
        {
          LOBYTE(v25) = 33;
          CmpEtwDumpKcb(v14[1], v25);
        }
        if ( !a9 )
          CmpUnlockRegistry();
        ObfDereferenceObject(Object);
        ZwClose(Handle);
        if ( a6 )
          *(_BYTE *)(a3 + 4112) = 1;
      }
      goto LABEL_16;
    }
  }
  else
  {
LABEL_14:
    v19 = -1073741801;
  }
LABEL_15:
  v20 = 0;
LABEL_16:
  if ( !v15 )
  {
    *(_DWORD *)(a3 + 144) &= ~0x20u;
    *(_QWORD *)(a3 + 5416) = 0LL;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v19 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    *(_DWORD *)(a3 + 3024) = 0;
    *(_QWORD *)(a3 + 3032) = 0LL;
    if ( v20 )
      ObfDereferenceObject(v14);
    if ( !a9 )
      CmpLockRegistry();
    CmpDestroyHive(a3, *(unsigned int *)(*(_QWORD *)(a3 + 64) + 36LL));
    if ( !a9 )
      CmpUnlockRegistry();
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, a1);
  return (unsigned int)v19;
}
