/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x1C001C490
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C001BEB8 (TemplateEventDescriptor.c)
 */

NTSTATUS __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2)
{
  NTSTATUS result; // eax

  *(_BYTE *)(a1 + 2600) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        TemplateEventDescriptor(a1, &Dxgk_LatencyToleranceTimerEnable);
    }
    *(_QWORD *)(a1 + 2576) = *(_QWORD *)(a1 + 2584) + MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(a1 + 1496) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1464), 0, 0);
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    return TemplateEventDescriptor(a1, &Dxgk_LatencyToleranceTimerDisable);
  }
  return result;
}
