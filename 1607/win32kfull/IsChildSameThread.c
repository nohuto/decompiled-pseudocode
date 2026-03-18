/*
 * XREFs of IsChildSameThread @ 0x1C01D9CF0
 * Callers:
 *     ImeCanDestroyDefIMEforChild @ 0x1C009BB44 (ImeCanDestroyDefIMEforChild.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildSameThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // r11
  char v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9

  v2 = *(_QWORD *)(a1 + 96);
  v4 = *(_QWORD *)(a2 + 16);
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_BYTE *)(v2 + 55) & 0xC0;
    if ( v5 != 64 )
    {
      v6 = v2;
      if ( *(_WORD *)(*(_QWORD *)(v2 + 152) + 8LL) != *(_WORD *)(gpsi + 890LL) )
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v6 + 152);
          if ( (*(_BYTE *)(v7 + 86) & 1) != 0 || *(_WORD *)(v7 + 8) == *(_WORD *)(gpsi + 882LL) )
            break;
          v6 = *(_QWORD *)(v6 + 104);
          if ( !v6 )
            goto LABEL_7;
        }
      }
      goto LABEL_22;
    }
LABEL_7:
    if ( v2 != a2 && *(_QWORD *)(v2 + 16) == v4 )
    {
      v8 = 0;
      v9 = v2;
      if ( v5 == 64 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 16) != v4 )
            break;
          v10 = *(_QWORD *)(v9 + 152);
          if ( (*(_BYTE *)(v10 + 86) & 1) != 0 || *(_WORD *)(v10 + 8) == *(_WORD *)(gpsi + 882LL) )
            v8 = 1;
          v9 = *(_QWORD *)(v9 + 88);
        }
        while ( (*(_BYTE *)(v9 + 55) & 0xC0) == 0x40 );
      }
      if ( (*(_BYTE *)(v9 + 55) & 0xC0) != 0x40 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 16) != v4 )
            break;
          v11 = *(_QWORD *)(v9 + 152);
          if ( (*(_BYTE *)(v11 + 86) & 1) != 0 || *(_WORD *)(v11 + 8) == *(_WORD *)(gpsi + 882LL) )
            v8 = 1;
          v9 = *(_QWORD *)(v9 + 104);
        }
        while ( v9 );
      }
      if ( !v8 )
        return 1LL;
    }
LABEL_22:
    v2 = *(_QWORD *)(v2 + 72);
    if ( !v2 )
      return 0LL;
  }
}
