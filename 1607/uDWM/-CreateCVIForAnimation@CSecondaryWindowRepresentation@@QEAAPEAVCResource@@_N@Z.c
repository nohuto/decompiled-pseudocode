/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18003436C
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002988C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800350AC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

struct CResource *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  int v5; // eax
  CBaseObject *v6; // rbx
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  int v15; // eax
  _DWORD v17[4]; // [rsp+58h] [rbp+7h]
  CBaseObject *v18; // [rsp+68h] [rbp+17h] BYREF
  __int128 v19; // [rsp+70h] [rbp+1Fh] BYREF
  _DWORD v20[4]; // [rsp+80h] [rbp+2Fh] BYREF

  v2 = *((_DWORD *)this + 22);
  v18 = 0LL;
  v17[0] = v2;
  v17[1] = *((_DWORD *)this + 24);
  v17[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v17[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = CResource::Create(5u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v18);
  v6 = v18;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x343u);
    goto LABEL_15;
  }
  v8 = 0LL;
  v19 = 0LL;
  do
  {
    *(float *)&v20[v8] = (float)(int)v17[v8];
    ++v8;
  }
  while ( v8 < 4 );
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 6);
  v11 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v11 + 408) + 32LL);
      goto LABEL_6;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_6;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v11 + 416) + 80LL);
      goto LABEL_6;
    }
  }
  v9 = v11;
LABEL_6:
  v12 = *(_QWORD *)(v9 + 384);
  if ( v12 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v10 = *(_QWORD *)(v12 + 552);
    else
      v10 = *(_QWORD *)(v12 + 280);
  }
  if ( v10 && (v13 = *(_QWORD *)(v10 + 16)) != 0 )
    v14 = *(_DWORD *)(v13 + 24);
  else
    v14 = 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int128 *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v6 + 2) + 952LL))(
          *((_QWORD *)v6 + 2),
          *((unsigned int *)v6 + 6),
          v20,
          &v19,
          0,
          0,
          v14,
          0);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x35Fu);
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 2) + 960LL))(
      *((_QWORD *)v6 + 2),
      *((unsigned int *)v6 + 6));
  }
LABEL_15:
  if ( v7 < 0 && v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
