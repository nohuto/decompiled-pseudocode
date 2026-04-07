/*
 * XREFs of ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x1800180F4
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001821C (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateAlignmentTransform(CText *this)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  _OWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  double v8; // [rsp+58h] [rbp-20h]

  v1 = *((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 29) - *((_DWORD *)this + 97);
    v6[0] = _xmm;
    v7 = 0LL;
    v6[1] = _xmm;
    v8 = (double)(v3 / 2);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v1 + 16) + 1112LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           v6);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1ECu);
  }
  return v2;
}
