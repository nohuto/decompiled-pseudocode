/*
 * XREFs of ?ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY@@@Z @ 0x1800F95A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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

  v3 = *(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, __int128 *))(*(_QWORD *)this + 112LL);
  v7 = *((_OWORD *)a3 + 1);
  v4 = v3(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 2), 69LL, &v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Cu);
  return v5;
}
