/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001A854 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C4E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E970 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x180032B4C (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180080B00 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001B42C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  CBaseObject *v7; // rcx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 i; // rdi
  CWindowData *v12; // rcx

  if ( CWindowData::IsImmersiveWindow(this) )
  {
    v8 = *((_BYTE *)this + 580);
    if ( (v8 & 1) != 0 && a4 )
    {
      v9 = 0LL;
      for ( *((_BYTE *)this + 580) = v8 | 0x10; (unsigned int)v9 < *((_DWORD *)this + 140); *(_BYTE *)(v10 + 580) |= 0x10u )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + 67) + 8 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 51) = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 140); i = (unsigned int)(i + 1) )
    {
      v12 = *(CWindowData **)(*((_QWORD *)this + 67) + 8 * i);
      if ( (*((_DWORD *)v12 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v12, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
