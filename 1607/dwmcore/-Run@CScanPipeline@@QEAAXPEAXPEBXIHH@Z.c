/*
 * XREFs of ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1801853E8
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801844C0 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180184898 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePipelinePointers@CScanPipeline@@IEAAXPEAXPEBX@Z @ 0x18018545C (-UpdatePipelinePointers@CScanPipeline@@IEAAXPEAXPEBX@Z.c)
 */

void __fastcall CScanPipeline::Run(CScanPipeline *this, void *a2, const void *a3, int a4, int a5, int a6)
{
  char *v6; // rsi
  void (__fastcall **v8)(char *, __int64); // rbx
  int i; // edi

  if ( a4 )
  {
    v6 = (char *)this + 520;
    *((_DWORD *)this + 130) = a5;
    *((_DWORD *)this + 131) = a6;
    *((_DWORD *)this + 132) = a4;
    CScanPipeline::UpdatePipelinePointers(this, a2, a3);
    v8 = (void (__fastcall **)(char *, __int64))*((_QWORD *)this + 1);
    for ( i = *((_DWORD *)this + 8); i; --i )
    {
      (*v8)(v6, (__int64)(v8 + 1));
      v8 += 6;
    }
  }
}
