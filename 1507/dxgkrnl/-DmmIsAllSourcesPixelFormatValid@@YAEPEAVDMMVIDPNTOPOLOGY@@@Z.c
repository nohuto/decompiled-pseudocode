/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00975AC
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0096EE4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DMMVIDPNTOPOLOGY *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  struct DMMVIDPNTOPOLOGY *v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct DMMVIDPNTOPOLOGY *)a1;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v5 = (_QWORD *)((char *)v4 + 24);
  if ( (_QWORD *)*v5 == v5 )
    return 1;
  v6 = *v5 - 8LL;
  if ( !v6 )
    return 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 88);
    if ( !v7 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v15);
    }
    v17 = 0LL;
    v8 = *(_QWORD *)(v7 + 104);
    if ( !v8 )
    {
      v9 = 0LL;
LABEL_19:
      v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v16);
      goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 96));
    v9 = *(_QWORD *)(v7 + 104);
    if ( !v9 )
      goto LABEL_19;
LABEL_9:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v17, v9);
    v10 = *(_QWORD *)(v17 + 144);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v17, 0LL);
    if ( v10 )
    {
      v11 = *(int *)(v10 + 96);
      if ( (unsigned int)v11 <= 0x29 )
      {
        a1 = 0x20003900000LL;
        if ( _bittest64(&a1, v11) )
          return 0;
      }
    }
    v12 = *(struct DMMVIDPNTOPOLOGY **)(v6 + 8);
    if ( v12 == (struct DMMVIDPNTOPOLOGY *)((char *)v4 + 24) )
      v6 = 0LL;
    else
      v6 = (__int64)v12 - 8;
    if ( !v6 )
      return 1;
  }
}
