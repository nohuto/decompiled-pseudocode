/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800768C8
 * Callers:
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006D628 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800498AE (memcmp_0.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CVisual::SetColorTransform(CVisual *this, const struct MilColorTransform *a2)
{
  CBaseObject *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  int v14; // eax
  CResource *v15; // rcx
  int v16; // eax
  _BYTE v18[12]; // [rsp+30h] [rbp-49h] BYREF
  int v19; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v20[4]; // [rsp+44h] [rbp-35h] BYREF
  __int128 v21; // [rsp+48h] [rbp-31h]
  __int128 v22; // [rsp+58h] [rbp-21h]
  __int128 v23; // [rsp+68h] [rbp-11h]
  __int128 v24; // [rsp+78h] [rbp-1h]
  __int128 v25; // [rsp+88h] [rbp+Fh]
  __int128 v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+A8h] [rbp+2Fh]

  v2 = 0LL;
  *(_QWORD *)v18 = 0LL;
  if ( !memcmp_0(&gMilColorTransfIdentity, a2, 0x64uLL) )
    goto LABEL_6;
  v5 = CResource::Create(0x30u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x328u);
    v2 = *(CBaseObject **)v18;
    goto LABEL_10;
  }
  v19 = 35;
  memset_0(v20, 0, 0x68uLL);
  v7 = *((_DWORD *)a2 + 24);
  v8 = *((_OWORD *)a2 + 1);
  v2 = *(CBaseObject **)v18;
  v21 = *(_OWORD *)a2;
  v27 = v7;
  v9 = *((_OWORD *)a2 + 2);
  v22 = v8;
  v10 = *((_OWORD *)a2 + 3);
  v23 = v9;
  v11 = *((_OWORD *)a2 + 4);
  v24 = v10;
  v12 = *((_OWORD *)a2 + 5);
  v25 = v11;
  v26 = v12;
  v13 = CResource::Send(*(CResource **)v18, &v19, 0x6Cu);
  v6 = v13;
  if ( v13 >= 0 )
  {
LABEL_6:
    v14 = 0;
    *(_DWORD *)v18 = 54;
    *(_QWORD *)&v18[4] = 0LL;
    if ( v2 )
      v14 = *((_DWORD *)v2 + 6);
    v15 = (CResource *)*((_QWORD *)this + 2);
    *(_DWORD *)&v18[8] = v14;
    v16 = CResource::Send(v15, v18, 0xCu);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x339u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x32Eu);
  }
LABEL_10:
  if ( v2 )
    CBaseObject::Release(v2);
  return v6;
}
