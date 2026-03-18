/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180052230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180052658 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  unsigned int v2; // ebx
  enum DXGI_FORMAT *v5; // rcx
  enum DXGI_FORMAT *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this == (enum DXGI_FORMAT *)72 )
    v5 = 0LL;
  else
    v5 = this - 14;
  v7 = v5;
  if ( *((_BYTE *)v5 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 2));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      *a2 = this[12];
    }
    else
    {
      v2 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xD5u);
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD3u);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return v2;
}
