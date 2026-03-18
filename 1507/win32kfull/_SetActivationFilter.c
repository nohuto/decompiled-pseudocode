/*
 * XREFs of _SetActivationFilter @ 0x1C00090B4
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0009000 (NtUserSetActivationFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetActivationFilter(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  _QWORD *i; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx

  v2 = 0;
  v5 = 0LL;
  v6 = (_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 248LL);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    if ( a1 == i[2] )
    {
      v5 = (__int64)i;
      break;
    }
  }
  if ( !a2 )
  {
LABEL_10:
    if ( v5 )
      goto LABEL_11;
    return v2;
  }
  if ( v5 )
  {
LABEL_11:
    *(_DWORD *)(v5 + 24) = a2;
    return 1;
  }
  v5 = Win32AllocPoolZInit(32LL, 1869443925LL);
  if ( v5 )
  {
    v8 = (__int64 *)(*(_QWORD *)(gptiCurrent + 416LL) + 248LL);
    v9 = *v8;
    *(_QWORD *)v5 = *v8;
    *(_QWORD *)(v5 + 8) = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v5;
    *v8 = v5;
    HMAssignmentLock(v5 + 16, a1);
    goto LABEL_10;
  }
  return v2;
}
