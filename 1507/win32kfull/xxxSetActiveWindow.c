/*
 * XREFs of xxxSetActiveWindow @ 0x1C00FCE40
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C00FCDB0 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C0231300 (xxxActivateEnabledPopup.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSetActiveWindow(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *v2; // rdx

  v1 = 0LL;
  if ( a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL) != *(_QWORD *)(gptiCurrent + 392LL) )
    return 0LL;
  v2 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
  if ( v2 )
    v1 = *v2;
  xxxActivateWindow((struct tagWND *)a1, 1LL);
  return HMValidateHandleNoSecure(v1, 1);
}
