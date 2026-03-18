/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x14013B758
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r10
  char Priority; // cl
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 216LL);
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 5792), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 5800) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 5808) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 5806) = Priority;
  *(_BYTE *)(v7 + v6 + 5807) = a3;
  *(_QWORD *)(v7 + v6 + 5816) = *a2;
  *(_WORD *)(v7 + v6 + 5804) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 5824) = *(_QWORD *)(v6 + 5504);
  *(_QWORD *)(v7 + v6 + 5832) = *(_QWORD *)(v6 + 5632);
  *(_QWORD *)(v7 + v6 + 5840) = *(_QWORD *)(v6 + 5744);
  *(_QWORD *)(v7 + v6 + 5848) = *(_QWORD *)(v6 + 5696);
  result = *(_QWORD *)(v6 + 2048);
  *(_QWORD *)(v7 + v6 + 5856) = result;
  *(_OWORD *)(v7 + v6 + 5864) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 5880) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 5896) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 5912) = *(_QWORD *)(a1 + 256);
  return result;
}
