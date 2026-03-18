/*
 * XREFs of PhysicalToLogicalInPlaceRect @ 0x1C005C39C
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C005CC28 (IntersectWithParents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhysicalToLogicalInPlaceRect(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  float *v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm2_4
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  __int64 v14; // r8
  float v15; // xmm0_4
  __int64 v16; // rdx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 272) )
  {
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v5 = Win32AllocPool(8LL, 1919775573LL);
      v6 = v5;
      if ( v5 )
      {
        v2 = 1;
        *(_BYTE *)(v5 + 4) = 1;
        v7 = *(float **)(a1 + 272);
        v8 = 1.0 / *v7;
        v9 = 1.0 / v7[5];
        v10 = (int)v7[12];
        v11 = (int)v7[13];
        LODWORD(v7) = a2[1];
        v12 = -v10;
        v13 = v12 + *a2;
        *(_BYTE *)(v6 + 4) = 0;
        v14 = (unsigned int)-v11;
        v15 = (float)(v14 + (unsigned int)v7);
        LODWORD(v7) = v12 + a2[2];
        *a2 = (int)(float)((float)v13 * v8);
        v16 = (unsigned int)(v14 + a2[3]);
        a2[1] = (int)(float)(v15 * v9);
        a2[2] = (int)(float)((float)(int)v7 * v8);
        a2[3] = (int)(float)((float)(int)v16 * v9);
        Win32FreePool(v6, v16, v14);
      }
    }
  }
  return v2;
}
