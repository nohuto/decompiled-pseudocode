/*
 * XREFs of Crashdump_CommonBufferAcquire @ 0x1C0031D3C
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0032DE0 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C0033E9C (Crashdump_EventRing_InitializeForDump.c)
 *     Crashdump_Endpoint_Initialize @ 0x1C0034A18 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1C0035EF4 (Crashdump_UsbDevice_Initialize.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall Crashdump_CommonBufferAcquire(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  int v7; // ecx
  unsigned int v8; // eax
  __int64 *v9; // rax
  __int64 **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v4 = (a2 + 63) & 0xFFFFFFC0;
  if ( v4 <= 0x1000 )
  {
    v6 = 0;
    if ( !*(_DWORD *)(a1 + 516) || ((v7 = *(_DWORD *)(a1 + 520) & 0xFFF) != 0 ? (v8 = 4096 - v7) : (v8 = 0), v4 > v8) )
    {
      v9 = CommonBuffer_AcquireBuffer(*(KSPIN_LOCK **)(a1 + 488), 0x1000u, a1, 0x31706D44u);
      if ( !v9 )
        return (unsigned int)-1073741670;
      v10 = (__int64 **)(a1 + 496);
      v11 = *(_QWORD *)(a1 + 496);
      if ( *(_QWORD *)(v11 + 8) != a1 + 496 )
        __fastfail(3u);
      *v9 = v11;
      v9[1] = (__int64)v10;
      *(_QWORD *)(v11 + 8) = v9;
      *v10 = v9;
      ++*(_DWORD *)(a1 + 512);
      *(_DWORD *)(a1 + 520) = 0;
    }
    v12 = *(_QWORD *)(a1 + 496);
    *(_DWORD *)(a3 + 16) = v4;
    v13 = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(a3 + 8) = v13;
    *(_QWORD *)(a3 + 8) = v13 + *(unsigned int *)(a1 + 520);
    v14 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)a3 = v14;
    *(_QWORD *)a3 = v14 + *(unsigned int *)(a1 + 520);
    *(_DWORD *)(a1 + 516) += v4;
    *(_DWORD *)(a1 + 520) += v4;
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: CommonBuffer: %4u (0x%04X) bytes acquired, virtual: 0x%p, logical: 0x%I64X\n",
      v4,
      v4,
      *(const void **)(a3 + 8),
      *(_QWORD *)a3);
    return v6;
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_CommonBufferAcquire: Required Size: %4u\n", v4);
  return (unsigned int)-1073741670;
}
