/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B4D0
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00780F0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C017AF78 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C017B748 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // r8d
  struct DXGALLOCATION **v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // edx
  unsigned int v26; // ebx
  struct DXGSYNCOBJECT *v27; // rsi
  PERESOURCE *Global; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  _BYTE v33[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 2);
  v5[5] = *((_QWORD *)this + 5);
  if ( !*((_QWORD *)this + 2) )
    return;
  if ( *((_QWORD *)this + 5) != PsGetCurrentProcess(v6)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v31[3] = PsGetCurrentProcess(v32);
    v31[4] = *((_QWORD *)this + 5);
    v31[5] = *((_QWORD *)this + 2);
    return;
  }
  v11 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v11 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v11 + 80));
  if ( *((_DWORD *)this + 24) )
  {
    CurrentProcess = PsGetCurrentProcess(v11);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v13);
    if ( !ProcessDxgProcess )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v16 + 24) = 511LL;
      WdLogEvent5_WdAssertion(v16);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v33,
      (struct DXGPROCESS *)ProcessDxgProcess);
    v17 = (*((_DWORD *)this + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v18 = *(_QWORD *)(ProcessDxgProcess + 208),
          v19 = *(_DWORD *)(v18 + 16LL * (unsigned int)v17 + 8),
          ((*((_DWORD *)this + 24) >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * (unsigned int)v17 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v18 + 16LL * (unsigned int)v17 + 8) & 0xF) == 4 )
    {
      v20 = *(struct DXGALLOCATION ***)(v18 + 16LL * (unsigned int)v17);
      if ( v20 )
        goto LABEL_18;
    }
    else
    {
      v20 = 0LL;
    }
    v21 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v21 + 24) = 517LL;
    WdLogEvent5_WdAssertion(v21);
LABEL_18:
    v22 = *((_DWORD *)this + 24);
    v23 = (v22 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v24 = *(_QWORD *)(ProcessDxgProcess + 208);
      v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
      if ( ((v22 >> 26) & 0x30) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x30) && (v25 & 0x1000) == 0 && (v25 & 0xF) != 0 )
        *(_DWORD *)(v24 + 16LL * ((v22 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 2), 0, 0LL, v20, 0LL, DXGDEVICE::DestroyFlagsDefault);
    *((_QWORD *)this + 12) = 0LL;
  }
  v26 = *((_DWORD *)this + 26);
  if ( v26 )
  {
    v27 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 14);
    if ( v27 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11);
      DXGGLOBAL::DestroySyncObject(Global, v27, v26, 0);
      *((_DWORD *)this + 26) = 0;
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 14) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v29 + 24) = 537LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_DWORD *)this + 26) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v30 + 24) = 538LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( *((_DWORD *)this + 6) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 2) = 0LL;
}
