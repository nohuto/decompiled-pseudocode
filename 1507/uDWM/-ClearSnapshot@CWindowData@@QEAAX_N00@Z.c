/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180018458 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B050 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B150 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F410 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18002F5A8 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  unsigned int v7; // edi
  CBaseObject *v8; // rcx
  char v9; // al
  unsigned int v10; // r8d
  __int64 v11; // rcx
  CWindowData *v12; // rcx

  v7 = 0;
  if ( CWindowData::IsImmersiveWindow(this) )
  {
    v9 = *((_BYTE *)this + 556);
    if ( (v9 & 1) != 0 && a4 )
    {
      v10 = 0;
      for ( *((_BYTE *)this + 556) = v9 | 0x40;
            v10 < *((_DWORD *)this + 134);
            *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 64) + 8 * v11) + 556LL) |= 0x40u )
      {
        v11 = v10++;
      }
    }
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 48) = 0LL;
    if ( *((_DWORD *)this + 134) )
    {
      do
      {
        v12 = *(CWindowData **)(*((_QWORD *)this + 64) + 8LL * v7);
        if ( (*((_DWORD *)v12 + 25) & 0x20000000) == 0 )
          CWindowData::ClearSnapshot(v12, a2, 0, a4);
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 134) );
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
