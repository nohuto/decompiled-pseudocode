/*
 * XREFs of HvlpCommitLpIndices @ 0x1401BB2F4
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x140231E94 (HvcallInitiateHypercall.c)
 */

__int64 HvlpCommitLpIndices()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  PHYSICAL_ADDRESS v2; // rdx
  PHYSICAL_ADDRESS v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v1 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, 0LL, 8LL);
  v2 = v4[3];
  v1[1] = HvlpActiveProcessorCount;
  *v1 = 5;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
                           135LL,
                           (PHYSICAL_ADDRESS)v2.QuadPart,
                           0LL) )
    v0 = -1073741823;
  HvlpReleaseHypercallPage(v4);
  return v0;
}
