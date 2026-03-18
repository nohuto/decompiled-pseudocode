/*
 * XREFs of ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017AD20
 * Callers:
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140179A14 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14017A93C (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14017A9B4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x14017AE94 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  struct tagWND *v7; // rax
  struct tagWND *i; // r14
  __int16 *v9; // rbx
  __int16 v10; // bx
  __int64 v11; // rdx
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  ULONG64 *v17; // [rsp+60h] [rbp+18h]
  ULONG64 v18; // [rsp+60h] [rbp+18h]

  v17 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v17 )
    return 0LL;
  v18 = *v17;
  if ( !v18 || v18 == -1LL )
    return 0LL;
  v5 = MmUserProbeAddress;
  if ( v18 < MmUserProbeAddress )
    v5 = v18;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v7 )
  {
    while ( v7 != a2 )
    {
      if ( !v7 )
        return 0LL;
      v7 = (struct tagWND *)*((_QWORD *)v7 + 15);
    }
    if ( !v7 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 15) )
  {
    v9 = *(__int16 **)(*((_QWORD *)i + 17) + 8LL);
    if ( (v9[5] & 1) != 0 )
      return 0LL;
    v10 = *v9;
    v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
    if ( v10 == *(_WORD *)(v5 + 898) )
      return 0LL;
  }
  zzzImeSetFutureOwner(a1, a2);
  ImeCheckTopmost((struct tagWND **)a1, v11);
  v12 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v12 )
  {
    if ( a2 != v12 )
      return 0LL;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v15 = *(_QWORD *)a1;
    v16 = (void *)ReferenceDwmApiPort(v14, v13);
    DwmAsyncOwnerChange(v16, v15, 0LL);
  }
  return 1LL;
}
