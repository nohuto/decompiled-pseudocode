/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x18007494C
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  CBaseObject *v4; // rbx
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CResource *v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+44h] [rbp-1Ch]

  v4 = *a4;
  v15 = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    v8 = (volatile signed __int32 *)v15;
  }
  else
  {
    v9 = CResource::Create(0x40u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x73u);
LABEL_17:
      v8 = (volatile signed __int32 *)v15;
LABEL_18:
      if ( v8 )
        CBaseObject::Release((CBaseObject *)v8);
      return v10;
    }
    v8 = (volatile signed __int32 *)v15;
  }
  v11 = 0;
  v16 = 246;
  v17 = 0LL;
  v18 = 0LL;
  if ( a1 )
    v11 = *(_DWORD *)(a1 + 24);
  LODWORD(v18) = v11;
  if ( a2 )
    v12 = *(_DWORD *)(a2 + 24);
  else
    v12 = 0;
  HIDWORD(v18) = v12;
  HIDWORD(v17) = 1;
  v13 = CResource::Send((CResource *)v8, &v16, 0x14u);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x7Du);
    goto LABEL_18;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = (CBaseObject *)v8;
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    goto LABEL_17;
  }
  return v10;
}
