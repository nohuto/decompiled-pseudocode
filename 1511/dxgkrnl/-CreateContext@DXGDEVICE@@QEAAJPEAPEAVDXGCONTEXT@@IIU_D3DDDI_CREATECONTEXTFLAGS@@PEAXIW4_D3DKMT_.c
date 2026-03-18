/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C006DABC
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C008A8B0 (DxgkCreateContextVirtual.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F874 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     DxgkCreateContext @ 0x1C01378F0 (DxgkCreateContext.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0018858 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0084B64 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0084EB4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00857CC (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGCONTEXT *v21; // rbx
  int v22; // edi
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 1521LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v26 + 24) = 1522LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v27 + 24) = 1523LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v28 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v28 + 24) = 1529LL;
    WdLogEvent5_WdAssertion(v28);
  }
  *a2 = 0LL;
  if ( !a4 )
    a4 = 1;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x180uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v21 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, a3, a4, a5, a8, a9);
  else
    v21 = 0LL;
  if ( v21 )
  {
    v22 = DXGCONTEXT::Initialize(v21, a6, a7);
    if ( v22 < 0 )
    {
      DXGCONTEXT::DestroyContext(v21, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v21);
    }
    else
    {
      v23 = *((_QWORD *)this + 36);
      *(_QWORD *)v21 = v23;
      *((_QWORD *)v21 + 1) = (char *)this + 288;
      if ( *(DXGDEVICE **)(v23 + 8) != (DXGDEVICE *)((char *)this + 288) )
        __fastfail(3u);
      *(_QWORD *)(v23 + 8) = v21;
      *((_QWORD *)this + 36) = v21;
      *a2 = v21;
      _InterlockedAdd64((volatile signed __int64 *)this + 8, 1uLL);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    v22 = -1073741801;
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
  }
  return (unsigned int)v22;
}
