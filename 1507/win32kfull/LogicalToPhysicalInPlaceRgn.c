/*
 * XREFs of LogicalToPhysicalInPlaceRgn @ 0x1C00DFA30
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00DF864 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01E4334 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRgn(__int64 a1, HRGN *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  float *v7; // rcx
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  HRGN v11; // rax
  float v13[6]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = Win32AllocPool(8LL, 1919775573LL);
        v6 = v5;
        if ( v5 )
        {
          v13[1] = 0.0;
          v13[2] = 0.0;
          *(_BYTE *)(v5 + 4) = 1;
          v7 = *(float **)(a1 + 272);
          v13[0] = *v7;
          v8 = v7[5];
          v13[3] = v8;
          v9 = v7[12];
          v13[4] = v9;
          v10 = v7[13];
          v13[5] = v10;
          if ( v13[0] != 1.0 || v8 != 1.0 || v10 != 0.0 || v9 != 0.0 )
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
