/*
 * XREFs of ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x18011612C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetMatrix3x2Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY *a3)
{
  int v3; // xmm1_4
  __int64 (__fastcall *v4)(CPropertyBagBase *, _QWORD, _QWORD, __int64, __int128 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]

  v3 = *((_DWORD *)a3 + 9);
  v4 = *(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, _QWORD, __int64, __int128 *))(*(_QWORD *)this + 104LL);
  v8 = *((_OWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 8);
  v10 = v3;
  v5 = v4(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 2), 101LL, &v8);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xADu);
  return v6;
}
