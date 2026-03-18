/*
 * XREFs of ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18006F900
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800798A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x18007CDE4 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18006F990 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CRgnGeometry::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        const struct MILCMD_RGNGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  WPF *v8; // rcx
  void **v9; // r9
  int v10; // eax
  unsigned int v11; // ebx

  v5 = *((_DWORD *)a3 + 2);
  CRgnGeometry::UnRegisterNotifiers((CRgnGeometry *)this);
  *((_DWORD *)this + 24) = v5;
  if ( !v5 )
    goto LABEL_6;
  if ( v5 > a5 || (v5 & 0xF) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xDFFu);
    goto LABEL_10;
  }
  v10 = WPF::HrAlloc(v8, v5, this + 13, v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE07u);
LABEL_10:
    CRgnGeometry::UnRegisterNotifiers((CRgnGeometry *)this);
    goto LABEL_7;
  }
  memcpy_0(this[13], a4, *((unsigned int *)this + 24));
LABEL_6:
  v11 = 0;
LABEL_7:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v11;
}
