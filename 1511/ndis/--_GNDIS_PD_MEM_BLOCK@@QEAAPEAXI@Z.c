/*
 * XREFs of ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00D7880
 * Callers:
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00D7B10 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00D7E70 (-NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAP.c)
 *     ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00D86B0 (-NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z.c)
 *     ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00D87B0 (-NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[8];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    P[8] = 0LL;
  }
  if ( P[6] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(P[3] + 96LL))(
      *(_QWORD *)(P[3] + 32LL),
      *((unsigned int *)P + 8),
      P[5]);
    P[6] = 0LL;
  }
  P[3] = 0LL;
  ExFreePoolWithTag(P, 0x6D41444Eu);
  return P;
}
