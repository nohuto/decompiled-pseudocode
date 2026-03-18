/*
 * XREFs of ScrubDelegatedWindow @ 0x1C0074C00
 * Callers:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0074B80 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C0074BE0 (CleanupInputDelegation.c)
 * Callees:
 *     IsClearDelegationCaptureSupported_0 @ 0x1C0001DA0 (IsClearDelegationCaptureSupported_0.c)
 *     ClearDelegationCapture_0 @ 0x1C0001DA8 (ClearDelegationCapture_0.c)
 */

__int64 __fastcall ScrubDelegatedWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 312);
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_DWORD *)(a1 + 320) = 0;
  --*(_DWORD *)(v1 + 1104);
  --*(_DWORD *)(v2 + 1104);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 96LL) == a1
    && (int)IsClearDelegationCaptureSupported_0() >= 0 )
  {
    ClearDelegationCapture_0();
  }
  if ( *(_DWORD *)(v2 + 1104) )
    return 0LL;
  *(_DWORD *)(v2 + 1072) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v2 + 1088) = 0LL;
  *(_QWORD *)(v2 + 1096) = 0LL;
  *(_DWORD *)(v2 + 440) &= 0xFFFFFF3F;
  return result;
}
