/*
 * XREFs of ?ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY@@@Z @ 0x1800F945C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetVector2Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct CResourceTable *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v6 = (struct CResourceTable *)_mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 4), (__m128)*((unsigned int *)a3 + 5)).m128_u64[0];
  v3 = (*(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, struct CResourceTable **))(*(_QWORD *)this + 112LL))(
         this,
         *((unsigned int *)a3 + 3),
         *((unsigned int *)a3 + 2),
         35LL,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x6Cu);
  return v4;
}
