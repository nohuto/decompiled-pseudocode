/*
 * XREFs of ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x1800F5850
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSurface(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETSURFACE *a3)
{
  unsigned int v5; // esi
  struct CResource *ResourceWithoutType; // r14
  float v7; // xmm1_4

  v5 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType == this[8] )
    goto LABEL_6;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
  this[8] = 0LL;
  if ( !ResourceWithoutType )
    goto LABEL_6;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         87LL) )
  {
    CResource::RegisterNotifier((CResource *)this, ResourceWithoutType);
    this[8] = ResourceWithoutType;
LABEL_6:
    *((float *)this + 18) = (float)*((int *)a3 + 3);
    *((float *)this + 19) = (float)*((int *)a3 + 4);
    *((float *)this + 20) = (float)*((int *)a3 + 5);
    v7 = (float)*((int *)a3 + 6);
    this[5] = 0LL;
    *((float *)this + 21) = v7;
    CResource::NotifyOnChanged(this, 5u, 0LL);
    CResource::NotifyOnChanged(this, 0, 0LL);
    return v5;
  }
  v5 = -2003303421;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xABu);
  return v5;
}
