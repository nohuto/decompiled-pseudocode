/*
 * XREFs of ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x18006BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CMeterSoftware::ProviderFinalRelease(CMeterSoftware *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  Microsoft::WRL::WeakRef::~WeakRef((CMeterSoftware *)((char *)this + 40));
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
