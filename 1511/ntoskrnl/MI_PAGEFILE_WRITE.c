/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x140109AB4
 * Callers:
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
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
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 6176), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 6184) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 6192) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 6190) = Priority;
  *(_BYTE *)(v7 + v6 + 6191) = a3;
  *(_QWORD *)(v7 + v6 + 6200) = *a2;
  *(_WORD *)(v7 + v6 + 6188) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 6208) = *(_QWORD *)(v6 + 5888);
  *(_QWORD *)(v7 + v6 + 6216) = *(_QWORD *)(v6 + 6016);
  *(_QWORD *)(v7 + v6 + 6224) = *(_QWORD *)(v6 + 6128);
  *(_QWORD *)(v7 + v6 + 6232) = *(_QWORD *)(v6 + 6080);
  result = *(_QWORD *)(v6 + 2176);
  *(_QWORD *)(v7 + v6 + 6240) = result;
  *(_OWORD *)(v7 + v6 + 6248) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 6264) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 6280) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 6296) = *(_QWORD *)(a1 + 256);
  return result;
}
