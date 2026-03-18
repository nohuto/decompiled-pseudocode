/*
 * XREFs of ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C02653E8
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C0265304 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vUnguard(CAutoTGO *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this, a2, a3, a4);
    *((_DWORD *)this + 8) = 0;
  }
}
