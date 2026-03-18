/*
 * XREFs of GreCreateDIBitmapComp @ 0x1C014B9F0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C004AEE0 (NtGdiCreateDIBitmapInternal.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreSetDIBitsInternal @ 0x1C014BAE4 (GreSetDIBitsInternal.c)
 */

__int64 __fastcall GreCreateDIBitmapComp(
        HDC a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // ebp
  int v13; // edi
  __int64 result; // rax
  __int64 v16; // rbx
  DYNAMICMODECHANGESHARELOCK *v17; // rcx

  v11 = a7;
  v13 = a3;
  if ( a7 >= 3 || a6 && *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( a3 < 0 )
    v13 = -a3;
  result = GreCreateCompatibleBitmapInternal((__int64)a1, a2, v13, 0, 0LL);
  v16 = result;
  if ( !result )
    return 0LL;
  if ( (a4 & 4) != 0 && a5 && a6 )
  {
    if ( (unsigned int)GreSetDIBitsInternal(a1, a5, (__int64)a6, v11, a9, a8, a11) )
      return v16;
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
    GreDeleteObject(v16);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
    return 0LL;
  }
  return result;
}
