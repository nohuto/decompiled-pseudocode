/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0088A5C
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
}
