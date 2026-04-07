/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x180012B30
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  int v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  CResource *v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+3Ch] [rbp-24h]
  __int64 v17; // [rsp+44h] [rbp-1Ch]

  v14 = *a4;
  if ( *a4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)*a4 + 2);
    v9 = (volatile signed __int32 *)v14;
  }
  else
  {
    v7 = CResource::Create(68LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x73u);
      goto LABEL_13;
    }
    v9 = (volatile signed __int32 *)v14;
  }
  v10 = 0;
  v15 = 253;
  v16 = 0LL;
  v17 = 0LL;
  if ( a1 )
    v10 = *(_DWORD *)(a1 + 24);
  LODWORD(v17) = v10;
  if ( a2 )
    v11 = *(_DWORD *)(a2 + 24);
  else
    v11 = 0;
  HIDWORD(v17) = v11;
  HIDWORD(v16) = 1;
  v12 = CResource::Send((CResource *)v9, &v15, 0x14u);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x7Du);
LABEL_14:
    if ( v9 )
      CBaseObject::Release((CBaseObject *)v9);
    return v8;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = (CBaseObject *)v9;
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 2);
LABEL_13:
    v9 = (volatile signed __int32 *)v14;
    goto LABEL_14;
  }
  return v8;
}
