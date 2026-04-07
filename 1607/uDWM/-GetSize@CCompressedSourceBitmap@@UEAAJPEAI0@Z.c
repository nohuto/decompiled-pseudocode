/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x18003B110
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z @ 0x1800513A0 (-GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180043698 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(CCompressedSourceBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  char *v7; // rdi
  int v9; // eax
  unsigned int v10; // edi
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) && *((_DWORD *)this + 43)
    || (v9 = CCompressedSourceBitmap::EnsureWICBitmapFrame((CCompressedSourceBitmap *)((char *)this - 16)),
        v10 = v9,
        v9 >= 0) )
  {
    v6 = 0;
    if ( this == (CCompressedSourceBitmap *)16 )
      v7 = 0LL;
    else
      v7 = (char *)this + 96;
    v11 = v7;
    if ( v7[48] )
      EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
    if ( a2 && a3 )
    {
      *a2 = *((_DWORD *)this + 42);
      *a3 = *((_DWORD *)this + 43);
      if ( v7[48] )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
    }
    else
    {
      CGuard<CMTALock>::~CGuard<CMTALock>(&v11);
      v6 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x64u);
    }
    return v6;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x60u);
    return v10;
  }
}
