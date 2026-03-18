/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C0015754
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C001BDC0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 */

NTSTATUS __fastcall VidSchiCheckYieldExitCondition(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  NTSTATUS result; // eax
  int v8; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 2024) && (v5 = *(_QWORD *)(a1 + 2008)) != 0 && (v6 = *(_QWORD *)(a1 + 2016) + v5, a2 > v6) )
  {
    *(_QWORD *)(a1 + 2008) = 0LL;
    *(_BYTE *)(a1 + 2024) = 0;
    result = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      v8 = *(unsigned __int16 *)(a1 + 4);
      result = Template_pq(v6, &EventYieldStopNode, 0LL, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), v8);
    }
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
