/*
 * XREFs of ?AddBinding@CAnimationResource@@QEAAJII@Z @ 0x180012124
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@II@Z @ 0x18000C14C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@II@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180011CB4 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     Template_qqqp @ 0x18009D9B4 (Template_qqqp.c)
 */

__int64 __fastcall CAnimationResource::AddBinding(CResource **this, int a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CResource *v8; // rcx
  int v9; // eax
  int v10; // edx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-34h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+3Ch] [rbp-2Ch]

  v6 = CAnimationResource::_EnsureResources((CAnimationResource *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x1BEu);
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v8 = this[2];
    v12 = 128;
    v13 = *((_DWORD *)v8 + 6);
    v14 = a2;
    v15 = a3;
    v9 = CResource::Send(v8, &v12, 0x10u);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1C5u);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_qqqp((unsigned int)this[2], v10, *((_DWORD *)this[2] + 6), a2, a3, *((_QWORD *)this[2] + 2));
      *((_DWORD *)this + 21) = a2;
      *((_DWORD *)this + 22) = a3;
    }
  }
  return v7;
}
