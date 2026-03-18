/*
 * XREFs of EtwpSystemImageEnumCallback @ 0x14051C6D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwpSystemImageEnumCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int v4; // edx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 8);
  **(_QWORD **)a2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(*(_QWORD *)a2 + 20LL) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(*(_QWORD *)a2 + 24LL) = *(_DWORD *)(a1 + 156);
  *(_BYTE *)(*(_QWORD *)a2 + 28LL) = *(_BYTE *)(a1 + 110) & 0xF;
  *(_BYTE *)(*(_QWORD *)a2 + 29LL) = (*(_BYTE *)(a1 + 110) >> 4) & 7;
  v4 = *(unsigned __int16 *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v2 + 28) = 0;
  *(_QWORD *)(v2 + 16) = v5;
  *(_DWORD *)(v2 + 24) = v4;
  EtwpLogKernelEvent(v2, *(_DWORD *)(a2 + 16), 3u, *(_WORD *)(a2 + 20), 4200707);
  return 0LL;
}
