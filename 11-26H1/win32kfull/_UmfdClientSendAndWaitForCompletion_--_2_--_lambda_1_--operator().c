/*
 * XREFs of _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x1400FD2F4
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1400FD478 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1401C15D4 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1401D1440 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1402920F0 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x14034D830 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator()(union _SLIST_HEADER ***a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  union _SLIST_HEADER **v5; // r14
  union _SLIST_HEADER **v6; // r15
  union _SLIST_HEADER **v7; // rsi
  union _SLIST_HEADER *v8; // rbx
  PSLIST_ENTRY v9; // rax
  PSLIST_ENTRY v10; // rdi
  _DWORD *v11; // rbx
  union _SLIST_HEADER *v12; // rcx
  unsigned __int64 v14; // rax
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp+8h] BYREF
  PSLIST_ENTRY v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))((*a1[1])->Alignment + 16))(*a1[1])
    || *(struct _KTHREAD **)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 24184LL) == KeGetCurrentThread() )
  {
    v5 = *a1;
    v6 = a1[1];
    v7 = a1[2];
    v8 = (*a1)[1];
    v9 = ExpInterlockedPopEntrySList(v8 + 1);
    v10 = v9;
    if ( v9 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8);
    }
    else
    {
      v9 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      v10 = v9;
      if ( !v9 )
        goto LABEL_9;
    }
    v17 = v9;
    v11 = EngAllocMem(1u, 0x40u, 0x676D6466u);
    if ( v11 )
    {
      v16 = v11;
      v11[6] = 8;
      *((_QWORD *)v11 + 5) = v10;
      v11[7] = 8;
      *((_QWORD *)v11 + 2) = v11 + 14;
      *((_QWORD *)v11 + 7) = *v6;
      v11[2] = 0;
      v12 = *v5;
      if ( !LOBYTE((*v5)->Alignment) )
      {
        v11[2] = 1;
        ExpInterlockedPushEntrySList(v12 + 1, (PSLIST_ENTRY)v11);
        _InterlockedOr(v15, 0);
LABEL_7:
        *v7 = (union _SLIST_HEADER *)v11;
        return v11 == 0LL ? 0xC0000001 : 0;
      }
      CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v16);
      CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v17);
    }
    else
    {
      CEventPool::CEventPoolEntry::Destroy(v10);
    }
LABEL_9:
    v11 = 0LL;
    goto LABEL_7;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))((*a1[1])->Alignment + 8))(*a1[1]);
  UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v14);
  return 3221225473LL;
}
