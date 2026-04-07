/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000B380 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D1E0 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001DE78 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18001E0B8 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003D9F0 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x18003F9C0 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this)
{
  unsigned int v1; // ebp
  unsigned int v3; // esi
  CWindowData *v4; // rdi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v6; // rcx
  int v7; // eax
  char v8; // al
  unsigned int v9; // edi
  CWindowData *v10; // rbp
  CWindowSnapshot *v12; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]
  CWindowData *v15; // [rsp+40h] [rbp+8h]

  v1 = 0;
  v3 = 0;
  if ( (*((_BYTE *)this + 568) & 0x40) != 0 )
    return v3;
  CWindowData::ClearSnapshot(this, 0, 0, 0);
  v4 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v4 = this;
  }
  else
  {
    if ( IdealWindowRepresentationType || (*((_BYTE *)this + 572) & 8) != 0 || !*((_DWORD *)this + 138) )
      goto LABEL_12;
    while ( 1 )
    {
      v15 = *(CWindowData **)(*((_QWORD *)this + 66) + 8LL * v1);
      if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v15) == 1 )
        break;
      if ( ++v1 >= *((_DWORD *)this + 138) )
        goto LABEL_12;
    }
    v4 = v15;
  }
  if ( v4 )
  {
    if ( !CWindowData::IsImmersiveWindow(v4) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      v4 = 0LL;
    if ( v4 )
    {
      v6 = (struct CTopLevelWindow *)*((_QWORD *)v4 + 48);
      if ( v6 )
      {
        v7 = CWindowSnapshot::Create(v6, (struct CWindowSnapshot **)this + 50);
        v3 = v7;
        if ( v7 < 0 )
        {
          v14 = 7919;
          goto LABEL_33;
        }
        *((_BYTE *)this + 572) &= ~0x10u;
      }
    }
  }
LABEL_12:
  CWindowData::NotifyRepresentationChanged(this);
  v8 = *((_BYTE *)this + 572);
  if ( (v8 & 8) == 0 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 138) )
    {
      while ( 1 )
      {
        v10 = *(CWindowData **)(*((_QWORD *)this + 66) + 8LL * v9);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v10) == 1 )
        {
          v3 = CWindowData::SnapshotWindow(v10);
          if ( (v3 & 0x80000000) != 0 )
            break;
        }
        if ( ++v9 >= *((_DWORD *)this + 138) )
          return v3;
      }
      v14 = 7947;
      v13 = v3;
      goto LABEL_34;
    }
    return v3;
  }
  v12 = (CWindowSnapshot *)*((_QWORD *)this + 50);
  if ( !v12 || (*((_DWORD *)v4 + 38) & 0xFFFFFFFB) != 0 || (*((_DWORD *)v4 + 39) & 0x400) != 0 )
  {
    *((_BYTE *)this + 572) = v8 | 0x10;
    return v3;
  }
  v7 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v12, v4);
  v3 = v7;
  if ( v7 < 0 )
  {
    v14 = 7929;
LABEL_33:
    v13 = v7;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v14);
  }
  return v3;
}
