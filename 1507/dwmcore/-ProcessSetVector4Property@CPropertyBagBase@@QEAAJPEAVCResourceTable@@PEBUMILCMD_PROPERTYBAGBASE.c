/*
 * XREFs of ?ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY@@@Z @ 0x180116470
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetVector4Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY *a3)
{
  __int64 (__fastcall *v3)(CPropertyBagBase *, _QWORD, _QWORD, __int64, __int128 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, __int128 *))(*(_QWORD *)this + 104LL);
  v7 = *((_OWORD *)a3 + 1);
  v4 = v3(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 2), 68LL, &v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x92u);
  return v5;
}
