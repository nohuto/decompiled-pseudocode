/*
 * XREFs of RtlpAddToMergedRange @ 0x14055A8F4
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140558450 (RtlpDeleteFromMergedRange.c)
 *     RtlpAddIntersectingRanges @ 0x14055A7C8 (RtlpAddIntersectingRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAddToMergedRange(__int64 a1, __int64 *a2, char a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r9
  __int64 *v6; // r11
  char v7; // di
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // cf
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v18; // rax

  v3 = (_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 16) - 40LL;
  v6 = 0LL;
  v7 = *((_BYTE *)a2 + 33) & 1;
  v9 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)(a1 + 16) != v9 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)v5;
      v11 = *a2;
      v12 = (unsigned __int64)*a2 < *(_QWORD *)v5;
      if ( (unsigned __int64)*a2 <= *(_QWORD *)v5 )
        goto LABEL_18;
      if ( *(_QWORD *)(v5 + 8) >= v11 )
        break;
LABEL_4:
      if ( !v6 && *(_QWORD *)v5 > (unsigned __int64)*a2 )
        v6 = *(__int64 **)(v5 + 48);
      v5 = *v9 - 40LL;
      v9 = (_QWORD *)*v9;
      if ( v3 == v9 )
      {
        if ( !v6 )
          goto LABEL_9;
        v18 = *v6;
        a2[5] = *v6;
        a2[6] = (__int64)v6;
        *(_QWORD *)(v18 + 8) = a2 + 5;
        *v6 = (__int64)(a2 + 5);
        goto LABEL_11;
      }
    }
    v12 = v11 < v10;
LABEL_18:
    if ( (!v12 || a2[1] >= v10) && (!v7 || (*(_BYTE *)(v5 + 33) & 1) == 0) )
    {
      if ( (a3 & 1) == 0 )
        return 3221226114LL;
      *(_BYTE *)(v5 + 33) |= 2u;
      *((_BYTE *)a2 + 33) |= 2u;
    }
    goto LABEL_4;
  }
LABEL_9:
  v13 = (_QWORD *)v3[1];
  v14 = a2 + 5;
  if ( (_QWORD *)*v13 != v3 )
    __fastfail(3u);
  *v14 = v3;
  a2[6] = (__int64)v13;
  *v13 = v14;
  v3[1] = v14;
LABEL_11:
  if ( (unsigned __int64)*a2 < *(_QWORD *)a1 )
    *(_QWORD *)a1 = *a2;
  v15 = a2[1];
  if ( v15 > *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 8) = v15;
  v16 = *(_BYTE *)(a1 + 33);
  if ( (v16 & 1) != 0 && !v7 )
    *(_BYTE *)(a1 + 33) = v16 & 0xFE;
  return 0LL;
}
