/*
 * XREFs of Bulk_Stage_ProcessSegment @ 0x1C002EC44
 * Callers:
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C002EBCC (Bulk_Stage_CalculateBytesTransferred.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_Stage_ProcessSegment(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // rcx
  char v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r10
  __int64 v11; // r8
  unsigned __int64 i; // r9
  unsigned int v13; // eax

  v5 = *(_QWORD *)(a3 + 16);
  v6 = 0;
  v7 = a4;
  v8 = *(_QWORD *)(a3 + 24);
  v9 = (*(_DWORD *)(a3 + 40) & 0xFFFFFFF0) + v5 - 16;
  v10 = v5 + 16 * v7;
  if ( v10 <= v9 )
  {
    v11 = *a2;
    for ( i = v10 + v8 - v5; ; i += 16LL )
    {
      if ( i == v11 )
        v6 = 1;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v10 + 12)) >> 2 == 1 )
        break;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v10 + 12)) >> 2 == 6 )
        return v6;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v10 + 12)) >> 2 != 7 )
        goto LABEL_20;
      if ( v6 )
        return v6;
      *a5 = 0;
LABEL_21:
      v10 += 16LL;
      if ( v10 > v9 )
        return v6;
    }
    if ( v6 )
    {
      v13 = *((unsigned __int8 *)a2 + 11);
      if ( v13 < 2 )
        goto LABEL_20;
      if ( v13 <= 4 || v13 == 6 || v13 == 26 )
      {
LABEL_17:
        *a5 += (*(_DWORD *)(v10 + 8) & 0x1FFFF) - (a2[1] & 0xFFFFFF);
        goto LABEL_20;
      }
      if ( v13 != 28 )
      {
        if ( v13 != 36 )
          goto LABEL_20;
        goto LABEL_17;
      }
      *a5 = a2[1] & 0xFFFFFF;
    }
    else
    {
      *a5 += *(_DWORD *)(v10 + 8) & 0x1FFFF;
    }
LABEL_20:
    if ( v6 )
      return v6;
    goto LABEL_21;
  }
  return v6;
}
