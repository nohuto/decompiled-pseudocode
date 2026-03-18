/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00960C4
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C007C5D8 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C0093FE0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C01570A0 (DxgkCreateContext.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C001CA4C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B0184 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00B04D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00B0E40 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
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
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v19; // rcx
  DXGCONTEXT *v20; // rbx
  int v21; // esi
  DXGCONTEXT **v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v31; // [rsp+48h] [rbp-20h]
  int v32; // [rsp+50h] [rbp-18h]

  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 1601LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v26 + 24) = 1602LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v27 + 24) = 1603LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentProcess = PsGetCurrentProcess(v14);
  if ( !PsGetProcessDxgProcess(CurrentProcess, v16) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v28 + 24) = 1609LL;
    WdLogEvent5_WdAssertion(v28);
  }
  *a2 = 0LL;
  if ( !a4 )
    a4 = 1;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x180uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v20 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, a3, a4, a5, a8, a9);
  else
    v20 = 0LL;
  if ( v20 )
  {
    v21 = DXGCONTEXT::Initialize(v20, a6, a7);
    if ( v21 < 0 )
    {
      DXGCONTEXT::DestroyContext(v20, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v20);
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)this + 35);
      DXGPUSHLOCK::AcquireExclusive(v31);
      v22 = (DXGCONTEXT **)((char *)this + 312);
      v32 = 2;
      v23 = *((_QWORD *)this + 39);
      if ( *(DXGDEVICE **)(v23 + 8) != (DXGDEVICE *)((char *)this + 312) )
        __fastfail(3u);
      *(_QWORD *)v20 = v23;
      *((_QWORD *)v20 + 1) = v22;
      *(_QWORD *)(v23 + 8) = v20;
      *v22 = v20;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
      *a2 = v20;
      _InterlockedAdd64((volatile signed __int64 *)this + 8, 1uLL);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v19);
    v21 = -1073741801;
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
  }
  return (unsigned int)v21;
}
