/*
 * XREFs of ?ExtractGeometryPoints@@YAXGPEAUtagHPD_CONTACT_GEOMETRY@@PEAJPEAEK@Z @ 0x1C01C4798
 * Callers:
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 * Callees:
 *     <none>
 */

void __fastcall ExtractGeometryPoints(
        __int16 a1,
        struct tagHPD_CONTACT_GEOMETRY *a2,
        int *a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  unsigned int v5; // r11d
  __int64 v6; // rbx
  __int64 v7; // r10
  unsigned int v9; // ebp
  unsigned __int8 v10; // di
  unsigned int v11; // esi
  _BYTE *v12; // r9
  __int64 v13; // r8
  int v14; // edx
  unsigned __int8 v15; // al

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a5;
  v10 = 0;
  v11 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v10 = (1 << v11) - 1;
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v6 >= 4 )
        break;
      v9 -= 8;
      *((_BYTE *)a3 + v6) = a4[v7];
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v9 >= 8 );
  }
  if ( v9 && (unsigned int)v6 < 4 )
    *((_BYTE *)a3 + v6) = v10 & a4[v7];
  v12 = (char *)a2 + 16;
  if ( a1 != 49 )
    v12 = (char *)a2 + 12;
  v13 = 0LL;
  if ( v9 )
  {
    v14 = a4[v7];
    v7 = (unsigned int)(v7 + 1);
    *v12 = (~v10 & v14) >> v11;
    v5 = v11 + a5 - 8;
  }
  for ( ; v5; v5 -= 8 )
  {
    if ( (unsigned int)v13 >= 4 || (unsigned int)v7 >= 8 )
      break;
    v15 = a4[v7];
    if ( (a5 & 7) != 0 )
    {
      v12[v13] |= (v10 & v15) << (8 - v11);
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 < 4 )
        v12[v13] = (a4[v7] & ~v10) >> v11;
    }
    else
    {
      v12[v13] = v15;
      v13 = (unsigned int)(v13 + 1);
    }
    v7 = (unsigned int)(v7 + 1);
    if ( v5 <= 8 )
      break;
  }
}
