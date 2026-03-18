/*
 * XREFs of ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C017496C
 * Callers:
 *     DxgkGetScanLine @ 0x1C00DD610 (DxgkGetScanLine.c)
 * Callees:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEC04 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C0183708 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::GetScanLine(struct _KTHREAD **this, struct _DXGKARG_GETSCANLINE *a2)
{
  __int64 result; // rax

  result = REMOTE_VSYNC::EnsureEmulationRunning(this);
  if ( (int)result >= 0 )
  {
    BLTQUEUE::GetScanLineEmulation(*this, &a2->ScanLine, &a2->InVerticalBlank);
    return 0LL;
  }
  return result;
}
