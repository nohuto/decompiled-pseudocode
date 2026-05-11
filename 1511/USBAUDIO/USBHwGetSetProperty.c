/*
 * XREFs of USBHwGetSetProperty @ 0x1C001B4E8
 * Callers:
 *     USBHwGetSetByte @ 0x1C001B630 (USBHwGetSetByte.c)
 *     USBHwGetSetShort @ 0x1C001B6F0 (USBHwGetSetShort.c)
 *     USBHwGetSetMemory @ 0x1C001B7A8 (USBHwGetSetMemory.c)
 *     USBCntrlGetSetGEQ @ 0x1C001F390 (USBCntrlGetSetGEQ.c)
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C001F530 (USBCntrlGetSetProcessingUnitValue.c)
 *     USBCntrlMuxSource @ 0x1C001F5E0 (USBCntrlMuxSource.c)
 *     USBCntrlGetSetMixerLevels @ 0x1C001F690 (USBCntrlGetSetMixerLevels.c)
 *     USBType1SetSampleRate @ 0x1C001FDE0 (USBType1SetSampleRate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001B3B4 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwGetSetProperty(
        __int64 a1,
        __int16 a2,
        int a3,
        char a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        __int16 a8,
        __int64 a9,
        int a10)
{
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rbx
  PSLIST_ENTRY v17; // rdi
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // eax

  v14 = -1073741670;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  ++*(_DWORD *)(v15 + 84);
  v16 = v15 + 64;
  v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
  if ( v17
    || (v18 = *(unsigned int *)(v16 + 44),
        v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 48),
        v20 = *(unsigned int *)(v16 + 40),
        v21 = *(unsigned int *)(v16 + 36),
        ++*(_DWORD *)(v16 + 24),
        (v17 = (PSLIST_ENTRY)v19(v21, v18, v20)) != 0LL) )
  {
    v17[3].Next = 0LL;
    *((_QWORD *)&v17[3].Next + 1) = 0LL;
    LOWORD(v17->Next) = 136;
    HIDWORD(v17[2].Next) = a10;
    *((_QWORD *)&v17[2].Next + 1) = a9;
    WORD1(v17[8].Next) = a6 | (a5 << 8);
    WORD2(v17[8].Next) = a8 | (a7 << 8);
    WORD1(v17->Next) = a2;
    LOBYTE(v17[8].Next) = 0;
    BYTE1(v17[8].Next) = a4;
    LODWORD(v17[2].Next) = a3;
    v22 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), (ULONG_PTR)v17);
    ++*(_DWORD *)(v16 + 28);
    v14 = v22;
    if ( ExQueryDepthSList((PSLIST_HEADER)v16) < *(_WORD *)(v16 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v16, v17);
    }
    else
    {
      ++*(_DWORD *)(v16 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY))(v16 + 56))(v17);
    }
  }
  return v14;
}
