/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18000D4D8
 * Callers:
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18000D680 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18000D6F0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18000D8C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18001AEB4 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // rax
  __int64 v10; // rax
  struct CWarpLockSubresource *v11; // rbp
  struct IWarpPrivateAPI *v12; // r14
  struct CWarpLockSubresource *v13; // rdx
  int v14; // eax
  __m128i v15; // xmm0
  unsigned int v16; // ecx
  struct CWarpLockSubresource *v18; // [rsp+60h] [rbp+8h] BYREF
  struct IDXGIResource *v19; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  *a3 = 0;
  *a2 = 0LL;
  *v5 = 0LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 257) || *((_BYTE *)this + 256) )
  {
    v10 = *((_QWORD *)this + 3);
    v11 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v12 = *(struct IWarpPrivateAPI **)(*(_QWORD *)(v10 + 16) + 536LL);
    *((_WORD *)this + 128) = 256;
    if ( v12 )
    {
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 17))(
             *((_QWORD *)this + 17),
             &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
             &v19) >= 0 )
      {
        if ( (int)CWarpLockSubresource::Create(v12, v19, *((_DWORD *)this + 63), &v18) < 0 )
        {
          v11 = v18;
        }
        else
        {
          v13 = v18;
          v14 = *((_DWORD *)this + 43);
          v15 = *(__m128i *)((char *)v18 + 40);
          *((_BYTE *)this + 256) = 1;
          *a2 = (unsigned __int8 *)v15.m128i_i64[0];
          v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
          *a3 = v16;
          *a4 = v16 * v14;
          *a5 = (struct IUnknown *)v13;
        }
      }
      if ( v19 )
        ((void (__fastcall *)(struct IDXGIResource *))v19->lpVtbl->Release)(v19);
      if ( v11 )
        CMILCOMBase::InternalRelease(v11);
    }
  }
  return *((_BYTE *)this + 256);
}
