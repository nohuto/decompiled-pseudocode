/*
 * XREFs of ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x140156C20
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x140156EB0 (-XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vSrcCopyS24D8(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  struct BLTINFO *v2; // r14
  int v3; // edi
  _BYTE *v4; // r13
  unsigned __int8 *v5; // rbx
  struct _XLATEOBJ *v6; // rcx
  unsigned int v7; // esi
  int v8; // ebp
  unsigned int v9; // esi
  _BYTE *v10; // r12
  unsigned __int8 *v11; // r15
  unsigned int v12; // r13d
  int v13; // esi
  int v14; // edi
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // rdx
  int v17; // ecx
  int v18; // edi
  unsigned __int8 *v19; // r15
  int v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+24h] [rbp-74h]
  struct _XLATEOBJ *v22; // [rsp+28h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v24; // [rsp+38h] [rbp-60h]
  _BYTE *v25; // [rsp+40h] [rbp-58h]
  unsigned int v27; // [rsp+A8h] [rbp+10h]
  int v28; // [rsp+B0h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = a1;
  v3 = v1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v28 = *((_DWORD *)a1 + 8);
  v25 = v4;
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v6 = *(struct _XLATEOBJ **)a1;
  v24 = v5;
  if ( (-(int)v4 & 3u) <= v1 )
    v3 = -(int)v4 & 3;
  v22 = v6;
  v21 = v3;
  v7 = v1 - v3;
  v8 = (v1 - v3) & 3;
  v9 = v7 >> 2;
  v27 = v9;
  v20 = v8;
  Xlate555 = XLATEOBJ_pGetXlate555(v6);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v10 = v4;
      v11 = v5;
      if ( v3 )
      {
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[2] | (((*v11 << 8) | v11[1]) << 8));
          v11 += 3;
          ++v10;
          --v3;
        }
        while ( v3 );
        v2 = a1;
        v9 = v27;
      }
      if ( v9 )
      {
        v12 = v9;
        do
        {
          v13 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[2] | (((*v11 << 8) | v11[1]) << 8));
          v14 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[5] | ((v11[4] | (v11[3] << 8)) << 8));
          v15 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[8] | ((v11[7] | (v11[6] << 8)) << 8));
          v16 = v11 + 9;
          v17 = v11[10];
          v11 += 12;
          *(_DWORD *)v10 = v13 | ((v14 | ((v15 | (XLATEOBJ_RGB32ToPalSurf(
                                                    v22,
                                                    Xlate555,
                                                    v16[2] | ((v17 | (*v16 << 8)) << 8)) << 8)) << 8)) << 8);
          v10 += 4;
          --v12;
        }
        while ( v12 );
        v2 = a1;
        v8 = v20;
        v4 = v25;
        v5 = v24;
        v9 = v27;
      }
      v18 = v8;
      if ( v8 )
      {
        v19 = v11 + 2;
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, *v19 | ((*(v19 - 1) | (*(v19 - 2) << 8)) << 8));
          v19 += 3;
          ++v10;
          --v18;
        }
        while ( v18 );
        v5 = v24;
        v9 = v27;
      }
      if ( !--v28 )
        break;
      v3 = v21;
      v5 += *((int *)v2 + 10);
      v4 += *((int *)v2 + 11);
      v24 = v5;
      v25 = v4;
    }
  }
}
