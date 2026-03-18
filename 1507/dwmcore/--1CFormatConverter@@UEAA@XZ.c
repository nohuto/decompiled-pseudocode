/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x180145D2C
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180145E70 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMTALock@@UEAA@XZ @ 0x1800526DC (--1CMTALock@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x180145DE8 (--1CScanPipeline@@UEAA@XZ.c)
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
