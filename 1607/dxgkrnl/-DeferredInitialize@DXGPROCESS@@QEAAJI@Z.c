/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00A2D64
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00A26A8 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00E8FB4 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0004394 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rsi
  VIDSCH_EXPORT *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGGLOBAL *v21; // rax

  v2 = a2;
  if ( a2 >= 2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 1029LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2 + 16) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v17 + 24) = 1034LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v2 >= 2 )
  {
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *((_QWORD *)Global + v2 + 15);
  }
  v7 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v6 + 8) + 80LL))(this);
  v8 = *((_QWORD *)this + 8);
  *(_QWORD *)(v8 + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16) = v7;
  if ( !v7 )
    goto LABEL_22;
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v19 + 24) = 1045LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v2 >= 2 )
  {
    v10 = 0LL;
  }
  else
  {
    _mm_lfence();
    v10 = *((_QWORD *)v9 + v2 + 13);
  }
  v11 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v10 + 8) + 352LL))(this);
  v8 = *((_QWORD *)this + 8);
  *(_QWORD *)(v8 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1)) = v11;
  if ( v11 )
  {
    v12 = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v2 >= 2 )
      v14 = 0LL;
    else
      v14 = *((_QWORD *)v12 + v2 + 15);
    if ( !v14 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v20 + 24) = 1057LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_BYTE *)this + 290) )
    {
      v21 = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v2 < 2 )
        v4 = (VIDSCH_EXPORT *)*((_QWORD *)v21 + v2 + 15);
      VIDSCH_EXPORT::VidSchRegisterAsDwm(v4, this);
    }
    return 0LL;
  }
  else
  {
LABEL_22:
    v18 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
}
