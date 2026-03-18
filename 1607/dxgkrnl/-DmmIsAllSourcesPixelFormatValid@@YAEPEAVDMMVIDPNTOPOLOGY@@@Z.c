/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C007D070
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0084BC4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(__int64 a1)
{
  struct DMMVIDPNTOPOLOGY *v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  struct DMMVIDPNTOPOLOGY *v8; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct DMMVIDPNTOPOLOGY *)a1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  v2 = (_QWORD *)((char *)v1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 1;
  v3 = *v2 - 8LL;
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v3 + 88);
    if ( !v4 )
    {
      v12 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v12);
    }
    v14 = 0LL;
    v5 = *(_QWORD *)(v4 + 104);
    if ( !v5 )
    {
      v6 = 0LL;
LABEL_19:
      v13 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v13);
      goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v4 + 104);
    if ( !v6 )
      goto LABEL_19;
LABEL_9:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v14, v6);
    v7 = *(_QWORD *)(v14 + 144);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v14, 0LL);
    if ( v7 )
    {
      v10 = *(int *)(v7 + 96);
      if ( (unsigned int)v10 <= 0x29 )
      {
        a1 = 0x20003900000LL;
        if ( _bittest64(&a1, v10) )
          return 0;
      }
    }
    v8 = *(struct DMMVIDPNTOPOLOGY **)(v3 + 8);
    if ( v8 == (struct DMMVIDPNTOPOLOGY *)((char *)v1 + 24) )
      v3 = 0LL;
    else
      v3 = (__int64)v8 - 8;
    if ( !v3 )
      return 1;
  }
}
