/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x180033B7C
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180026E10 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800348C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

struct CResource *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v4; // eax
  CResource *v5; // rbx
  int v6; // esi
  __int64 i; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  CResource *v15[2]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v16[4]; // [rsp+40h] [rbp-29h]
  int v17; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v18[20]; // [rsp+54h] [rbp-15h] BYREF
  __int128 v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+13h]
  int v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+84h] [rbp+1Bh]

  v15[0] = 0LL;
  v17 = 152;
  memset_0(v18, 0, 0x40uLL);
  v16[0] = *((_DWORD *)this + 22);
  v16[1] = *((_DWORD *)this + 24);
  v16[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v16[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v4 = CResource::Create(0x34u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), v15);
  v5 = v15[0];
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x342u);
    goto LABEL_16;
  }
  v20 = 0;
  v22 = 0;
  v19 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v18[i * 4 + 4] = (float)(int)v16[i];
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v8 = 0LL;
  v9 = *((_QWORD *)this + 6);
  v10 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v10 + 384) + 32LL);
      goto LABEL_6;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_6;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v10 + 392) + 80LL);
      goto LABEL_6;
    }
  }
  v8 = v10;
LABEL_6:
  v11 = *(_QWORD *)(v8 + 368);
  if ( v11 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v9 = *(_QWORD *)(v11 + 552);
    else
      v9 = *(_QWORD *)(v11 + 280);
  }
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 16);
    if ( v12 )
      LODWORD(v12) = *(_DWORD *)(v12 + 24);
    v21 = v12;
  }
  else
  {
    v21 = 0;
  }
  v13 = CResource::Send(v5, &v17, 0x44u);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x357u);
  }
  else if ( a2 )
  {
    v15[0] = (CResource *)153;
    CResource::Send(v5, v15, 8u);
  }
LABEL_16:
  if ( v6 < 0 && v5 )
  {
    CBaseObject::Release(v5);
    return 0LL;
  }
  return v5;
}
