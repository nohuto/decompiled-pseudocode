/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x180153F0C
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180154050 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x1800A251C (--1CMTALock@@UEAA@XZ.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x180153FC8 (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 10);
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 10) = 0LL;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 102));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 152));
  CMTALock::~CMTALock((CFormatConverter *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
