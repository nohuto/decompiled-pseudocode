/*
 * XREFs of PhysicalToLogicalInPlaceRect @ 0x1C00536A4
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C006A260 (IntersectWithParents.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01E5930 (PhysicalToLogicalInPlacePoint.c)
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
  int v14; // r8d
  float v15; // xmm0_4
  int v16; // edx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 272) )
  {
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v5 = Win32AllocPool(8LL);
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
        v14 = -v11;
        v15 = (float)(v14 + (int)v7);
        LODWORD(v7) = v12 + a2[2];
        *a2 = (int)(float)((float)v13 * v8);
        v16 = v14 + a2[3];
        a2[1] = (int)(float)(v15 * v9);
        a2[2] = (int)(float)((float)(int)v7 * v8);
        a2[3] = (int)(float)((float)v16 * v9);
        Win32FreePool(v6);
      }
    }
  }
  return v2;
}
