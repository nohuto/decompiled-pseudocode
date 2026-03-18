/*
 * XREFs of ?Lock@CMutex@@QEAAXXZ @ 0x1C0052FB0
 * Callers:
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMutex::Lock(PVOID *this)
{
  KeWaitForSingleObject(*this, Executive, 0, 0, 0LL);
}
