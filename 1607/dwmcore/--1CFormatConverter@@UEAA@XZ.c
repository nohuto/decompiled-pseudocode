/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x180184324
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180184420 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMTALock@@UEAA@XZ @ 0x18009E9FC (--1CMTALock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1801843B8 (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 102));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 152));
  CMTALock::~CMTALock((CFormatConverter *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
