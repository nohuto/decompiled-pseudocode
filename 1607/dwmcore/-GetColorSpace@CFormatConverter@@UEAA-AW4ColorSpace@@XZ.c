/*
 * XREFs of ?GetColorSpace@CFormatConverter@@UEAA?AW4ColorSpace@@XZ @ 0x180184A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 */

__int64 __fastcall CFormatConverter::GetColorSpace(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( a1 == 72 )
    v2 = 0LL;
  else
    v2 = a1 - 56;
  v3 = *(_BYTE *)(v2 + 48) == 0;
  v6 = v2;
  if ( !v3 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  GetPixelFormatColorSpace(*(_DWORD *)(a1 + 40), (enum ColorSpace *)&v5);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v6);
  return v5;
}
