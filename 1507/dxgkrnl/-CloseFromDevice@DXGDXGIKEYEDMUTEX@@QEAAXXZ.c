/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C015270C
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008DE80 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01521F8 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0152974 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDEVICE **this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  DXGDEVICE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  DXGDEVICE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGALLOCATION **v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // edx
  unsigned int v34; // edi
  struct DXGSYNCOBJECT *v35; // rsi
  PERESOURCE *Global; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v40[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = this[2];
  v5[5] = this[5];
  v6 = this[2];
  if ( !v6 )
    return;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 470LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = this[2];
  if ( !*((_DWORD *)v12 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v12 + 10));
  if ( this[5] != (DXGDEVICE *)PsGetCurrentProcess(v12) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 472LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_DWORD *)this + 24) )
  {
    Current = DXGPROCESS::GetCurrent(v14);
    if ( !Current )
    {
      v23 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
      *(_QWORD *)(v23 + 24) = 483LL;
      WdLogEvent5_WdAssertion(v23);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40, Current);
    v26 = *((unsigned int *)this + 24);
    v27 = (*((_DWORD *)this + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *((_DWORD *)Current + 58)
      && (v25 = *((_QWORD *)Current + 27),
          v26 = ((unsigned int)v26 >> 26) & 0x30,
          v24 = *(unsigned int *)(v25 + 16LL * (unsigned int)v27 + 8),
          (_BYTE)v26 == (*(_BYTE *)(v25 + 16LL * (unsigned int)v27 + 8) & 0x30))
      && (v24 & 0x1000) == 0
      && (v24 & 0xF) != 0
      && (*(_BYTE *)(v25 + 16LL * (unsigned int)v27 + 8) & 0xF) == 4 )
    {
      v28 = *(struct DXGALLOCATION ***)(v25 + 16LL * (unsigned int)v27);
      if ( v28 )
        goto LABEL_20;
    }
    else
    {
      v28 = 0LL;
    }
    v29 = WdLogNewEntry5_WdAssertion(v27, v26, v24, v25);
    *(_QWORD *)(v29 + 24) = 489LL;
    WdLogEvent5_WdAssertion(v29);
LABEL_20:
    v30 = *((_DWORD *)this + 24);
    v31 = (v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *((_DWORD *)Current + 58) )
    {
      v32 = *((_QWORD *)Current + 27);
      v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
      if ( ((v30 >> 26) & 0x30) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x30) && (v33 & 0x1000) == 0 && (v33 & 0xF) != 0 )
        *(_DWORD *)(v32 + 16LL * ((v30 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    DXGDEVICE::DestroyAllocationInternal(this[2], 0, 0LL, v28, 0LL, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
  }
  v34 = *((_DWORD *)this + 26);
  if ( v34 )
  {
    v35 = this[14];
    if ( v35 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14, v13, v15, v16);
      DXGGLOBAL::DestroySyncObject(Global, v35, v34, v37);
      *((_DWORD *)this + 26) = 0;
      this[14] = 0LL;
    }
  }
  if ( this[14] )
  {
    v38 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v38 + 24) = 509LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( *((_DWORD *)this + 26) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v39 + 24) = 510LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( *((_DWORD *)this + 6) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  this[2] = 0LL;
}
