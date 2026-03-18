/*
 * XREFs of ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00454E8
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 */

__int64 __fastcall CheckImmersiveForegroundAccess(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (*((_DWORD *)a1 + 194) & 0x100) != 0 )
    return 1LL;
  v4 = *((unsigned int *)a1 + 209);
  v5 = 0;
  if ( !(_DWORD)v4 )
  {
    if ( !(unsigned int)IsDesktopApp(a1, v4) )
      return 1LL;
    if ( !gpqForeground )
      return 1LL;
    v8 = *(_QWORD *)(gpqForeground + 80LL);
    return !v8 || (unsigned int)IsNonImmersiveBand(v8, v6, v7);
  }
  if ( (_DWORD)v4 != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 384LL) + 836LL)
    && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
  {
    return 0LL;
  }
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 80LL);
    v11 = v10 ? *(_QWORD *)(v10 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( *(_DWORD *)(*(_QWORD *)(v11 + 384) + 836LL) != *((_DWORD *)a1 + 209)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0LL;
    }
  }
  LOBYTE(v5) = *((_DWORD *)a1 + 210) != 1;
  return v5;
}
