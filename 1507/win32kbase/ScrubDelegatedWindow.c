/*
 * XREFs of ScrubDelegatedWindow @ 0x1C0012720
 * Callers:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0012694 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C0012700 (CleanupInputDelegation.c)
 * Callees:
 *     IsClearDelegationCaptureSupported_0 @ 0x1C0001D80 (IsClearDelegationCaptureSupported_0.c)
 *     ClearDelegationCapture_0 @ 0x1C0001D88 (ClearDelegationCapture_0.c)
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
  --*(_DWORD *)(v1 + 1112);
  --*(_DWORD *)(v2 + 1112);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL) + 96LL) == a1
    && (int)IsClearDelegationCaptureSupported_0() >= 0 )
  {
    ClearDelegationCapture_0();
  }
  if ( *(_DWORD *)(v2 + 1112) )
    return 0LL;
  *(_DWORD *)(v2 + 1080) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v2 + 1096) = 0LL;
  *(_QWORD *)(v2 + 1104) = 0LL;
  *(_DWORD *)(v2 + 448) &= 0xFFFFFF3F;
  return result;
}
