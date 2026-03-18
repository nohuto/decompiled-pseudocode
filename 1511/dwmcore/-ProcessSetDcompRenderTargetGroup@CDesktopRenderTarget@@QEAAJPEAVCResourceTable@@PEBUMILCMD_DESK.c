/*
 * XREFs of ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180074DB4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B2948 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  struct CResource *v9; // rcx
  struct CVisualTree *v10; // rdx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[40]);
  this[40] = 0LL;
  v7 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v7, 40LL);
    if ( Resource )
    {
      this[40] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v9 = this[2];
      v10 = this[7];
      *((_BYTE *)this + 232) = 1;
      CMonitorTreeAssociation::RemoveTree(*((CMonitorTreeAssociation **)v9 + 3), v10);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x4A8u);
    }
  }
  return v6;
}
