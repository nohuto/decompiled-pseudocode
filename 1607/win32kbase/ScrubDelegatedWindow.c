/*
 * XREFs of ScrubDelegatedWindow @ 0x1C00793B0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0079330 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C0079390 (CleanupInputDelegation.c)
 * Callees:
 *     IsClearDelegationCaptureSupported_0 @ 0x1C0002088 (IsClearDelegationCaptureSupported_0.c)
 *     ClearDelegationCapture_0 @ 0x1C0002090 (ClearDelegationCapture_0.c)
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
  --*(_DWORD *)(v1 + 1128);
  --*(_DWORD *)(v2 + 1128);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 104LL) == a1
    && (int)IsClearDelegationCaptureSupported_0() >= 0 )
  {
    ClearDelegationCapture_0();
  }
  if ( *(_DWORD *)(v2 + 1128) )
    return 0LL;
  *(_DWORD *)(v2 + 1096) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v2 + 1112) = 0LL;
  *(_QWORD *)(v2 + 1120) = 0LL;
  *(_DWORD *)(v2 + 440) &= 0xFFFFFF3F;
  return result;
}
