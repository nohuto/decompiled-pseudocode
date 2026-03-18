/*
 * XREFs of ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0
 * Callers:
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180025BAC (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180029B84 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180029C9C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x180108E98 (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800BAACC (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxAccumulationContext::ProcessGdiUpdate(struct CWindowNode *a1, bool a2)
{
  unsigned int v3; // ebx
  CDxAccumulationContext *v4; // rcx
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v10; // eax
  int updated; // eax
  struct CWindowNode *v12; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v4 = (CDxAccumulationContext *)*((_QWORD *)a1 + 126);
  if ( v4 && (updated = CDxAccumulationContext::UpdateDxClipShape(v4, a2), v3 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x112u);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v7 = *((_QWORD *)a1 + 17);
      v8 = (v7 & 2) != 0 ? *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)a1 + 17) & 1LL;
      if ( i >= v8 )
        break;
      v12 = (struct CWindowNode *)CPtrArrayBase::operator[]((__int64 *)a1 + 17, i);
      if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 34LL) )
      {
        v10 = CDxAccumulationContext::ProcessGdiUpdate(v12, a2);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x125u);
          return v3;
        }
      }
    }
  }
  return v3;
}
