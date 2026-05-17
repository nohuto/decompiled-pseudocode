/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800DE5A0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180060AC4 (FindNodeOrParent.c)
 *     RealSuccessor @ 0x180062708 (RealSuccessor.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
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
  _QWORD *v7; // r14
  __int64 (*v10)(); // rbp
  _QWORD *v12; // rdi
  _DWORD *v14; // r15
  int NodeOrParent; // eax
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
  NodeOrParent = FindNodeOrParent(a1, a7, &a5);
  if ( NodeOrParent == 1 )
  {
    v12 = a5;
LABEL_14:
    if ( a4 )
      v12 = RealSuccessor(v12);
    goto LABEL_16;
  }
  a4 = 0;
  if ( NodeOrParent == 3 )
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
