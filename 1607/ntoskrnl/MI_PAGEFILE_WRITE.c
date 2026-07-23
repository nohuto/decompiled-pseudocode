/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x140117344
 * Callers:
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r10
  char Priority; // cl
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 256LL);
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 7392), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 7400) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 7408) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 7406) = Priority;
  *(_BYTE *)(v7 + v6 + 7407) = a3;
  *(_QWORD *)(v7 + v6 + 7416) = *a2;
  *(_WORD *)(v7 + v6 + 7404) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 7424) = *(_QWORD *)(v6 + 6464);
  *(_QWORD *)(v7 + v6 + 7432) = *(_QWORD *)(v6 + 7232);
  *(_QWORD *)(v7 + v6 + 7440) = *(_QWORD *)(v6 + 7344);
  *(_QWORD *)(v7 + v6 + 7448) = *(_QWORD *)(v6 + 7296);
  result = *(_QWORD *)(v6 + 2304);
  *(_QWORD *)(v7 + v6 + 7456) = result;
  *(_OWORD *)(v7 + v6 + 7464) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 7480) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 7496) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 7512) = *(_QWORD *)(a1 + 256);
  return result;
}
