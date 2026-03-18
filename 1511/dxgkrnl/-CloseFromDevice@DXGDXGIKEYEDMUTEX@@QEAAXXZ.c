/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01569AC
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009E730 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C0156498 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01581E8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0156C14 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // r8d
  struct DXGRESOURCE *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // edx
  unsigned int v24; // edi
  struct DXGSYNCOBJECT *v25; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 2);
  v5[5] = *((_QWORD *)this + 5);
  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
    return;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 463LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v9 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v9 + 80));
  if ( *((_QWORD *)this + 5) != PsGetCurrentProcess(v9) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 465LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_DWORD *)this + 24) )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 476LL;
      WdLogEvent5_WdAssertion(v14);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, Current);
    v15 = (*((_DWORD *)this + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)Current + 58)
      && (v16 = *((_QWORD *)Current + 27),
          v17 = *(_DWORD *)(v16 + 16LL * (unsigned int)v15 + 8),
          ((*((_DWORD *)this + 24) >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0xF) == 4 )
    {
      v18 = *(struct DXGRESOURCE **)(v16 + 16LL * (unsigned int)v15);
      if ( v18 )
        goto LABEL_20;
    }
    else
    {
      v18 = 0LL;
    }
    v19 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v19 + 24) = 482LL;
    WdLogEvent5_WdAssertion(v19);
LABEL_20:
    v20 = *((_DWORD *)this + 24);
    v21 = (v20 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)Current + 58) )
    {
      v22 = *((_QWORD *)Current + 27);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( ((v20 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x30) && (v23 & 0x1000) == 0 && (v23 & 0xF) != 0 )
        *(_DWORD *)(v22 + 16LL * ((v20 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 2), 0, 0LL, v18, 0LL, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
  }
  v24 = *((_DWORD *)this + 26);
  if ( v24 )
  {
    v25 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 14);
    if ( v25 )
    {
      Global = DXGGLOBAL::GetGlobal(v10);
      DXGGLOBAL::DestroySyncObject(Global, v25, v24);
      *((_DWORD *)this + 26) = 0;
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 14) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 502LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_DWORD *)this + 26) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v28 + 24) = 503LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( *((_DWORD *)this + 6) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 2) = 0LL;
}
