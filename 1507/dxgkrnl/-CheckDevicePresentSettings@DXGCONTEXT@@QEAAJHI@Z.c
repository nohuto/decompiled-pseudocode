/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C015C1E0
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C011E4B0 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax

  v4 = a3;
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
          *((const struct DXGDEVICE **)this + 2),
          a3) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    LODWORD(v11) = -1071775744;
    v10[3] = -1071775744LL;
    v10[4] = this;
    v10[5] = v4;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)v11;
  }
  if ( DXGDEVICE::IsVSyncAvailable(*((DXGDEVICE **)this + 2), v4) )
    goto LABEL_10;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 1 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    v11 = -1071775738LL;
LABEL_7:
    v17[3] = v11;
    v17[4] = this;
    v17[5] = v4;
    WdLogEvent5_WdEvent(v17);
    return (unsigned int)v11;
  }
  if ( !a2 )
  {
LABEL_10:
    v19 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v19 + 280) == 1 && (*(_DWORD *)(v19 + 4 * v4 + 4752) & 0x20) == 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
      v11 = -1071775739LL;
      goto LABEL_7;
    }
    return 0LL;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    v18[3] = 0LL;
    v18[4] = this;
    v18[5] = v4;
    WdLogEvent5_WdEvent(v18);
    return 3223192376LL;
  }
}
