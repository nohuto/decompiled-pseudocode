/*
 * XREFs of ?Lock@CMutex@@QEAAXXZ @ 0x1C0067BC0
 * Callers:
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMutex::Lock(PVOID *this)
{
  KeWaitForSingleObject(*this, Executive, 0, 0, 0LL);
}
