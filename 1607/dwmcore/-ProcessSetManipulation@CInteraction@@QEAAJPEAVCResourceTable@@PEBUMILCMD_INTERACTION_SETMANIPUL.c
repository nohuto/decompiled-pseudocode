/*
 * XREFs of ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x18010E3D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CInteraction::ProcessSetManipulation(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_SETMANIPULATION *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  __int64 v6; // rbx
  __int64 Resource; // rax
  __int64 v9; // rax
  struct CResource *v10; // rdx
  int v11; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x67u);
    if ( Resource )
      v6 = Resource - 8;
  }
  v9 = *((_QWORD *)this + 42);
  if ( v6 != v9 )
  {
    if ( v9 )
    {
      CResource::UnRegisterNotifierInternal((CInteraction *)((char *)this + 8), (struct CResource *)(v9 + 8));
      *((_QWORD *)this + 42) = 0LL;
    }
    if ( v6 )
      v10 = (struct CResource *)(v6 + 8);
    else
      v10 = 0LL;
    v11 = CResource::RegisterNotifier((CInteraction *)((char *)this + 8), v10);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x13Cu);
    else
      *((_QWORD *)this + 42) = v6;
  }
  return v4;
}
