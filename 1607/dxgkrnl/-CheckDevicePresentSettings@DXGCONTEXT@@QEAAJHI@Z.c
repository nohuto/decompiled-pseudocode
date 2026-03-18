/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01861BC
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0187350 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188084 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188EE4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C0143CC0 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
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
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax

  v4 = a3;
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
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
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 304LL) == 1 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
    v11 = -1071775738LL;
LABEL_7:
    v14[3] = v11;
    v14[4] = this;
    v14[5] = v4;
    WdLogEvent5_WdEvent(v14);
    return (unsigned int)v11;
  }
  if ( !a2 )
  {
LABEL_10:
    v16 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v16 + 304) == 1 && (*(_DWORD *)(v16 + 4 * v4 + 1000) & 0x100) == 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
      v11 = -1071775739LL;
      goto LABEL_7;
    }
    return 0LL;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
    v15[3] = 0LL;
    v15[4] = this;
    v15[5] = v4;
    WdLogEvent5_WdEvent(v15);
    return 3223192376LL;
  }
}
