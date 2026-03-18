/*
 * XREFs of ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00AAB58
 * Callers:
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00AB1B8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 */

__int64 __fastcall CheckImmersiveForegroundAccess(struct tagPROCESSINFO *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (*((_DWORD *)a1 + 192) & 0x100) != 0 )
    return 1LL;
  v6 = *((unsigned int *)a1 + 207);
  v7 = 0;
  if ( !(_DWORD)v6 )
  {
    if ( !(unsigned int)IsDesktopApp(a1, v6, a2, a4) )
      return 1LL;
    if ( !gpqForeground )
      return 1LL;
    v11 = *(_QWORD *)(gpqForeground + 88LL);
    return !v11 || (unsigned int)IsNonImmersiveBand(v11, v8, v9, v10);
  }
  if ( (_DWORD)v6 != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 376LL) + 828LL)
    && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
  {
    return 0LL;
  }
  if ( gpqForeground )
  {
    v13 = *(_QWORD *)(gpqForeground + 88LL);
    v14 = v13 ? *(_QWORD *)(v13 + 16) : *(_QWORD *)(gpqForeground + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 376) + 828LL) != *((_DWORD *)a1 + 207)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0LL;
    }
  }
  LOBYTE(v7) = *((_DWORD *)a1 + 208) != 1;
  return v7;
}
