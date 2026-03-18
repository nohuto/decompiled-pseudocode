/*
 * XREFs of ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1801550CC
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180154110 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180154584 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdatePipelinePointers@CScanPipeline@@IEAAXPEAXPEBX@Z @ 0x180155160 (-UpdatePipelinePointers@CScanPipeline@@IEAAXPEAXPEBX@Z.c)
 */

void __fastcall CScanPipeline::Run(CScanPipeline *this, void *a2, const void *a3, int a4, int a5, int a6)
{
  char *v6; // r14
  int v8; // ebp
  void (__fastcall **i)(char *, __int64); // rsi

  if ( a4 )
  {
    v6 = (char *)this + 520;
    *((_DWORD *)this + 130) = a5;
    *((_DWORD *)this + 131) = a6;
    *((_DWORD *)this + 132) = a4;
    CScanPipeline::UpdatePipelinePointers(this, a2, a3);
    v8 = *((_DWORD *)this + 8);
    for ( i = (void (__fastcall **)(char *, __int64))*((_QWORD *)this + 1); v8; --v8 )
    {
      (*i)(v6, (__int64)(i + 1));
      i += 6;
    }
  }
}
