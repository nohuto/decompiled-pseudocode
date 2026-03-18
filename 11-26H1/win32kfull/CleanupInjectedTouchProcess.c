/*
 * XREFs of CleanupInjectedTouchProcess @ 0x14025FF00
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x14029DF4C (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *i; // rbx
  _QWORD *v11; // rdi

  v1 = *(_QWORD *)(a1 + 880);
  v3 = *(void **)(v1 + 88);
  v4 = *(_QWORD *)(v1 + 96);
  if ( *(_QWORD *)(v1 + 16) )
    HMAssignmentUnlock(v1 + 16);
  if ( v3 && v4 )
  {
    RIMRemoveInjectionDevice(v3, v4);
    ZwClose(v3);
  }
  Win32FreePool(*(void **)(v1 + 80));
  Win32FreePool((void *)v1);
  v5 = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v7, v6) + 19296); i; i = (_QWORD *)*i )
  {
    v11 = (_QWORD *)*i;
    if ( i[1] == a1 )
    {
      if ( v5 )
        *v5 = v11;
      else
        *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19296) = v11;
      Win32FreePool(i);
      return 1LL;
    }
    v5 = i;
  }
  return 1LL;
}
