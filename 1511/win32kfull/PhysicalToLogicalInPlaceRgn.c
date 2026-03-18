/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C0053484
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006AFE0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01E47C4 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, HRGN *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  float *v7; // rcx
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  HRGN v11; // rax
  float v13[6]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = Win32AllocPool(8LL);
        v6 = v5;
        if ( v5 )
        {
          v13[1] = 0.0;
          v13[2] = 0.0;
          *(_BYTE *)(v5 + 4) = 1;
          v7 = *(float **)(a1 + 272);
          v13[0] = 1.0 / *v7;
          v8 = 1.0 / v7[5];
          v13[3] = v8;
          LODWORD(v9) = COERCE_UNSIGNED_INT(v7[12] / *v7) ^ _xmm;
          v13[4] = v9;
          LODWORD(v10) = COERCE_UNSIGNED_INT(v7[13] / v7[5]) ^ _xmm;
          v13[5] = v10;
          if ( v13[0] != 1.0 || v8 != 1.0 || v9 != 0.0 || v10 != 0.0 )
          {
            v11 = TransformRgn(*a2, (struct tagXFORM *)v13);
            if ( v11 )
            {
              v2 = 1;
              *a2 = v11;
            }
          }
          *(_BYTE *)(v6 + 4) = 0;
          Win32FreePool(v6);
        }
      }
    }
  }
  return v2;
}
