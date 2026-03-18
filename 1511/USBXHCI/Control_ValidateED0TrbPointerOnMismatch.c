/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x1C0029A9C
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C00294E8 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDx @ 0x1C002A694 (WPP_RECORDER_SF_DDx.c)
 */

void __fastcall Control_ValidateED0TrbPointerOnMismatch(__int64 *a1, signed __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rdx
  signed __int64 v5; // rcx
  int v6; // r8d

  v2 = a1[21];
  v4 = *a2;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v4 < v5 || v4 >= v5 + *(unsigned int *)(v2 + 40) )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v4, *(unsigned __int8 *)(a1[6] + 135), 14);
    v6 = 4127;
  }
  else
  {
    if ( (*(_QWORD *)(a1[5] + 232) & 0x4000000000LL) != 0 )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v4, *(unsigned __int8 *)(a1[6] + 135), 12);
      return;
    }
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v4, *(unsigned __int8 *)(a1[6] + 135), 13);
    v6 = 4128;
  }
  Controller_ReportFatalError(a1[5], 2, v6, a1[6], a1[7], (__int64)a1);
}
