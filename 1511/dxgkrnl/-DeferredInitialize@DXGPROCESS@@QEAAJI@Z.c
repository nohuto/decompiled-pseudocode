/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0068570
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00682E4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00D4360 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C000B97C (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rsi
  VIDSCH_EXPORT *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGGLOBAL *v24; // rax

  v2 = a2;
  if ( a2 >= 2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v19 + 24) = 740LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v2 + 16) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v20 + 24) = 745LL;
    WdLogEvent5_WdAssertion(v20);
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
  v10 = *((_QWORD *)this + 9);
  v11 = (unsigned int)(*(_DWORD *)v6 - 1);
  *(_QWORD *)(v10 + 8 * v11 + 16) = v7;
  if ( !v7 )
    goto LABEL_22;
  if ( *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v2) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v22 + 24) = 756LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v12 = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v2 >= 2 )
  {
    v13 = 0LL;
  }
  else
  {
    _mm_lfence();
    v13 = *((_QWORD *)v12 + v2 + 13);
  }
  v14 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v13 + 8) + 336LL))(this);
  v10 = *((_QWORD *)this + 9);
  v11 = (unsigned int)(*(_DWORD *)v13 - 1);
  *(_QWORD *)(v10 + 8 * v11) = v14;
  if ( v14 )
  {
    v15 = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v2 >= 2 )
      v17 = 0LL;
    else
      v17 = *((_QWORD *)v15 + v2 + 15);
    if ( !v17 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v23 + 24) = 768LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( *((_BYTE *)this + 314) )
    {
      v24 = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v2 < 2 )
        v4 = (VIDSCH_EXPORT *)*((_QWORD *)v24 + v2 + 15);
      VIDSCH_EXPORT::VidSchRegisterAsDwm(v4, this);
    }
    return 0LL;
  }
  else
  {
LABEL_22:
    v21 = WdLogNewEntry5_WdLowResource(v10, v11, v8, v9);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
