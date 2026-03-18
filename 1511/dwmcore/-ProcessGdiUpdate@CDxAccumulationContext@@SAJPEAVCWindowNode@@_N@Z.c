/*
 * XREFs of ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C
 * Callers:
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18005E02C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180063E6C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x1800F6C5C (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::ProcessGdiUpdate(struct CWindowNode *a1, bool a2)
{
  unsigned int v3; // edi
  CDxAccumulationContext *v4; // rcx
  _QWORD *v6; // rcx
  unsigned int i; // esi
  unsigned __int64 v8; // rax
  int v10; // eax
  int updated; // eax
  struct CWindowNode *v12; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = (CDxAccumulationContext *)*((_QWORD *)a1 + 150);
  if ( v4 && (updated = CDxAccumulationContext::UpdateDxClipShape(v4, a2), v3 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x115u);
  }
  else
  {
    v6 = (_QWORD *)((char *)a1 + 56);
    for ( i = 0; ; ++i )
    {
      v8 = (*v6 & 2) != 0 ? *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCuLL) : *v6 & 1LL;
      if ( i >= v8 )
        break;
      v12 = (struct CWindowNode *)CPtrArrayBase::operator[](v6, i);
      if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 33LL) )
      {
        v10 = CDxAccumulationContext::ProcessGdiUpdate(v12, a2);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x128u);
          return v3;
        }
      }
      v6 = (_QWORD *)((char *)a1 + 56);
    }
  }
  return v3;
}
