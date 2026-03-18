/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1401D18E0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v3 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 16704);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = v4 - 2;
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( a1 == *v5 )
    {
      HMAssignmentUnlock(v5);
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      Win32FreePool(v5);
    }
  }
}
