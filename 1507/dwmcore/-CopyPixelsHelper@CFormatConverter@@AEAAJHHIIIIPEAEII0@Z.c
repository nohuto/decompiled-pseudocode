/*
 * XREFs of ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1801463A4
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180145F30 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180051B88 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180146EEC (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixelsHelper(
        CFormatConverter *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int8 *a11)
{
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v20; // [rsp+70h] [rbp+8h]

  v13 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 22), a6, a4, a5, a7);
  v14 = 0;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v16 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 28), a9, a4, a5, a10);
    v20 = v16;
    v15 = v16;
    if ( v16 >= 0 )
    {
      if ( a5 )
      {
        do
        {
          CScanPipeline::Run((CFormatConverter *)((char *)this + 152), a11, a8, a4, a2, v14 + a3);
          a11 += a9;
          a8 += a6;
          ++v14;
        }
        while ( v14 < a5 );
        return v20;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x97u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x91u);
  }
  return v15;
}
