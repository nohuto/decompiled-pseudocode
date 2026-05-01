/*
 * XREFs of RtlStringCbCopyExW @ 0x180006960
 * Callers:
 *     GetNormalizedObjectPath @ 0x1800061C0 (GetNormalizedObjectPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyExW(char *a1, unsigned __int64 a2, char *a3, char **a4, _QWORD *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // rbx
  char v8; // di
  char *v9; // r14
  int v10; // r8d
  unsigned __int64 v11; // rax
  signed __int64 v12; // r11
  _WORD *v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // r8
  __int16 v16; // cx
  __int64 result; // rax

  v5 = 0;
  v6 = a2 >> 1;
  v8 = a2;
  v9 = a1;
  v10 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v10 = -1073741811;
  if ( v10 < 0 )
  {
    result = (unsigned int)v10;
    if ( v6 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    if ( v6 )
    {
      v11 = a2 >> 1;
      v12 = a3 - a1;
      v13 = a1;
      v14 = 0;
      v15 = 0LL;
      while ( 2147483646 - v6 + v11 )
      {
        v16 = *(_WORD *)((char *)v13 + v12);
        if ( !v16 )
          break;
        *v13 = v16;
        ++v15;
        ++v13;
        if ( !--v11 )
          goto LABEL_24;
      }
      if ( v11 )
        goto LABEL_11;
LABEL_24:
      --v13;
      v14 = -2147483643;
      --v15;
LABEL_11:
      *v13 = 0;
      v9 += 2 * v15;
      v6 -= v15;
      v5 = v14;
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147483643 )
        return v14;
    }
    else if ( *(_WORD *)a3 )
    {
      if ( !a1 )
        return 3221225485LL;
      v5 = -2147483643;
    }
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = (v8 & 1) + 2 * v6;
    return v5;
  }
  return result;
}
