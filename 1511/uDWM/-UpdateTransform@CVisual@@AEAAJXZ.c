/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18007E9DC
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000E7FC (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisual *this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char CurrentTransform; // al
  CResource *v7; // rcx
  int v8; // eax
  int v10; // [rsp+38h] [rbp-49h] BYREF
  __int64 v11; // [rsp+3Ch] [rbp-45h]
  int v12; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v13[4]; // [rsp+4Ch] [rbp-35h] BYREF
  double v14; // [rsp+50h] [rbp-31h]
  double v15; // [rsp+58h] [rbp-29h]
  double v16; // [rsp+60h] [rbp-21h]
  double v17; // [rsp+68h] [rbp-19h]
  double v18; // [rsp+70h] [rbp-11h]
  double v19; // [rsp+78h] [rbp-9h]
  float v20[16]; // [rsp+88h] [rbp+7h] BYREF

  v1 = (char *)this + 96;
  if ( !*((_QWORD *)this + 12) )
  {
    v3 = CResource::Create(0x3Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 12);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x42Fu);
      return v4;
    }
    v10 = 46;
    v11 = 0LL;
    HIDWORD(v11) = *(_DWORD *)(*(_QWORD *)v1 + 24LL);
    v5 = CResource::Send(*((CResource **)this + 2), &v10, 0xCu);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x434u);
      return v4;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v20);
  *((_BYTE *)this + 84) &= ~2u;
  v12 = 250;
  *((_BYTE *)this + 84) |= 2 * (CurrentTransform & 1);
  memset_0(v13, 0, 0x34uLL);
  v7 = *(CResource **)v1;
  v14 = v20[0];
  v15 = v20[1];
  v16 = v20[4];
  v17 = v20[5];
  v18 = v20[12];
  v19 = v20[13];
  v8 = CResource::Send(v7, &v12, 0x38u);
  v4 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x443u);
  return v4;
}
