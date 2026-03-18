/*
 * XREFs of zzzImeCanDestroyDefIME @ 0x1C008FB88
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C0068E08 (DwmAsyncOwnerChange.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C008FCC0 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ImeCheckTopmost @ 0x1C0090238 (ImeCheckTopmost.c)
 *     zzzImeSetFutureOwner @ 0x1C00905E0 (zzzImeSetFutureOwner.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 i; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax

  v4 = unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v4 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 376);
  if ( !v5 || v5 == -1LL )
    return 0LL;
  if ( v5 >= W32UserProbeAddress )
    v5 = W32UserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = (_QWORD *)((char *)a1 + 104);
  v8 = *((_QWORD *)a1 + 13);
  if ( v8 )
  {
    while ( v8 != a2 )
    {
      if ( !v8 )
        return 0LL;
      v8 = *(_QWORD *)(v8 + 104);
    }
    if ( !v8 )
      return 0LL;
  }
  for ( i = a2; i; i = *(_QWORD *)(i + 104) )
  {
    v10 = *(_QWORD *)(i + 152);
    if ( (*(_BYTE *)(v10 + 86) & 1) != 0 || *(_WORD *)(v10 + 8) == *(_WORD *)(gpsi + 882LL) )
      return 0LL;
  }
  zzzImeSetFutureOwner(a1);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != *v7 )
    return 0LL;
  HMAssignmentUnlock((char *)a1 + 104);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
    DwmAsyncOwnerChange(v15, *(_QWORD *)a1, 0LL);
  }
  return 1LL;
}
