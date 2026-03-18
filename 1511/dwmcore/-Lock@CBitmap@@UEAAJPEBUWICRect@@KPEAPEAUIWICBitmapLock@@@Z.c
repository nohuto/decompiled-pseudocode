/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180152750
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::Lock(CBitmap *this, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  char *v8; // rcx
  bool v9; // zf
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  char *v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  if ( this == (CBitmap *)40 )
    v8 = 0LL;
  else
    v8 = (char *)this + 72;
  v9 = v8[48] == 0;
  v15 = v8;
  if ( !v9 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 8));
  if ( !a2 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x133u);
    goto LABEL_15;
  }
  if ( !a4 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x134u);
    goto LABEL_15;
  }
  v11 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, _QWORD, __int64 *))(*((_QWORD *)this - 2) + 24LL))(
          (char *)this - 16,
          a2,
          a3,
          &v14);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapLock **))v14)(v14, &IID_IWICBitmapLock, a4);
    v10 = v11;
    if ( v11 >= 0 )
      goto LABEL_15;
    v13 = 314;
  }
  else
  {
    v13 = 312;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
LABEL_15:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v15);
  return v10;
}
