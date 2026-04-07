/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x1800427EC
 * Callers:
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x180042274 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180042EAC (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x18009F120 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x180042BC8 (--1CMTALock@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CBitmap::~CBitmap(CBitmap *this)
{
  WPF::ProcessHeapImpl *v1; // rdi
  __int64 v3; // rdi

  v1 = WPF::g_pProcessHeap;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmap::`vftable'{for `CMTALock'};
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, *((_QWORD *)this + 29));
  CMTALock::~CMTALock((CBitmap *)((char *)this + 112));
  *((_QWORD *)this + 6) = &CMILResourceCache::`vftable';
  while ( *((_DWORD *)this + 20) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * (unsigned int)--*((_DWORD *)this + 20));
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 7);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
