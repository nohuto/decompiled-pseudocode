/*
 * XREFs of ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00B3E94
 * Callers:
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DF010 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 *     ?NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DF540 (-NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMET.c)
 * Callees:
 *     ??0NDIS_PD_QUEUE_AWM_STATE@@QEAA@XZ @ 0x1C00B3E74 (--0NDIS_PD_QUEUE_AWM_STATE@@QEAA@XZ.c)
 */

NDIS_PD_QUEUE_TRACKER *__fastcall NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(NDIS_PD_QUEUE_TRACKER *this)
{
  NDIS_PD_QUEUE_TRACKER *result; // rax

  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  NDIS_PD_QUEUE_AWM_STATE::NDIS_PD_QUEUE_AWM_STATE((NDIS_PD_QUEUE_TRACKER *)((char *)this + 64));
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return result;
}
