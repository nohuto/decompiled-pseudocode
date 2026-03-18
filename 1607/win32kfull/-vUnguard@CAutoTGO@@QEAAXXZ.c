/*
 * XREFs of ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C012D2B0
 * Callers:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C01BF4D0 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vUnguard(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
