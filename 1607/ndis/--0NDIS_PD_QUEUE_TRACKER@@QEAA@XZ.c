/*
 * XREFs of ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00B34B4
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DE710 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DEDB0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     <none>
 */

NDIS_PD_QUEUE_TRACKER *__fastcall NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(NDIS_PD_QUEUE_TRACKER *this)
{
  NDIS_PD_QUEUE_TRACKER *result; // rax

  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 21) = -1;
  *((_DWORD *)this + 16) = 0;
  *((_WORD *)this + 34) = 0;
  *((_BYTE *)this + 70) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  result = this;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  return result;
}
