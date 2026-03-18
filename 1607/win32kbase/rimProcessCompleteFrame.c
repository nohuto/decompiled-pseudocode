/*
 * XREFs of rimProcessCompleteFrame @ 0x1C00D8460
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1C00D8524 (rimQueueCompleteFrame.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  int v5; // eax
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 760)
    && (v5 = *(_DWORD *)(a2 + 184), (v5 & 0x800) != 0)
    && (v5 & 0x8000) != 0
    && (v5 & 0x80000) == 0 )
  {
    rimQueueCompleteFrame(a1);
    result = *(_DWORD *)(a2 + 184);
    if ( (result & 0x20000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x20000;
      return ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    }
  }
  else if ( *(_BYTE *)(a1 + 712) )
  {
    *(_BYTE *)(a1 + 712) = 0;
    return rimDispatchCompleteFrame(a1, a2, a3);
  }
  else
  {
    return rimQueueCompleteFrame(a1);
  }
  return result;
}
