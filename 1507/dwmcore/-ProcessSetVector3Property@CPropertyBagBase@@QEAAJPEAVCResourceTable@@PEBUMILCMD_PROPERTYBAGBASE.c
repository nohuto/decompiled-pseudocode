/*
 * XREFs of ?ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY@@@Z @ 0x1801163B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetVector3Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY *a3)
{
  __int64 v3; // rax
  int v4; // xmm1_4
  __int64 (__fastcall *v5)(CPropertyBagBase *, _QWORD, _QWORD, __int64, _DWORD *); // rbx
  int v6; // xmm0_4
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)this;
  v4 = *((_DWORD *)a3 + 5);
  v10[0] = *((_DWORD *)a3 + 4);
  v5 = *(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, _DWORD *))(v3 + 104);
  v6 = *((_DWORD *)a3 + 6);
  v10[1] = v4;
  v10[2] = v6;
  v7 = v5(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 2), 51LL, v10);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7Au);
  return v8;
}
