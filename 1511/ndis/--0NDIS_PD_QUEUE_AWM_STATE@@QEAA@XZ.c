/*
 * XREFs of ??0NDIS_PD_QUEUE_AWM_STATE@@QEAA@XZ @ 0x1C00AE444
 * Callers:
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00AE464 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

NDIS_PD_QUEUE_AWM_STATE *__fastcall NDIS_PD_QUEUE_AWM_STATE::NDIS_PD_QUEUE_AWM_STATE(NDIS_PD_QUEUE_AWM_STATE *this)
{
  *((_DWORD *)this + 5) = -1;
  *(_DWORD *)this = 0;
  *((_WORD *)this + 2) = 0;
  *((_BYTE *)this + 6) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}
