/*
 * XREFs of ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008D54C
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C008D2FC (CheckForegroundRight.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 */

__int64 __fastcall CheckImmersiveForegroundAccess(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( (*((_DWORD *)a1 + 194) & 0x100) != 0 )
    return 1LL;
  v4 = *((_DWORD *)a1 + 209);
  v5 = 0;
  if ( !v4 )
  {
    if ( !(unsigned int)IsDesktopApp(a1) )
      return 1LL;
    if ( !gpqForeground )
      return 1LL;
    v9 = *(_QWORD *)(gpqForeground + 80LL);
    return !v9 || (unsigned int)IsNonImmersiveBand(v9, v6, v7, v8);
  }
  if ( v4 != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 376LL) + 836LL)
    && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
  {
    return 0LL;
  }
  if ( gpqForeground )
  {
    v11 = *(_QWORD *)(gpqForeground + 80LL);
    v12 = v11 ? *(_QWORD *)(v11 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 376) + 836LL) != *((_DWORD *)a1 + 209)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0LL;
    }
  }
  LOBYTE(v5) = *((_DWORD *)a1 + 210) != 1;
  return v5;
}
