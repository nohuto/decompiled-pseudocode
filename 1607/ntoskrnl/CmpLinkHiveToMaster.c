/*
 * XREFs of CmpLinkHiveToMaster @ 0x1405194C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14000BA40 (RtlUnicodeStringCopy.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     CmpRecordUnloadEventForHive @ 0x1404D009C (CmpRecordUnloadEventForHive.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 *     CmpInitializeKcbCache @ 0x14051A1F8 (CmpInitializeKcbCache.c)
 *     CmpEtwDumpKcb @ 0x1405FB9D4 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x1405FBC30 (CmpLogHiveLinkEvent.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v13; // r12
  int v15; // eax
  int v16; // edi
  int v17; // eax
  __int64 *v18; // rsi
  __int64 v19; // rdx
  UNICODE_STRING *v20; // r15
  PVOID PoolWithTag; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rdi
  char v25; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  _QWORD v38[30]; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  v13 = a1;
  v30 = a8;
  v29 = a9;
  v31 = a10;
  v25 = 0;
  memset(v38, 0, 0xE8uLL);
  v15 = *(_DWORD *)(a3 + 144);
  if ( (v15 & 0x20) == 0 )
  {
    v25 = 1;
    *(_DWORD *)(a3 + 144) = v15 | 0x20;
    *(_QWORD *)(a3 + 5416) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  if ( v16 >= 0 )
  {
    v17 = 67;
    v38[6] = a3;
    if ( a6 )
      v17 = 2115;
    LODWORD(v38[0]) = v17;
    if ( a4 )
      LODWORD(v38[5]) = -1;
    else
      LODWORD(v38[5]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v37 = 0LL;
    v38[11] = v29;
    v34 = a1;
    v36 = v30;
    v32 = 48;
    v33 = a2;
    v35 = 576;
    v16 = ObOpenObjectByName((__int64)&v32, (__int64)CmKeyObjectType, 0, 0LL, 0x2001Fu, (__int64)v38, &Handle);
    if ( v16 < 0 )
    {
      v13 = a1;
    }
    else
    {
      ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v18 = (__int64 *)Object;
      ZwClose(Handle);
      if ( !a11 )
        CmpLockRegistry();
      v20 = (UNICODE_STRING *)CmpConstructName(v18[1], v19);
      if ( !a11 )
        CmpUnlockRegistry();
      if ( v20
        && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20->Length, 0x70684D43u),
            (*(_QWORD *)(a3 + 3032) = PoolWithTag) != 0LL) )
      {
        *(_WORD *)(a3 + 3024) = 0;
        *(_WORD *)(a3 + 3026) = v20->Length;
        RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 3024), v20);
        *(_BYTE *)(a3 + 125) = 0;
        *(_DWORD *)(a3 + 2828) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a11 )
          CmpLockRegistry();
        CmpReportNotify(v18[1], *(_QWORD *)(v18[1] + 24), *(_DWORD *)(v18[1] + 32), 0LL, 1, 0LL);
        if ( a6 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v18[1]);
          *(_QWORD *)(a3 + 4104) = v18[1];
          if ( Event )
          {
            KeResetEvent(Event);
            CmpRecordUnloadEventForHive(a3, Event);
          }
        }
        if ( CmpTraceRoutine )
        {
          LOBYTE(v22) = 33;
          CmpEtwDumpKcb(v18[1], v22);
        }
        if ( !a11 )
          CmpUnlockRegistry();
        v23 = (_QWORD *)v31;
        if ( v31 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v18[1]);
          *v23 = v18[1];
        }
        ObfDereferenceObject(Object);
        v18 = 0LL;
        if ( a6 )
          *(_BYTE *)(a3 + 4112) = 1;
        v16 = 0;
      }
      else
      {
        v16 = -1073741670;
        if ( !a11 )
          CmpLockRegistry();
        CmpRemoveHiveFromNamespace(a3, v18[1]);
        if ( !a11 )
          CmpUnlockRegistry();
      }
      if ( v20 )
        CmpFreeTransientPoolWithTag(v20, 0x624E4D43u);
      if ( v18 )
        ObfDereferenceObject(v18);
      v13 = a1;
    }
  }
  if ( v25 )
  {
    *(_DWORD *)(a3 + 144) &= ~0x20u;
    *(_QWORD *)(a3 + 5416) = 0LL;
  }
  if ( v16 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  CmpCleanupParseContext((__int64)v38, a11);
  return (unsigned int)v16;
}
