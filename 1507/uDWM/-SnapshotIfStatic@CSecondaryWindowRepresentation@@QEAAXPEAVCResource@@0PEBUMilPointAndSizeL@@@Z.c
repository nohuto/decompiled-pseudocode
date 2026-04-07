/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180033D48
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180004F10 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003472C (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     Template_z @ 0x180074C4C (Template_z.c)
 */

void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CResource *a2,
        struct CResource *a3,
        const struct MilPointAndSizeL *a4)
{
  CWindowData *v4; // r10
  __int64 v6; // rdi
  CWindowData *v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int yBottom; // r10d
  int v16; // r9d
  CBaseObject *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v22[2]; // [rsp+34h] [rbp-44h] BYREF
  int rc_12; // [rsp+44h] [rbp-34h]

  v4 = (CWindowData *)*((_QWORD *)this + 8);
  v6 = 0LL;
  v10 = 0LL;
  v11 = *((_DWORD *)this + 18) - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v10 = *(CWindowData **)(*((_QWORD *)v4 + 48) + 32LL);
      goto LABEL_3;
    }
    if ( v12 != 1 )
      goto LABEL_3;
    if ( !CWindowData::IsImmersiveWindow(v4) )
    {
      v10 = *(CWindowData **)(*((_QWORD *)v4 + 49) + 80LL);
      goto LABEL_3;
    }
  }
  v10 = v4;
LABEL_3:
  if ( *((_DWORD *)this + 18) != 3 && ((*((_BYTE *)v10 + 556) & 0x20) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    v13 = *((_DWORD *)a4 + 1);
    v14 = *(_DWORD *)a4;
    yBottom = v13 + *((_DWORD *)a4 + 3);
    v16 = *(_DWORD *)a4 + *((_DWORD *)a4 + 2);
    v21 = 154;
    v22[0] = 0LL;
    v22[1] = 0LL;
    rc_12 = 0;
    SetRect((LPRECT)((char *)v22 + 4), v14, v13, v16, yBottom);
    CResource::Send(a2, &v21, 0x18u);
    v17 = (CBaseObject *)*((_QWORD *)this + 65);
    *((_OWORD *)this + 33) = *(_OWORD *)a4;
    if ( v17 )
      CBaseObject::Release(v17);
    *((_QWORD *)this + 65) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
    *((_BYTE *)this + 160) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v20 = *((_QWORD *)this + 4);
      if ( v20 )
        v6 = *(_QWORD *)(v20 + 16);
      Template_z(v19, v18, v6);
    }
  }
}
