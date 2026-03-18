/*
 * XREFs of ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x180136374
 * Callers:
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     <none>
 */

char __fastcall CoordMap::IsHollowRect(CoordMap *this, const struct D2D_RECT_F *a2)
{
  char v3; // r8
  float v4; // xmm4_4
  float v5; // xmm1_4
  unsigned int v6; // r9d
  float v7; // xmm2_4
  unsigned int v8; // ecx
  float v9; // xmm3_4
  __int64 v10; // rdx
  float *v11; // rax

  v3 = 0;
  v4 = a2->left + 0.00000011920929;
  v5 = a2->top + 0.00000011920929;
  v6 = *((_DWORD *)this + 102);
  v7 = a2->right - 0.00000011920929;
  v8 = 0;
  v9 = a2->bottom - 0.00000011920929;
  if ( v6 )
  {
    v10 = *((_QWORD *)this + 48);
    while ( 1 )
    {
      v11 = (float *)(v10 + 16LL * v8);
      if ( v4 >= *v11 && v5 >= v11[1] && v11[2] >= v7 && v11[3] >= v9 )
        break;
      if ( ++v8 >= v6 )
        return v3;
    }
    return 1;
  }
  return v3;
}
