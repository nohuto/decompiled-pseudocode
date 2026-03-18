/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x180108668
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800FADE4 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x180066558 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // r14
  CMatrixTransform *v8; // rcx
  __int64 v9; // xmm0_8
  struct CResourceTable *v10; // rdx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[4]; // [rsp+34h] [rbp-44h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v4 = (char *)this + 536;
  v6 = 0;
  if ( memcmp_0((char *)this + 536, a3, 0x28uLL) )
  {
    v7 = *((_QWORD *)this + 12);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 26) = (float)*(int *)a3;
    *((float *)this + 27) = (float)*((int *)a3 + 1);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 63LL) )
      {
        v13 = 250;
        memset_0(v14, 0, 0x34uLL);
        v8 = (CMatrixTransform *)*((_QWORD *)this + 12);
        v9 = *((_QWORD *)a3 + 1);
        v16 = *((_OWORD *)a3 + 1);
        v17 = *((_QWORD *)a3 + 4);
        v15 = v9;
        v11 = CMatrixTransform::ProcessUpdate(v8, v10, (const struct MILCMD_MATRIXTRANSFORM *)&v13);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2C2u);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2B8u);
      }
    }
  }
  return v6;
}
