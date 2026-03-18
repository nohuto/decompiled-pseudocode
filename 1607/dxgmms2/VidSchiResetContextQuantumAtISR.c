/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C00107C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_piiqq @ 0x1C0022804 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiResetContextQuantumAtISR(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // r9

  v3 = 0;
  if ( *(_BYTE *)(a1 + 640) || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 2136LL) & 4) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 480);
    *(_BYTE *)(a1 + 640) = 0;
LABEL_3:
    *(_QWORD *)(a1 + 456) = v4;
    v3 = 1;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 3, 2);
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 456) += v6;
  a3 = *(_QWORD *)(a1 + 456);
  if ( a3 > 0 )
  {
    v4 = *(_QWORD *)(a1 + 456);
    if ( a3 > v6 )
      v4 = v6;
    goto LABEL_3;
  }
LABEL_4:
  if ( bTracingEnabled )
  {
    v7 = *(_QWORD *)(a1 + 56);
    if ( !v7 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v7) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piiqq(
        a1,
        *(_QWORD *)(a1 + 464),
        a3,
        v7,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_DWORD *)(a1 + 448),
        1);
  }
  return v3;
}
