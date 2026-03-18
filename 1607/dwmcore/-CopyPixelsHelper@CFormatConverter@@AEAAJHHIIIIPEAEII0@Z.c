/*
 * XREFs of ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180184898
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801844C0 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18009EB8C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1801853E8 (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
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
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x91u);
  }
  else
  {
    v16 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 28), a9, a4, a5, a10);
    v20 = v16;
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x97u);
    }
    else if ( a5 )
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
  return v15;
}
