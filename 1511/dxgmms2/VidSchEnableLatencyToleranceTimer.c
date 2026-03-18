/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x1C00154D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     TemplateEventDescriptor @ 0x1C00221BC (TemplateEventDescriptor.c)
 */

void __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2)
{
  LARGE_INTEGER v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  ULONGLONG v6; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 2552) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      TemplateEventDescriptor(a1, &Dxgk_LatencyToleranceTimerEnable);
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( RtlULongLongMult(v3.QuadPart, 0x989680uLL, &pullResult) >= 0 )
      v6 = pullResult / v4;
    else
      v6 = 10000000 * (v5 / v4) + 10000000 * (v5 % v4) / v4;
    *(_QWORD *)(a1 + 2536) = v6 + *(_QWORD *)(a1 + 2544);
    *(_QWORD *)(a1 + 1504) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1472), 0, 0);
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    TemplateEventDescriptor(a1, &Dxgk_LatencyToleranceTimerDisable);
  }
}
