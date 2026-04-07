/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x18007A120
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007A038 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18007A9E0 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CMagnifier::Initialize(CMagnifier *this)
{
  CResource **v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  CResource *v7; // rcx
  int v8; // eax
  char *v9; // rsi
  int v10; // eax
  CResource *v11; // rcx
  int v12; // eax
  CResource *v13; // rcx
  int v14; // eax
  int v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+34h] [rbp-4Ch]
  int v18; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v19[4]; // [rsp+44h] [rbp-3Ch] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h]
  __int128 v21; // [rsp+58h] [rbp-28h]
  __int128 v22; // [rsp+68h] [rbp-18h]

  v1 = (CResource **)((char *)this + 32);
  v3 = CResource::Create(0x35u, *((_QWORD *)this + 2), (CBaseObject **)this + 4);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v16 = 107;
    v17 = 0LL;
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 24);
    else
      v6 = 0;
    v7 = *v1;
    HIDWORD(v17) = v6;
    v8 = CResource::Send(v7, &v16, 0xCu);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v9 = (char *)this + 40;
      if ( *((_QWORD *)this + 5)
        || (v10 = CResource::Create(0x3Fu, *((_QWORD *)this + 2), (CBaseObject **)this + 5), v4 = v10, v10 >= 0) )
      {
        v18 = 250;
        memset_0(v19, 0, 0x34uLL);
        v11 = *(CResource **)v9;
        v16 = 114;
        v17 = 0LL;
        v20 = _xmm;
        v21 = _xmm;
        v22 = 0LL;
        v12 = CResource::Send(v11, &v18, 0x38u);
        v4 = v12;
        if ( v12 >= 0 )
        {
          v13 = *v1;
          HIDWORD(v17) = *(_DWORD *)(*(_QWORD *)v9 + 24LL);
          v14 = CResource::Send(v13, &v16, 0xCu);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xA2u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x9Eu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x8Eu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x87u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x82u);
  }
  return v4;
}
