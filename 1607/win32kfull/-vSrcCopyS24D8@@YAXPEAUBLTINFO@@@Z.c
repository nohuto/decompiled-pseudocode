/*
 * XREFs of ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02C5290
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     ?XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C02B9EC0 (-XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z.c)
 */

void __fastcall vSrcCopyS24D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r14
  unsigned int v2; // r15d
  _BYTE *v3; // rbx
  unsigned int v4; // ebp
  unsigned __int8 *v5; // rdi
  struct _XLATEOBJ *v6; // rcx
  unsigned int v7; // esi
  int v8; // r15d
  unsigned int v9; // esi
  _BYTE *v10; // r12
  unsigned __int8 *v11; // r13
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  int v14; // esi
  int v15; // edi
  int v16; // ebx
  unsigned __int8 v17; // al
  unsigned __int8 *v18; // r13
  int v19; // ebx
  int v20; // [rsp+24h] [rbp-74h]
  _BYTE *v21; // [rsp+28h] [rbp-70h]
  struct _XLATEOBJ *v22; // [rsp+30h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v24; // [rsp+40h] [rbp-58h]
  unsigned int v26; // [rsp+A8h] [rbp+10h]
  unsigned int v27; // [rsp+B0h] [rbp+18h]
  int v28; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v28 = *((_DWORD *)a1 + 8);
  v4 = -(int)v3 & 3;
  v21 = v3;
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v6 = *(struct _XLATEOBJ **)a1;
  v24 = v5;
  v22 = v6;
  if ( v4 > v2 )
    v4 = v2;
  v27 = v4;
  v7 = v2 - v4;
  v8 = (v2 - v4) & 3;
  v9 = v7 >> 2;
  v26 = v9;
  v20 = v8;
  Xlate555 = XLATEOBJ_pGetXlate555(v6);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v10 = v3;
      v11 = v5;
      if ( v4 )
      {
        v12 = v4;
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[2] | ((v11[1] | (*v11 << 8)) << 8));
          v11 += 3;
          ++v10;
          --v12;
        }
        while ( v12 );
        v1 = a1;
        v3 = v21;
        v9 = v26;
      }
      if ( v9 )
      {
        v13 = v9;
        do
        {
          v14 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[2] | ((v11[1] | (*v11 << 8)) << 8));
          v15 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[5] | ((v11[4] | (v11[3] << 8)) << 8));
          v16 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[8] | ((v11[7] | (v11[6] << 8)) << 8));
          v17 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, v11[11] | ((v11[10] | (v11[9] << 8)) << 8));
          v11 += 12;
          *(_DWORD *)v10 = v14 | ((v15 | ((v16 | (v17 << 8)) << 8)) << 8);
          v10 += 4;
          --v13;
        }
        while ( v13 );
        v4 = v27;
        v1 = a1;
        v8 = v20;
        v3 = v21;
        v5 = v24;
        v9 = v26;
      }
      if ( v8 )
      {
        v18 = v11 + 2;
        v19 = v8;
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v22, Xlate555, *v18 | ((*(v18 - 1) | (*(v18 - 2) << 8)) << 8));
          v18 += 3;
          ++v10;
          --v19;
        }
        while ( v19 );
        v4 = v27;
        v3 = v21;
        v9 = v26;
      }
      if ( !--v28 )
        break;
      v5 += *((int *)v1 + 10);
      v3 += *((int *)v1 + 11);
      v24 = v5;
      v21 = v3;
    }
  }
}
