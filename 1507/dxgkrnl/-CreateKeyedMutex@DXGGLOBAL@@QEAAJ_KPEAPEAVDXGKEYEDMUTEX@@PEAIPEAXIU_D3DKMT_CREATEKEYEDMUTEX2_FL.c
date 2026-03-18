/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005B524
 * Callers:
 *     DxgkCreateKeyedMutex2 @ 0x1C005AF50 (DxgkCreateKeyedMutex2.c)
 *     DxgkCreateKeyedMutex @ 0x1C014E300 (DxgkCreateKeyedMutex.c)
 * Callees:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C000104C (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C005B848 (-Initialize@DXGKEYEDMUTEX@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C014CBF8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  volatile signed __int64 v24; // rcx
  bool v25; // [rsp+20h] [rbp-28h]

  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v11 + 24) = 3334LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 3335LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *a3 = 0LL;
  *a4 = 0;
  v13 = operator new[](0x98uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v15 = v13;
  if ( v13 )
  {
    v13[2] = this;
    *v13 = 0LL;
    v13[1] = 0LL;
    v13[3] = 0LL;
    *((_DWORD *)v13 + 8) = 0;
    *(_QWORD *)((char *)v13 + 36) = 1LL;
    v13[6] = 0LL;
    v13[7] = a2;
    v13[8] = a2;
    v13[9] = 0LL;
    v13[12] = 0LL;
    v13[13] = 0LL;
    *((_DWORD *)v13 + 30) = 0;
    *((_DWORD *)v13 + 31) = 34;
    *((_DWORD *)v13 + 32) = 32;
    v13[14] = 0LL;
    v13[17] = 0LL;
    *((_DWORD *)v13 + 36) = 0;
    *((struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)v13 + 37) = a7;
    v13[11] = v13 + 10;
    v13[10] = v13 + 10;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v20 = DXGKEYEDMUTEX::Initialize((DXGKEYEDMUTEX *)v15);
    if ( v20 >= 0 )
    {
      if ( _InterlockedAdd64(v15 + 3, 1uLL) <= 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
        *(_QWORD *)(v23 + 24) = 540LL;
        WdLogEvent5_WdAssertion(v23);
      }
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 320));
      v24 = *((_QWORD *)this + 45);
      *v15 = v24;
      *((_QWORD *)v15 + 1) = (char *)this + 360;
      if ( *(DXGGLOBAL **)(v24 + 8) != (DXGGLOBAL *)((char *)this + 360) )
        __fastfail(3u);
      *(_QWORD *)(v24 + 8) = v15;
      *((_QWORD *)this + 45) = v15;
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 40);
      v20 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v15, a4, a5, a6, v25);
      if ( v20 >= 0 )
        *a3 = (struct DXGKEYEDMUTEX *)v15;
      DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v15);
    }
    else
    {
      DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)v15);
    }
    return (unsigned int)v20;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
}
