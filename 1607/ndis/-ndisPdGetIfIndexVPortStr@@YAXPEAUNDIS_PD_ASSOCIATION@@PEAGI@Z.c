/*
 * XREFs of ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z @ 0x1C0070E68
 * Callers:
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C00E0AE4 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00E0C78 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001AF60 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall ndisPdGetIfIndexVPortStr(struct NDIS_PD_ASSOCIATION *a1, unsigned __int16 *a2)
{
  __int64 v2; // r9
  int v3; // [rsp+20h] [rbp-18h]

  v2 = *(unsigned int *)(*((_QWORD *)a1 + 7) + 4112LL);
  if ( *((_DWORD *)a1 + 18) == -1 )
  {
    RtlStringCbPrintfW(a2, 0x80uLL, L"IfIndex %u", v2);
  }
  else
  {
    v3 = *((_DWORD *)a1 + 18);
    RtlStringCbPrintfW(a2, 0x80uLL, L"IfIndex %u: VPort %u", v2, v3);
  }
}
