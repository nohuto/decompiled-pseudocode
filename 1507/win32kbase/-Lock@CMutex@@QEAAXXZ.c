/*
 * XREFs of ?Lock@CMutex@@QEAAXXZ @ 0x1C000F0D0
 * Callers:
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMutex::Lock(PVOID *this)
{
  KeWaitForSingleObject(*this, Executive, 0, 0, 0LL);
}
