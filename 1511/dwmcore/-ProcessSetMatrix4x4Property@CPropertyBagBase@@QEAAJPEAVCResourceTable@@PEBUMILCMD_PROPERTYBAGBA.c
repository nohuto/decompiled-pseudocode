/*
 * XREFs of ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x1800F9824
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetMatrix4x4Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(CPropertyBagBase *, _QWORD, _QWORD, __int64, _OWORD *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  _OWORD v8[4]; // [rsp+30h] [rbp-50h] BYREF

  v3 = *(_QWORD *)this;
  v8[0] = *((_OWORD *)a3 + 1);
  v4 = *(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, _OWORD *))(v3 + 112);
  v8[1] = *((_OWORD *)a3 + 2);
  v8[2] = *((_OWORD *)a3 + 3);
  v8[3] = *((_OWORD *)a3 + 4);
  v5 = v4(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 2), 265LL, v8);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x103u);
  return v6;
}
