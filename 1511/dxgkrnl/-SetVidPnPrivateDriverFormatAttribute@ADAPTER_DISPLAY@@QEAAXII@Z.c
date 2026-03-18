/*
 * XREFs of ?SetVidPnPrivateDriverFormatAttribute@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001DA88
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SetVidPnPrivateDriverFormatAttribute(ADAPTER_DISPLAY *this, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 26) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3892LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *(_DWORD *)(1016 * v4 + *((_QWORD *)this + 17) + 952) = a3;
}
