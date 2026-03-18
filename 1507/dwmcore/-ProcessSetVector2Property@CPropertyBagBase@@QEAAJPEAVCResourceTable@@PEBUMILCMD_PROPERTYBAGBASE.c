/*
 * XREFs of ?ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY@@@Z @ 0x180116328
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  v3 = (*(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, struct CResourceTable **))(*(_QWORD *)this + 104LL))(
         this,
         *((unsigned int *)a3 + 3),
         *((unsigned int *)a3 + 2),
         34LL,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x62u);
  return v4;
}
