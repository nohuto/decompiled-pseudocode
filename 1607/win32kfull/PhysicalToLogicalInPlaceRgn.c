/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C005B290
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00D5C54 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01DB090 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, HRGN *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  float *v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  HRGN v13; // rax
  float v15[6]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = Win32AllocPool(8LL, 1919775573LL);
        v8 = v5;
        if ( v5 )
        {
          v15[1] = 0.0;
          v15[2] = 0.0;
          *(_BYTE *)(v5 + 4) = 1;
          v9 = *(float **)(a1 + 272);
          v15[0] = 1.0 / *v9;
          v10 = 1.0 / v9[5];
          v15[3] = v10;
          LODWORD(v11) = COERCE_UNSIGNED_INT(v9[12] / *v9) ^ _xmm;
          v15[4] = v11;
          LODWORD(v12) = COERCE_UNSIGNED_INT(v9[13] / v9[5]) ^ _xmm;
          v15[5] = v12;
          if ( v15[0] != 1.0 || v10 != 1.0 || v11 != 0.0 || v12 != 0.0 )
          {
            v13 = TransformRgn(*a2, (struct tagXFORM *)v15);
            if ( v13 )
            {
              v2 = 1;
              *a2 = v13;
            }
          }
          *(_BYTE *)(v8 + 4) = 0;
          Win32FreePool(v8, v6, v7);
        }
      }
    }
  }
  return v2;
}
