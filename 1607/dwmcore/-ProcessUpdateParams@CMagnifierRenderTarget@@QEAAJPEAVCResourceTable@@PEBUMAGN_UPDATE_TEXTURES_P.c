/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18011F0EC
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x18010F858 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x180024448 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CMatrixTransform *v8; // rcx
  __int64 v9; // xmm0_8
  struct CResourceTable *v10; // rdx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[4]; // [rsp+34h] [rbp-44h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v4 = (char *)this + 608;
  v6 = 0;
  if ( memcmp_0((char *)this + 608, a3, 0x28uLL) )
  {
    v7 = *((_QWORD *)this + 21);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 44) = (float)*(int *)a3;
    *((float *)this + 45) = (float)*((int *)a3 + 1);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 64LL) )
      {
        v13 = 343;
        memset_0(v14, 0, 0x34uLL);
        v8 = (CMatrixTransform *)*((_QWORD *)this + 21);
        v9 = *((_QWORD *)a3 + 1);
        v16 = *((_OWORD *)a3 + 1);
        v17 = *((_QWORD *)a3 + 4);
        v15 = v9;
        v11 = CMatrixTransform::ProcessUpdate(v8, v10, (const struct MILCMD_MATRIXTRANSFORM *)&v13);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2ACu);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2A2u);
      }
    }
  }
  return v6;
}
