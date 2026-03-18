/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C000DFF0
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C0006FD8 (NVMeControllerPowerDown.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000753C (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0007664 (NVMeInitHostMemoryBuffer.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  int v6; // edi
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8

  v6 = a3;
  v8 = a2;
  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v10 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v10;
  *(_DWORD *)(a1 + 560) = 1;
  *(_BYTE *)(v10 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 568);
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 4140LL) ^ v8) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 4140LL) ^ (2 * v6)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4144LL) = a4
                                              / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1168), Src, (unsigned int)Size);
  v11 = HIDWORD(*(_QWORD *)(a1 + 1176));
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4148LL) = *(_DWORD *)(a1 + 1176) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4152LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v12) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v12, 10000LL);
  return *(_BYTE *)(a1 + 571) != 1 ? 0xC1000001 : 0;
}
