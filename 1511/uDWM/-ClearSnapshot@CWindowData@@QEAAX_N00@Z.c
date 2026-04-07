/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001DE78
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000B380 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001DE78 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032600 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x1800465D0 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180080260 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001DE78 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  __int64 v7; // rcx
  unsigned int v8; // edi
  CBaseObject *v9; // rcx
  char v10; // al
  unsigned int v11; // r8d
  __int64 v12; // rcx
  CWindowData *v13; // rcx

  v8 = 0;
  if ( CWindowData::IsImmersiveWindow(this) )
  {
    v10 = *(_BYTE *)(v7 + 572);
    if ( (v10 & 1) != 0 && a4 )
    {
      v11 = 0;
      *(_BYTE *)(v7 + 572) = v10 | 0x10;
      if ( *(_DWORD *)(v7 + 552) )
      {
        do
        {
          v12 = v11++;
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 66) + 8 * v12) + 572LL) |= 0x10u;
        }
        while ( v11 < *((_DWORD *)this + 138) );
      }
    }
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 50) = 0LL;
    if ( *((_DWORD *)this + 138) )
    {
      do
      {
        v13 = *(CWindowData **)(*((_QWORD *)this + 66) + 8LL * v8);
        if ( (*((_DWORD *)v13 + 25) & 0x20000000) == 0 )
          CWindowData::ClearSnapshot(v13, a2, 0, a4);
        ++v8;
      }
      while ( v8 < *((_DWORD *)this + 138) );
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
