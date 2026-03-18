/*
 * XREFs of ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180049C6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180060A08 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  CResource::UnRegisterNotifierInternal((CResource *)this, this[34]);
  this[34] = 0LL;
  v7 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v7, 39LL);
    if ( Resource )
    {
      this[34] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v9 = this[2];
      v10 = this[7];
      *((_BYTE *)this + 184) = 1;
      CMonitorTreeAssociation::RemoveTree(*((CMonitorTreeAssociation **)v9 + 3), v10);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x4AAu);
    }
  }
  return v6;
}
