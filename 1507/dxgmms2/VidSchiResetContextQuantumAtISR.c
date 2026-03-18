/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0019690
 * Callers:
 *     <none>
 * Callees:
 *     Template_piiqq @ 0x1C0013D70 (Template_piiqq.c)
 */

char __fastcall VidSchiResetContextQuantumAtISR(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9

  v3 = 0;
  if ( *(_BYTE *)(a1 + 640) || (a2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL), (*(_DWORD *)(a2 + 2144) & 4) == 0) )
  {
    *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 480);
    *(_BYTE *)(a1 + 640) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(a1 + 456) += v4;
    a2 = *(_QWORD *)(a1 + 456);
    if ( a2 <= 0 )
      goto LABEL_9;
    v5 = *(_QWORD *)(a1 + 456);
    if ( a2 > v4 )
      v5 = v4;
    *(_QWORD *)(a1 + 456) = v5;
  }
  v3 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 3, 2);
LABEL_9:
  if ( bTracingEnabled )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( !v6 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      v6 = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_piiqq(
        *(_QWORD *)(a1 + 464),
        a2,
        a1,
        v6,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_DWORD *)(a1 + 448),
        1);
  }
  return v3;
}
