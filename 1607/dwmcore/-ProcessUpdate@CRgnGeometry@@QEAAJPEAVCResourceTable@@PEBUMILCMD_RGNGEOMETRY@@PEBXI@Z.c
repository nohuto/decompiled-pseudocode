/*
 * XREFs of ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002FC98
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180029928 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18002FC10 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRgnGeometry::ProcessUpdate(
        CRgnGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RGNGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rbx
  void **v6; // rsi
  void *v7; // rdx
  unsigned __int64 v10; // rdx
  int v11; // ebx
  __int64 (*v12)(void); // rax
  void *v13; // rax
  void (*v15)(void); // rax

  v5 = *((unsigned int *)a3 + 2);
  v6 = (void **)((char *)this + 184);
  v7 = (void *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    v15 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v15 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v7);
    else
      v15();
    *v6 = 0LL;
  }
  *((_DWORD *)this + 44) = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_12;
  if ( (unsigned int)v5 > a5 || (v5 & 0xF) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xDB7u);
    goto LABEL_22;
  }
  v10 = v5;
  v11 = 0;
  if ( v6 )
  {
    v12 = *(__int64 (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( (char *)v12 == (char *)WPF::ProcessHeapImpl::Alloc )
      v13 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v10);
    else
      v13 = (void *)v12();
    *v6 = v13;
    if ( !v13 )
      v11 = -2147024882;
  }
  else
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xDBFu);
LABEL_22:
    CRgnGeometry::UnRegisterNotifiers(this);
    goto LABEL_13;
  }
  memcpy_0(*v6, a4, *((unsigned int *)this + 44));
LABEL_12:
  v11 = 0;
LABEL_13:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v11;
}
