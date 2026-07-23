/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x180050858
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x1800507B8 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x18004F164 (RtlpHpLfhSubsegmentFree.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCleanup(_RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 Value; // rbp
  __int64 result; // rax
  __int64 **v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  _QWORD **v12; // rcx
  _QWORD *v13; // r8

  Value = a1[*(unsigned __int8 *)(a2 + 1) + 24].Value;
  result = a2 + 40;
  if ( *(_QWORD *)result != result )
  {
    v9 = *(_QWORD *)result;
    v10 = *(_QWORD **)(a2 + 48);
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v10 != result )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = a2 + 24;
    v12 = *(_QWORD ***)result;
    v13 = *(_QWORD **)(a2 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != a2 + 24 || *v13 != v11 )
      __fastfail(3u);
    if ( (_QWORD **)(*v12)[1] != v12 || (_QWORD **)*v12[1] != v12 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(a2 + 32) = v12[1];
    result = (__int64)v12[1];
    *(_QWORD *)result = v11;
    v12[1] = v13;
  }
  v6 = (__int64 **)(a2 + 24);
  while ( *v6 != (__int64 *)v6 )
  {
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( *((_WORD *)v7 + 16) )
      --*(_QWORD *)(a2 + 8);
    *((_WORD *)v7 + 16) = *((_WORD *)v7 + 17);
    *((_BYTE *)v7 + 38) = 2;
    result = RtlpHpLfhSubsegmentFree(a1, (__int64)v7, Value, 1);
  }
  return result;
}
