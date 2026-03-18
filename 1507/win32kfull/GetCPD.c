/*
 * XREFs of GetCPD @ 0x1C00FA93C
 * Callers:
 *     _GetClassInfoEx @ 0x1C0057B7C (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     NtUserGetCPD @ 0x1C00FA8D0 (NtUserGetCPD.c)
 *     xxxSetClassData @ 0x1C0127AFC (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCPD(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rsi
  __int64 *i; // rax
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax

  v3 = a3;
  if ( (a2 & 0x60) != 0 || (a2 & 0x80u) != 0 )
    a1 = *(_QWORD *)(a1 + 152);
  v5 = (_QWORD *)(a1 + 56);
  for ( i = *(__int64 **)(a1 + 56); i && (i[6] != a3 || *((_WORD *)i + 28) != a2); i = (__int64 *)i[5] )
    ;
  if ( i )
  {
    v9 = *i;
    return (unsigned int)v9 | 0xFFFF0000LL;
  }
  LOBYTE(a3) = 7;
  result = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 416LL), a3, 64LL);
  v8 = result;
  if ( result )
  {
    HMAssignmentLock(result + 40, *v5);
    HMAssignmentLock(v5, v8);
    v9 = *(_QWORD *)v8;
    *(_QWORD *)(v8 + 48) = v3;
    *(_WORD *)(v8 + 56) = a2;
    return (unsigned int)v9 | 0xFFFF0000LL;
  }
  return result;
}
