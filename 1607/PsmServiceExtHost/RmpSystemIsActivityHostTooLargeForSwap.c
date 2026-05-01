/*
 * XREFs of RmpSystemIsActivityHostTooLargeForSwap @ 0x180019FBC
 * Callers:
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemIsActivityHostTooLargeForSwap(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v6; // edi
  BOOL inited; // eax
  int v8; // r8d
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v6 = 61440;
  inited = InitOnceExecuteOnce(&DiskRateInitOnce, (PINIT_ONCE_FN)MemUtilQueryDiskRate, &DiskRateContext, 0LL);
  v8 = 0;
  if ( inited )
    v6 = dword_18004C6C4;
  LOBYTE(v8) = (unsigned int)(1000 * (v3 >> 10) / v6) > a2;
  result = 0LL;
  *a3 = v8;
  return result;
}
