/*
 * XREFs of LogicalToPhysicalInPlaceRgnWorker @ 0x14002C070
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x14011EA74 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1401EC06C (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRgnWorker(const struct tagWND *a1, HRGN *a2, int a3)
{
  unsigned int v3; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rdi
  float *v7; // rax
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  HRGN v11; // rax
  float v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+24h] [rbp-24h]
  float v14; // [rsp+2Ch] [rbp-1Ch]
  float v15; // [rsp+30h] [rbp-18h]
  float v16; // [rsp+34h] [rbp-14h]

  v3 = 0;
  TopLevelOrDpiBoundaryWindow = a1;
  if ( a3 )
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( TopLevelOrDpiBoundaryWindow )
    {
      if ( *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(TopLevelOrDpiBoundaryWindow) )
        {
          v7 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
          v13 = 0LL;
          v12 = *v7;
          v8 = v7[5];
          v14 = v8;
          v9 = v7[12];
          v15 = v9;
          v10 = v7[13];
          v16 = v10;
          if ( v12 != 1.0 || v8 != 1.0 || v10 != 0.0 || v9 != 0.0 )
          {
            v11 = TransformRgn(*a2, (struct tagXFORM *)&v12);
            if ( v11 )
            {
              v3 = 1;
              *a2 = v11;
            }
          }
        }
      }
    }
  }
  return v3;
}
