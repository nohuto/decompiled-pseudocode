/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18007F478
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180006E5C (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisual *this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char CurrentTransform; // al
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rax
  int v10; // eax
  double v12[6]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v13[16]; // [rsp+68h] [rbp+7h] BYREF

  v1 = (char *)this + 96;
  if ( !*((_QWORD *)this + 12) )
  {
    v3 = CResource::Create(0x14u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)this + 12);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x3EBu);
      return v4;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 352LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*(_QWORD *)v1 + 24LL));
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x3EEu);
      return v4;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v13);
  *((_BYTE *)this + 84) &= ~2u;
  v7 = *(float *)v13;
  v8 = *(float *)&v13[1];
  *((_BYTE *)this + 84) |= 2 * (CurrentTransform & 1);
  v9 = *(_QWORD *)v1;
  v12[0] = v7;
  v12[1] = v8;
  v12[2] = *(float *)&v13[4];
  v12[3] = *(float *)&v13[5];
  v12[4] = *(float *)&v13[12];
  v12[5] = *(float *)&v13[13];
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v9 + 16) + 1112LL))(
          *(_QWORD *)(v9 + 16),
          *(unsigned int *)(v9 + 24),
          v12);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x3FEu);
  return v4;
}
