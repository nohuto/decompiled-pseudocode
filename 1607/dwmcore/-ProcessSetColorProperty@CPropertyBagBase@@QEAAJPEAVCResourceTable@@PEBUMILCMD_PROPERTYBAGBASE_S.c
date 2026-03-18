/*
 * XREFs of ?ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY@@@Z @ 0x18010E820
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetColorProperty(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_OWORD *)a3 + 1);
  v4 = *(_QWORD *)this;
  v6 = *((unsigned int *)a3 + 2);
  v10 = v3;
  v7 = (*(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, __int64, __int64, __int128 *))(v4 + 120))(
         this,
         *((unsigned int *)a3 + 3),
         v6,
         70LL,
         &v10);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCCu);
  return v8;
}
