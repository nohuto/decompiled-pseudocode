/*
 * XREFs of xxxSetActiveWindow @ 0x1C012FEE0
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C012FE50 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C022A578 (xxxActivateEnabledPopup.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSetActiveWindow(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = 0LL;
  if ( a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) != *(_QWORD *)(gptiCurrent + 384LL) )
    return 0LL;
  v2 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( v2 )
    v1 = *v2;
  xxxActivateWindow((struct tagWND *)a1, 1LL);
  LOBYTE(v3) = 1;
  return HMValidateHandleNoSecure(v1, v3, v4, v5);
}
