/*
 * XREFs of ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800A32FC
 * Callers:
 *     ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x1800A3110 (--_ECClientMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CClientMemoryBitmap::~CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  __int64 v1; // rsi

  *((_QWORD *)this + 33) = 0LL;
  v1 = *((_QWORD *)this + 35);
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CClientMemoryBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CSystemMemoryBitmap::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
}
