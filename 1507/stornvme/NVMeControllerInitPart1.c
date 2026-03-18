/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C000427C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0004E88 (NVMeControllerReset.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C00025D8 (AdminQueueInitialize.c)
 *     GetProcessorInformation @ 0x1C00032B0 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C000AFA0 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000B104 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned int i; // esi
  int v15; // eax
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 24) = 7;
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 36LL) = (*(_WORD *)(a1 + 220) - 1) & 0xFFF | (((*(_WORD *)(a1 + 220) - 1) & 0xFFF) << 16);
  _InterlockedOr(v16, 0);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(v5 + 48) = v6;
  _InterlockedOr(v16, 0);
  *(_DWORD *)(v5 + 52) = HIDWORD(v6);
  _InterlockedOr(v16, 0);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 240);
  *(_DWORD *)(v7 + 40) = v8;
  _InterlockedOr(v16, 0);
  *(_DWORD *)(v7 + 44) = HIDWORD(v8);
  _InterlockedOr(v16, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 20LL) = 4587520;
  _InterlockedOr(v16, 0);
  StorPortStallExecution(5000LL);
  LODWORD(v11) = (3435973837u * (unsigned __int64)*(unsigned int *)(a1 + 132)) >> 32;
  v12 = *(_DWORD *)(a1 + 132) / 0xAu;
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 20LL) |= 1u;
  _InterlockedOr(v16, 0);
  v13 = *(_QWORD *)(a1 + 104);
  for ( i = 0; ; ++i )
  {
    v15 = *(_DWORD *)(v13 + 28);
    if ( (v15 & 1) != 0 || i >= v12 )
      break;
    StorPortStallExecution(10000LL);
    v13 = *(_QWORD *)(a1 + 104);
  }
  if ( (v15 & 1) == 0 )
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
    *(_DWORD *)(a1 + 152) = 65537;
  }
  else if ( !GetProcessorInformation(a1, v11, v9, v10) )
  {
    *(_DWORD *)(a1 + 24) = 10;
    return 0;
  }
  return 1;
}
