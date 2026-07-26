/*
 * XREFs of ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00DDF58
 * Callers:
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00DE1D0 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00DE530 (-NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAP.c)
 *     ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00DEC80 (-NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z.c)
 *     ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00DED80 (-NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
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
