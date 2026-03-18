/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C0006D5C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C00070C0 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C00072C8 (NVMeControllerReset.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C0005094 (AdminQueueInitialize.c)
 *     ControllerEnable @ 0x1C00052D0 (ControllerEnable.c)
 *     GetProcessorInformation @ 0x1C00057E8 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C000CB24 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 24) = 7;
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 36LL) = (*(_WORD *)(a1 + 228) - 1) & 0xFFF | (((*(_WORD *)(a1 + 228) - 1) & 0xFFF) << 16);
  _InterlockedOr(v9, 0);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD *)(a1 + 384);
  *(_DWORD *)(v5 + 48) = v6;
  _InterlockedOr(v9, 0);
  *(_DWORD *)(v5 + 52) = HIDWORD(v6);
  _InterlockedOr(v9, 0);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(v7 + 40) = v8;
  _InterlockedOr(v9, 0);
  *(_DWORD *)(v7 + 44) = HIDWORD(v8);
  _InterlockedOr(v9, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) = 4587520;
  _InterlockedOr(v9, 0);
  StorPortStallExecution(5000LL);
  if ( !ControllerEnable(a1) )
  {
    *(_DWORD *)(a1 + 24) = 8;
    return 0;
  }
  if ( a2 || (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) &= ~0x20u;
    NVMeControllerIdentify(a1);
    if ( a2 )
      NVMeNameSpaceIdentify(a1);
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 160) = 65537;
  }
  else if ( !GetProcessorInformation(a1) )
  {
    *(_DWORD *)(a1 + 24) = 10;
    return 0;
  }
  return 1;
}
