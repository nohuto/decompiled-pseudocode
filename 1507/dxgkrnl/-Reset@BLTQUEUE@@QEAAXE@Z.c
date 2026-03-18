/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C015A7D4
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01283F4 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z @ 0x1C015A7A8 (-ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00AD90C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  if ( *((_QWORD *)this + 37) )
  {
    *((_BYTE *)this + 257) = 1;
    BLTQUEUE::IssueCommand(this);
    *((_QWORD *)this + 13) = 0LL;
    if ( !a2 )
      *((_DWORD *)this + 163) = 0;
  }
}
