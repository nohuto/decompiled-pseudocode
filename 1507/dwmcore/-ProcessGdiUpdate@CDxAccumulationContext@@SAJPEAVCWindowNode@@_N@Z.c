/*
 * XREFs of ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18005D184
 * Callers:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18005D184 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180079214 (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x18007D784 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x1801056A4 (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18005D184 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x180121C34 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::ProcessGdiUpdate(struct CWindowNode *a1, bool a2)
{
  unsigned int v3; // edi
  CDxAccumulationContext *v4; // rcx
  __int64 *v6; // rcx
  unsigned int i; // esi
  unsigned __int64 v8; // rax
  int updated; // eax
  int v11; // eax
  struct CWindowNode *v12; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = (CDxAccumulationContext *)*((_QWORD *)a1 + 156);
  if ( v4 && (updated = CDxAccumulationContext::UpdateDxClipShape(v4, a2), v3 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x115u);
  }
  else
  {
    v6 = (__int64 *)((char *)a1 + 72);
    for ( i = 0; ; ++i )
    {
      v8 = (*v6 & 2) != 0 ? *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCuLL) : *v6 & 1;
      if ( i >= v8 )
        break;
      v12 = (struct CWindowNode *)CPtrArrayBase::operator[](v6, i);
      if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 32LL) )
      {
        v11 = CDxAccumulationContext::ProcessGdiUpdate(v12, a2);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x128u);
          return v3;
        }
      }
      v6 = (__int64 *)((char *)a1 + 72);
    }
  }
  return v3;
}
