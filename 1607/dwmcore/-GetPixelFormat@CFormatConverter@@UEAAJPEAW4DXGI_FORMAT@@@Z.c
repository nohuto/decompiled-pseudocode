/*
 * XREFs of ?GetPixelFormat@CFormatConverter@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180184A70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
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
    *a2 = this[10];
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1EAu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1EDu);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v7);
  return v2;
}
