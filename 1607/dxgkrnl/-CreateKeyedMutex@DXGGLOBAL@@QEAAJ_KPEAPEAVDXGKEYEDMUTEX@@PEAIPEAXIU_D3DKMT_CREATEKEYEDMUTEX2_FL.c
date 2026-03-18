/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C006FA24
 * Callers:
 *     DxgkCreateKeyedMutex2 @ 0x1C006F040 (DxgkCreateKeyedMutex2.c)
 *     DxgkCreateKeyedMutex @ 0x1C0176EC0 (DxgkCreateKeyedMutex.c)
 * Callees:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C000113C (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C00702A8 (-Initialize@DXGKEYEDMUTEX@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C01763A8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
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
  _QWORD *v11; // rax
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rcx
  int v15; // edi
  volatile signed __int64 **v16; // rax
  volatile signed __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // [rsp+20h] [rbp-28h]

  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v19 + 24) = 3442LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v20 + 24) = 3443LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *a3 = 0LL;
  *a4 = 0;
  v11 = operator new(0x98uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v13 = v11;
  if ( v11 )
  {
    v11[2] = this;
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[3] = 0LL;
    *((_DWORD *)v11 + 8) = 0;
    *(_QWORD *)((char *)v11 + 36) = 1LL;
    v11[6] = 0LL;
    v11[7] = a2;
    v11[8] = a2;
    v11[9] = 0LL;
    v11[12] = 0LL;
    v11[13] = 0LL;
    *((_DWORD *)v11 + 30) = 0;
    *((_DWORD *)v11 + 31) = 34;
    *((_DWORD *)v11 + 32) = 32;
    v11[14] = 0LL;
    v11[17] = 0LL;
    *((_DWORD *)v11 + 36) = 0;
    *((struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)v11 + 37) = a7;
    v11[11] = v11 + 10;
    v11[10] = v11 + 10;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v15 = DXGKEYEDMUTEX::Initialize((DXGKEYEDMUTEX *)v13);
    if ( v15 < 0 )
    {
      DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)v13);
    }
    else
    {
      if ( _InterlockedAdd64(v13 + 3, 1uLL) <= 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v22 + 24) = 540LL;
        WdLogEvent5_WdAssertion(v22);
      }
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 320));
      v16 = (volatile signed __int64 **)((char *)this + 360);
      v17 = *((_QWORD *)this + 45);
      if ( *(DXGGLOBAL **)(v17 + 8) != (DXGGLOBAL *)((char *)this + 360) )
        __fastfail(3u);
      *v13 = v17;
      *((_QWORD *)v13 + 1) = v16;
      *(_QWORD *)(v17 + 8) = v13;
      *v16 = v13;
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 40);
      v15 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v13, a4, a5, a6, v23);
      if ( v15 >= 0 )
        *a3 = (struct DXGKEYEDMUTEX *)v13;
      DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v13);
    }
    return (unsigned int)v15;
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v21 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
