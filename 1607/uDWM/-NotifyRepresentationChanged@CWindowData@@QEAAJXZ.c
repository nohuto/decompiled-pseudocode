/*
 * XREFs of ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001B42C
 * Callers:
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180006C68 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001A854 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001B188 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E4F0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E5D0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E970 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180030D04 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180031634 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007FAE0 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180080B00 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::NotifyRepresentationChanged(CWindowData *this)
{
  unsigned int v1; // edi
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]
  unsigned int v11; // [rsp+48h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 112) )
  {
    v3 = *((_QWORD *)this + 53);
    v4 = *((unsigned int *)this + 112);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v8, 8LL, v4, v3) >= 0 )
    {
      v5 = 0LL;
      if ( v11 )
      {
        v6 = v8;
        while ( 1 )
        {
          v7 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v6 + 8 * v5));
          v1 = v7;
          if ( v7 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v11 )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1A2Cu);
      }
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v8);
  }
  return v1;
}
