/*
 * XREFs of RtlpHpLfhSlotAddSubsegment @ 0x180061004
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpHpLfhSlotAddSubsegment(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v5; // rcx
  __int64 **v6; // rax
  __int64 **v7; // rcx
  unsigned __int64 v9; // rax
  __int64 *v10; // r11
  __int64 **v11; // r10
  __int64 v12; // rcx

  if ( *((_WORD *)a2 + 16) == *((_WORD *)a2 + 17) )
  {
    a2[2] = a1;
  }
  else
  {
    v9 = _InterlockedExchange64(a2 + 2, a1);
    if ( (v9 & 1) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, v9 >> 1);
  }
  v3 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) && *((_WORD *)a2 + 16) == *((_WORD *)a2 + 17) )
    goto LABEL_22;
  if ( *((_BYTE *)a2 + 38) )
  {
    if ( *((_BYTE *)a2 + 38) == 1 )
    {
      v4 = a1 + 40;
    }
    else
    {
      if ( *((_BYTE *)a2 + 38) != 2 )
        return a2;
      v4 = 0LL;
    }
    v5 = 0LL;
  }
  else
  {
    v4 = a1 + 24;
    v5 = (_QWORD *)(a1 + 8);
  }
  v6 = (__int64 **)(a1 + 24);
  if ( v4 )
  {
    v10 = (__int64 *)*a2;
    v11 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v11 != a2 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( v5 )
      --*v5;
  }
  *((_BYTE *)a2 + 38) = 0;
  if ( a1 != -24 )
  {
    v7 = *(__int64 ***)(a1 + 32);
    *a2 = (__int64)v6;
    a2[1] = (__int64)v7;
    if ( *v7 != (__int64 *)v6 )
      __fastfail(3u);
    *v7 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( v3 )
      ++*v3;
    a2 = 0LL;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 && *v3 > 8uLL )
  {
    a2 = *v6;
    v12 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v12 + 8) != a2 )
      __fastfail(3u);
    *v6 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v6;
    --*v3;
    *((_BYTE *)a2 + 38) = 2;
  }
  if ( a2 && *((_BYTE *)a2 + 38) == 2 )
LABEL_22:
    a2[2] = 0LL;
  return a2;
}
