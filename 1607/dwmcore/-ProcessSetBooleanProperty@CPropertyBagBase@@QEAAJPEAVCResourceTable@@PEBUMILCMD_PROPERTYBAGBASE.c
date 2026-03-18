/*
 * XREFs of ?ProcessSetBooleanProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETBOOLEANPROPERTY@@@Z @ 0x18010E620
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetBooleanProperty(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETBOOLEANPROPERTY *a3)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  struct CResourceTable *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((_DWORD *)a3 + 4) == 0;
  v4 = *(_QWORD *)this;
  v6 = *((unsigned int *)a3 + 2);
  LOBYTE(v10) = !v3;
  v7 = (*(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, __int64, __int64, struct CResourceTable **))(v4 + 120))(
         this,
         *((unsigned int *)a3 + 3),
         v6,
         17LL,
         &v10);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x54u);
  return v8;
}
