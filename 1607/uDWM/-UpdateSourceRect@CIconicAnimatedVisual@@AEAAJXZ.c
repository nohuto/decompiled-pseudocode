/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009A044
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009A0F0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D784 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D79C (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CIconicAnimatedVisual *this)
{
  unsigned int v1; // ebx
  CSecondaryWindowRepresentation *v2; // rcx
  CSecondaryWindowRepresentation *v3; // rcx
  __int64 v4; // r9
  int v5; // eax
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 37) )
  {
    v2 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 34);
    v7[0] = 0;
    v7[1] = 0;
    *(float *)&v7[2] = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v2);
    *(float *)&v7[3] = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v3);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(v4 + 16) + 288LL))(
           *(_QWORD *)(v4 + 16),
           *(unsigned int *)(v4 + 24),
           v7);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x87u);
  }
  return v1;
}
