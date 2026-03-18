/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394
 * Callers:
 *     DxgkCreateKeyedMutex2 @ 0x1C005BF20 (DxgkCreateKeyedMutex2.c)
 *     DxgkCreateKeyedMutex @ 0x1C0152030 (DxgkCreateKeyedMutex.c)
 * Callees:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0001068 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEX@@QEAA@PEAVDXGGLOBAL@@_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C4AC (--0DXGKEYEDMUTEX@@QEAA@PEAVDXGGLOBAL@@_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C005C670 (-Initialize@DXGKEYEDMUTEX@@QEAAJXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z @ 0x1C005C730 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        union _LARGE_INTEGER *this,
        unsigned __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  DXGKEYEDMUTEX *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGKEYEDMUTEX *v16; // rbx
  __int64 v17; // rcx
  int v18; // edi
  union _LARGE_INTEGER v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v21 + 24) = 3285LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 3286LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *a3 = 0LL;
  *a4 = 0;
  v11 = (DXGKEYEDMUTEX *)operator new[](0xB0uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v11 )
    v16 = DXGKEYEDMUTEX::DXGKEYEDMUTEX(v11, (struct DXGGLOBAL *)this, a2, a7);
  else
    v16 = 0LL;
  if ( v16 )
  {
    v18 = DXGKEYEDMUTEX::Initialize(v16);
    if ( v18 < 0 )
    {
      DXGKEYEDMUTEX::`scalar deleting destructor'(v16);
    }
    else
    {
      if ( _InterlockedAdd64((volatile signed __int64 *)v16 + 3, 1uLL) <= 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v24 + 24) = 499LL;
        WdLogEvent5_WdAssertion(v24);
      }
      DXGFASTMUTEX::Acquire(this + 49);
      v19 = this[57];
      *(union _LARGE_INTEGER *)v16 = v19;
      *((_QWORD *)v16 + 1) = this + 57;
      if ( *(union _LARGE_INTEGER **)(v19.QuadPart + 8) != &this[57] )
        __fastfail(3u);
      *(_QWORD *)(v19.QuadPart + 8) = v16;
      this[57].QuadPart = (LONGLONG)v16;
      DXGFASTMUTEX::Release((DXGFASTMUTEX *)&this[49]);
      v18 = DXGKEYEDMUTEX::Open(v16, a4, a5, a6);
      if ( v18 >= 0 )
        *a3 = v16;
      DXGKEYEDMUTEX::ReleaseReference(v16);
    }
    return (unsigned int)v18;
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
}
