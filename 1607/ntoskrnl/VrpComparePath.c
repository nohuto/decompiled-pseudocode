/*
 * XREFs of VrpComparePath @ 0x140617C8C
 * Callers:
 *     VrpFindNamespaceNode @ 0x140614D6C (VrpFindNamespaceNode.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     VrpGetNextToken @ 0x140617D80 (VrpGetNextToken.c)
 */

__int64 __fastcall VrpComparePath(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r11d
  unsigned __int16 v8; // di
  int v9; // eax
  const wchar_t *v11[2]; // [rsp+20h] [rbp-20h] BYREF
  const wchar_t *v12[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  memset(v11, 0, sizeof(v11));
  v6 = 0LL;
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    VrpGetNextToken(a1, &v13, v11);
    VrpGetNextToken(a2, &v14, v12);
    v8 = (unsigned __int16)v12[0];
    if ( !LOWORD(v11[0]) && !LOWORD(v12[0]) )
      break;
    v9 = LOWORD(v11[0]);
    if ( LOWORD(v11[0]) >= LOWORD(v12[0]) )
      v9 = LOWORD(v12[0]);
    v7 = wcsnicmp(v11[1], v12[1], (unsigned __int64)v9 >> 1);
    if ( v7 )
      goto LABEL_11;
    v7 = LOWORD(v11[0]) - v8;
    if ( LOWORD(v11[0]) != v8 )
    {
      if ( !LOWORD(v11[0]) || v8 )
      {
LABEL_11:
        v6 = 0LL;
        break;
      }
      break;
    }
    ++v6;
  }
  if ( a3 )
    *a3 = v6;
  return v7;
}
