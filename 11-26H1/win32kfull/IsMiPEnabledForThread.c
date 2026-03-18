/*
 * XREFs of IsMiPEnabledForThread @ 0x140054BF8
 * Callers:
 *     NtUserAutoPromoteMouseInPointer @ 0x140054AD0 (NtUserAutoPromoteMouseInPointer.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x140054B50 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 *     NtUserPromoteMouseInPointer @ 0x1402B9370 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 456) + 808LL) & 4) != 0 || (*(_DWORD *)(a1 + 1360) & 0x6000000) != 0;
}
