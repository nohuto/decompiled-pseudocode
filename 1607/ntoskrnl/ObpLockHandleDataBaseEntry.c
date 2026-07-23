/*
 * XREFs of ObpLockHandleDataBaseEntry @ 0x1404A6C30
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     ObpInsertHandleCount @ 0x1404A6DC4 (ObpInsertHandleCount.c)
 */

__int64 __fastcall ObpLockHandleDataBaseEntry(__int64 a1, int *a2, _DWORD *a3)
{
  int *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf
  int *v9; // rcx
  __int64 result; // rax
  int v11; // r11d
  _DWORD *v12; // r8
  __int64 inserted; // r9
  unsigned int v14; // r14d
  int v15; // edx
  int v16; // esi
  __int64 v17; // rax

  v5 = a2;
  v6 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  v7 = a1 - v6;
  v8 = (*(_BYTE *)(a1 + 27) & 0x40) == 0;
  v9 = *(int **)(a1 - v6);
  if ( v8 )
  {
    v11 = *v9;
    v12 = v9 + 2;
    inserted = 0LL;
    v14 = 0;
    if ( *v9 )
    {
      do
      {
        if ( *(int **)v12 == v5 )
        {
          if ( *(_BYTE *)(v7 + 11) != 0xFF )
          {
            ++*((_BYTE *)v12 + 11);
            *a3 = v14 + *(unsigned __int8 *)(v7 + 11) + (*(_DWORD *)(v7 + 8) & 0xFFFFFF);
            return 0LL;
          }
          inserted = 0LL;
          a2 = (int *)(*(_DWORD *)(v7 + 8) & 0xFFFFFF);
          v14 += (_DWORD)a2 + 255;
        }
        else if ( !*(_QWORD *)v12 )
        {
          inserted = (__int64)v12;
        }
        v12 += 4;
        --v11;
      }
      while ( v11 );
      if ( inserted )
        goto LABEL_10;
      if ( v14 >= 0xFFFF01 )
        return 3221225626LL;
    }
    inserted = ObpInsertHandleCount(a1, a2, v12, 0LL);
    if ( inserted )
    {
LABEL_10:
      *(_DWORD *)(inserted + 8) &= 0xFF000000;
      *a3 = v14 + 1;
      *(_QWORD *)inserted = v5;
      *(_BYTE *)(inserted + 11) = 1;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else if ( v9 )
  {
    if ( v9 != a2 || (a2 = (int *)*(unsigned __int8 *)(v7 + 11), (_BYTE)a2 == 0xFF) )
    {
      v16 = 0;
      if ( v9 == v5 )
      {
        a2 = (int *)(*(unsigned __int8 *)(v7 + 11) + (*(_DWORD *)(v7 + 8) & 0xFFFFFFu));
        v16 = (int)a2;
        if ( (unsigned int)a2 >= 0xFFFF01 )
          return 3221225626LL;
      }
      v17 = ObpInsertHandleCount(a1, a2, a3, v6);
      if ( !v17 )
      {
        return 3221225626LL;
      }
      else
      {
        *(_DWORD *)(v17 + 8) &= 0xFF000000;
        *(_QWORD *)v17 = v5;
        *(_BYTE *)(v17 + 11) = 1;
        *a3 = v16 + 1;
        return 0LL;
      }
    }
    else
    {
      v15 = (unsigned __int8)((_BYTE)a2 + 1);
      *(_BYTE *)(v7 + 11) = v15;
      *a3 = v15 + (*(_DWORD *)(v7 + 8) & 0xFFFFFF);
      return 0LL;
    }
  }
  else
  {
    *(_BYTE *)(v7 + 11) = 1;
    *(_DWORD *)(v7 + 8) &= 0xFF000000;
    *(_QWORD *)v7 = a2;
    result = 0LL;
    *a3 = 1;
  }
  return result;
}
