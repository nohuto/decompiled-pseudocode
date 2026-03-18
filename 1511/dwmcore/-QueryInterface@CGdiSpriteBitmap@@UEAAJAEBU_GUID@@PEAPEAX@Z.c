/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800871E0
 * Callers:
 *     ?QueryInterface@CGdiSpriteBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BD430 (-QueryInterface@CGdiSpriteBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BD440 (-QueryInterface@CGdiSpriteBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BD450 (-QueryInterface@CGdiSpriteBitmap@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085150 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(CGdiSpriteBitmap *this, const struct _GUID *a2, void **a3)
{
  char *v3; // rdi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CImageSource *, const struct _GUID *, void **); // rsi
  int Interface; // eax

  v3 = (char *)this + 16;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(CImageSource *, const struct _GUID *, void **))(*(_QWORD *)v3 + 32LL);
      if ( v7 == CImageSource::HrFindInterface )
        Interface = CImageSource::HrFindInterface((CGdiSpriteBitmap *)((char *)this + 16), a2, a3);
      else
        Interface = v7((CGdiSpriteBitmap *)((char *)this + 16), a2, a3);
      v5 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v5;
      }
    }
    else
    {
      *a3 = v3;
      v5 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v5;
}
