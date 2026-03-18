/*
 * XREFs of _SetActivationFilter @ 0x1C000BD04
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C000BC60 (NtUserSetActivationFilter.c)
 * Callees:
 *     _FindActivationFilterWindow @ 0x1C006826C (_FindActivationFilterWindow.c)
 */

__int64 __fastcall SetActivationFilter(__int64 a1, int a2)
{
  __int64 ActivationFilterWindow; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx

  ActivationFilterWindow = FindActivationFilterWindow();
  v5 = 0;
  v6 = ActivationFilterWindow;
  if ( !a2 )
    goto LABEL_6;
  if ( ActivationFilterWindow )
  {
LABEL_7:
    *(_DWORD *)(v6 + 24) = a2;
    return 1;
  }
  v7 = Win32AllocPoolZInit(32LL, 1869443925LL);
  v6 = v7;
  if ( v7 )
  {
    HMAssignmentLock(v7 + 16, a1);
    v8 = (__int64 *)(*(_QWORD *)(a1 + 24) + 304LL);
    v9 = *v8;
    *(_QWORD *)v6 = *v8;
    *(_QWORD *)(v6 + 8) = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v6;
    *v8 = v6;
LABEL_6:
    if ( v6 )
      goto LABEL_7;
  }
  return v5;
}
