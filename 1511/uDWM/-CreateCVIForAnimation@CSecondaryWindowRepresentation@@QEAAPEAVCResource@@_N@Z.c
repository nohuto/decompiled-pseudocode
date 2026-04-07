/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x180016BAC
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180035160 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017904 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

struct CResource *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v4; // eax
  __int64 i; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  CResource *v13; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-29h]
  int v15; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v16[20]; // [rsp+54h] [rbp-15h] BYREF
  __int128 v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+13h]
  int v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+84h] [rbp+1Bh]

  v13 = 0LL;
  v15 = 162;
  memset_0(v16, 0, 0x40uLL);
  v14[0] = *((_DWORD *)this + 22);
  v14[1] = *((_DWORD *)this + 24);
  v14[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v14[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v4 = CResource::Create(56LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x342u);
    return 0LL;
  }
  v18 = 0;
  v20 = 0;
  v17 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v16[i * 4 + 4] = (float)(int)v14[i];
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v6 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v8 + 400) + 32LL);
      goto LABEL_6;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_6;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v8 + 408) + 80LL);
      goto LABEL_6;
    }
  }
  v6 = v8;
LABEL_6:
  v9 = *(_QWORD *)(v6 + 384);
  if ( v9 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v7 = *(_QWORD *)(v9 + 552);
    else
      v7 = *(_QWORD *)(v9 + 280);
  }
  if ( v7 )
  {
    v10 = *(_QWORD *)(v7 + 16);
    if ( v10 )
      LODWORD(v10) = *(_DWORD *)(v10 + 24);
    v19 = v10;
  }
  else
  {
    v19 = 0;
  }
  v11 = CResource::Send(0LL, &v15, 0x44u);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x357u);
  }
  else if ( a2 )
  {
    v13 = (CResource *)163;
    CResource::Send(0LL, &v13, 8u);
  }
  return 0LL;
}
