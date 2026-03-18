/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C000CE34
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeGetCommandEffectsLog(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  _QWORD *v6; // rsi
  void *v7; // rcx
  __int64 PhysicalAddress; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1080);
  v4 = *(_QWORD *)(a1 + 656);
  v13 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    LOBYTE(v2) = *(_BYTE *)(v2 + 261);
    if ( (v2 & 2) != 0 )
    {
      v6 = (_QWORD *)(a1 + 3224);
      v7 = *(void **)(a1 + 3224);
      if ( v7 || (LOBYTE(v2) = NVMeAllocateDmaBuffer(a1, 0x1000u), (v7 = (void *)*v6) != 0LL) )
      {
        memset(v7, 0, 0x1000uLL);
        PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, *v6, &v13);
        v9 = *(void **)(a1 + 656);
        *(_BYTE *)(a1 + 571) = 0;
        v10 = PhysicalAddress;
        memset(v9, 0, 0x1098uLL);
        *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
        *(_DWORD *)(a1 + 560) = 1;
        *(_BYTE *)(v4 + 4245) |= 3u;
        *(_WORD *)(v4 + 4236) = 0;
        BuildGetLogPageCommand(v4 + 4096, 5u, 0x1000u, v10, -1);
        *(_BYTE *)(v4 + 4245) |= 4u;
        *(_QWORD *)(v4 + 4200) = *v6;
        *(_DWORD *)(v4 + 4232) = 4096;
        ProcessCommand(a1, a1 + 568);
        LOBYTE(v11) = a2;
        LOBYTE(v2) = WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v11, 10000LL);
      }
    }
  }
  return v2;
}
