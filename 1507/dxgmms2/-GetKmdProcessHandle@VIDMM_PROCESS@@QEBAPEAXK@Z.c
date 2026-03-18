/*
 * XREFs of ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C0044E2C
 * Callers:
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C0010608 (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_PROCESS::GetKmdProcessHandle(VIDMM_PROCESS *this, unsigned int a2)
{
  return *(void **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 48LL) + 8LL * a2) + 16LL);
}
