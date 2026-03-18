/*
 * XREFs of ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x180064B20
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180063538 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x180064CD0 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
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
  *((_DWORD *)this + 28) = v5;
  if ( !v5 )
    goto LABEL_6;
  if ( v5 > a5 || (v5 & 0xF) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE01u);
    goto LABEL_10;
  }
  v10 = WPF::HrAlloc(v8, v5, (unsigned __int64)(this + 15), v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE09u);
LABEL_10:
    CRgnGeometry::UnRegisterNotifiers((CRgnGeometry *)this);
    goto LABEL_7;
  }
  memcpy_0(this[15], a4, *((unsigned int *)this + 28));
LABEL_6:
  v11 = 0;
LABEL_7:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v11;
}
