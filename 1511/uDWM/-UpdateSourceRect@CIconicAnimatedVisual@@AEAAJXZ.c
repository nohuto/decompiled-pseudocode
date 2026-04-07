/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009D520
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009D5E0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB0C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB24 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CIconicAnimatedVisual *this)
{
  unsigned int v1; // ebx
  CSecondaryWindowRepresentation *v2; // rcx
  CSecondaryWindowRepresentation *v3; // rcx
  CResource *v4; // r9
  int v5; // eax
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  float IconicWidth; // [rsp+40h] [rbp-18h]
  float IconicHeight; // [rsp+44h] [rbp-14h]

  v1 = 0;
  if ( *((_QWORD *)this + 37) )
  {
    v2 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 34);
    v8 = 0LL;
    v9 = 0;
    v7 = 35;
    IconicWidth = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v2);
    IconicHeight = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v3);
    v5 = CResource::Send(v4, &v7, 0x18u);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x85u);
  }
  return v1;
}
