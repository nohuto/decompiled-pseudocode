/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800ECDF0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x1800742CC (FindNodeOrParent_0.c)
 *     RealSuccessor @ 0x1800744E0 (RealSuccessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // rsi
  __int64 (*v10)(); // r14
  _QWORD *v12; // rbx
  _DWORD *v14; // r15
  int NodeOrParent_0; // eax
  int v16; // ecx

  v7 = a5;
  v10 = a2;
  v12 = (_QWORD *)*a5;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *a5 = 0LL;
    return 0LL;
  }
  v14 = a6;
  if ( !a2 )
    v10 = WinSqmCheckEscalationSetString;
  if ( *a6 != *(_DWORD *)(a1 + 64) )
    v12 = 0LL;
  a5 = v12;
  if ( v12 )
    goto LABEL_14;
  NodeOrParent_0 = FindNodeOrParent_0(a1, a7, &a5);
  if ( NodeOrParent_0 == 1 )
  {
    v12 = a5;
LABEL_14:
    if ( a4 )
      v12 = RealSuccessor(v12);
    goto LABEL_16;
  }
  a4 = 0;
  if ( NodeOrParent_0 == 3 )
  {
    v12 = RealSuccessor(a5);
    goto LABEL_14;
  }
  v12 = a5;
LABEL_16:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v16 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v10)(a1, v12 + 4, a3);
    if ( v16 != -1073741198 )
      break;
    v12 = RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v7 = v12;
  *v14 = *(_DWORD *)(a1 + 64);
  if ( v16 )
    return 0LL;
  return v12 + 4;
}
