/*
 * XREFs of RIMExtractGeometryPoints @ 0x1C00CBB80
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 * Callees:
 *     <none>
 */

char __fastcall RIMExtractGeometryPoints(__int16 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _UNKNOWN **v5; // rax
  unsigned int v6; // r11d
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int v10; // ebp
  unsigned __int8 v11; // di
  int v12; // esi
  _BYTE *v13; // r9
  __int64 v14; // r8
  int v15; // edx
  _UNKNOWN *retaddr; // [rsp+10h] [rbp+0h] BYREF

  v5 = &retaddr;
  v6 = a5;
  v7 = 0LL;
  v8 = 0LL;
  v10 = a5;
  v11 = 0;
  v12 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v11 = (1 << v12) - 1;
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v7 >= 4 )
        break;
      LOBYTE(v5) = *(_BYTE *)(v8 + a4);
      v10 -= 8;
      *(_BYTE *)(v7 + a3) = (_BYTE)v5;
      v8 = (unsigned int)(v8 + 1);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v10 >= 8 );
  }
  if ( v10 && (unsigned int)v7 < 4 )
    *(_BYTE *)(v7 + a3) = v11 & *(_BYTE *)(v8 + a4);
  v13 = (_BYTE *)(a2 + 16);
  if ( a1 != 49 )
    v13 = (_BYTE *)(a2 + 12);
  v14 = 0LL;
  if ( v10 )
  {
    v15 = *(unsigned __int8 *)(v8 + a4);
    v8 = (unsigned int)(v8 + 1);
    LODWORD(v5) = ~v11;
    *v13 = (int)((unsigned int)v5 & v15) >> v12;
    v6 = v12 + a5 - 8;
  }
  for ( ; v6; v6 -= 8 )
  {
    if ( (unsigned int)v14 >= 4 || (unsigned int)v8 >= 8 )
      break;
    LOBYTE(v5) = *(_BYTE *)(v8 + a4);
    if ( (a5 & 7) != 0 )
    {
      LOBYTE(v5) = (v11 & (unsigned __int8)v5) << (8 - v12);
      v13[v14] |= (unsigned __int8)v5;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 < 4 )
      {
        LODWORD(v5) = *(unsigned __int8 *)(v8 + a4);
        v13[v14] = (int)((unsigned int)v5 & ~v11) >> v12;
      }
    }
    else
    {
      v13[v14] = (_BYTE)v5;
      v14 = (unsigned int)(v14 + 1);
    }
    v8 = (unsigned int)(v8 + 1);
    if ( v6 <= 8 )
      break;
  }
  return (char)v5;
}
