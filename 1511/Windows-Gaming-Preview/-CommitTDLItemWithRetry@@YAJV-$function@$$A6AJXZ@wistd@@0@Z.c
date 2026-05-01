/*
 * XREFs of ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180021958
 * Callers:
 *     _lambda_96d0bed5b180209255fc5fd7d24cbe07_::operator() @ 0x180022238 (_lambda_96d0bed5b180209255fc5fd7d24cbe07_--operator().c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180022E4C (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_Xbad_function_call@wistd@@YAXXZ @ 0x18001FC88 (-_Xbad_function_call@wistd@@YAXXZ.c)
 *     ?NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ @ 0x1800214D4 (-NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ.c)
 *     ??1?$function@$$A6AJXZ@wistd@@QEAA@XZ @ 0x180023E8C (--1-$function@$$A6AJXZ@wistd@@QEAA@XZ.c)
 *     ??$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z @ 0x18002432C (--$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180024C60 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CommitTDLItemWithRetry(wistd *a1, __int64 a2)
{
  DWORD v4; // r14d
  wistd *v5; // rcx
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  char *v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char *v15; // [rsp+60h] [rbp+30h] BYREF
  int v16; // [rsp+70h] [rbp+40h] BYREF
  char *v17; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v15) = 0;
  v16 = 0;
  LODWORD(v17) = 0;
  v4 = 10;
  if ( !*((_QWORD *)a1 + 12) )
LABEL_21:
    wistd::_Xbad_function_call(a1);
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 12) + 16LL))(*((_QWORD *)a1 + 12));
    LODWORD(v17) = v6;
    v7 = (int)v15;
    if ( v6 >= 0 || (int)v15 >= 5 )
      break;
    LODWORD(v15) = (_DWORD)v15 + 1;
    if ( v7 + 1 >= 2 )
    {
      v16 += v4;
      Sleep(v4);
      v4 += 50;
    }
    v8 = *(_QWORD *)(a2 + 96);
    if ( !v8 )
      wistd::_Xbad_function_call(v5);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*(_QWORD *)(a2 + 96));
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 129LL;
LABEL_11:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v11,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)v10);
      goto LABEL_18;
    }
    if ( !*((_QWORD *)a1 + 12) )
      goto LABEL_21;
  }
  if ( (int)v15 <= 0 )
  {
    if ( v6 < 0 )
    {
      v10 = (unsigned int)v6;
      v11 = 146LL;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (int)v15 >= 2 )
      TileDataLayerItemWrappersTelemetry::DelayedRetry<long &,int &,int &>(&v17, &v15, &v16);
    else
      TileDataLayerItemWrappersTelemetry::NoDelayRetrySucceeded();
    v6 = (int)v17;
    if ( (int)v17 < 0 )
    {
      LODWORD(v13) = (_DWORD)v15;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x8E,
        (unsigned int)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v17,
        (int)"retries: %d",
        v13);
    }
  }
LABEL_18:
  wistd::function<long (void)>::~function<long (void)>(a1);
  wistd::function<long (void)>::~function<long (void)>(a2);
  return (unsigned int)v6;
}
