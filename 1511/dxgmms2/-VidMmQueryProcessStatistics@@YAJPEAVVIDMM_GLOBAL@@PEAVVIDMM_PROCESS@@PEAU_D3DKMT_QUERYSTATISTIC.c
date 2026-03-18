/*
 * XREFs of ?VidMmQueryProcessStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C001C560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmQueryProcessStatistics(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a3)
{
  *((_QWORD *)a3 + 1) = *((_QWORD *)a2 + 8);
  *((_QWORD *)a3 + 2) = *((_QWORD *)a2 + 9);
  *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 20);
  *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 21);
  *((_QWORD *)a3 + 4) = *((_QWORD *)a2 + 11);
  *((_QWORD *)a3 + 5) = *((_QWORD *)a2 + 12);
  *((_QWORD *)a3 + 6) = *((_QWORD *)a2 + 13);
  *((_QWORD *)a3 + 7) = *((_QWORD *)a2 + 14);
  *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 15);
  *((_QWORD *)a3 + 9) = *((_QWORD *)a2 + 16);
  return 0LL;
}
