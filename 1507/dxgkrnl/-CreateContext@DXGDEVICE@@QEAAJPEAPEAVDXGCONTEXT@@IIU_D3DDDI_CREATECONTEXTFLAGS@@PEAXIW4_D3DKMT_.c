/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C007A574
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C00678D0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C00689F0 (DxgkCreateContext.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00DA848 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0017214 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007305C (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0073374 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0073CF0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        __int64 a3,
        __int64 a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        _QWORD *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v26; // rcx
  DXGCONTEXT *v27; // rbx
  int v28; // edi
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  v9 = a4;
  v10 = a3;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v31 + 24) = 1495LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v32 + 24) = 1496LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v33 + 24) = 1497LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !DXGPROCESS::GetCurrent(v18) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
    *(_QWORD *)(v34 + 24) = 1503LL;
    WdLogEvent5_WdAssertion(v34);
  }
  *a2 = 0LL;
  if ( !v9 )
    v9 = 1;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x180uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v27 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, v10, v9, a5, a8, a9);
  else
    v27 = 0LL;
  if ( v27 )
  {
    v28 = DXGCONTEXT::Initialize(v27, a6, a7);
    if ( v28 < 0 )
    {
      DXGCONTEXT::DestroyContext(v27, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v27);
    }
    else
    {
      v29 = *((_QWORD *)this + 36);
      *(_QWORD *)v27 = v29;
      *((_QWORD *)v27 + 1) = (char *)this + 288;
      if ( *(DXGDEVICE **)(v29 + 8) != (DXGDEVICE *)((char *)this + 288) )
        __fastfail(3u);
      *(_QWORD *)(v29 + 8) = v27;
      *((_QWORD *)this + 36) = v27;
      *a2 = v27;
      _InterlockedAdd64((volatile signed __int64 *)this + 8, 1uLL);
    }
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v26);
    v28 = -1073741801;
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
  }
  return (unsigned int)v28;
}
