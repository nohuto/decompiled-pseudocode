/*
 * XREFs of ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x1800224A4
 * Callers:
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180023064 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     ?Run@?$CTaskWrapper@AEAV_lambda_1386917c2b0eefcf92d5aaca6b176d86_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180024C10 (-Run@-$CTaskWrapper@AEAV_lambda_1386917c2b0eefcf92d5aaca6b176d86_@@@ComTaskPool@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002CBC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CommitTDLItemWithRetry(wil::details::in1diag3 *a1, __int64 a2)
{
  int v2; // esi
  DWORD v5; // r14d
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *v11; // rcx
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v5 = 10;
  if ( !*((_QWORD *)a1 + 12) )
LABEL_22:
    wil::details::in1diag3::_FailFastImmediate_Unexpected(a1);
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 12) + 16LL))(*((_QWORD *)a1 + 12));
    v8 = v6;
    if ( v6 >= 0 )
      break;
    if ( v2 >= 5 )
    {
      v10 = 121LL;
      goto LABEL_11;
    }
    if ( ++v2 >= 2 )
    {
      Sleep(v5);
      v5 += 50;
    }
    v9 = *(_QWORD *)(a2 + 96);
    if ( !v9 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v8 = v6;
    if ( v6 < 0 )
    {
      v10 = 118LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v6);
      break;
    }
    if ( !*((_QWORD *)a1 + 12) )
      goto LABEL_22;
  }
  v11 = (wil::details::in1diag3 *)*((_QWORD *)a1 + 12);
  if ( v11 )
  {
    LOBYTE(v7) = v11 != a1;
    (*(void (__fastcall **)(wil::details::in1diag3 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, v7);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  v12 = (wil::details::in1diag3 *)*((_QWORD *)a1 + 12);
  if ( v12 )
  {
    LOBYTE(v7) = v12 != a1;
    (*(void (__fastcall **)(wil::details::in1diag3 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, v7);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  v13 = *(_QWORD *)(a2 + 96);
  if ( v13 )
  {
    LOBYTE(v7) = v13 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v7);
    *(_QWORD *)(a2 + 96) = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 96);
  if ( v14 )
  {
    LOBYTE(v7) = v14 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v7);
    *(_QWORD *)(a2 + 96) = 0LL;
  }
  return v8;
}
