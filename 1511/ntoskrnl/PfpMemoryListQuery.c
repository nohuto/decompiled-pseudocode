/*
 * XREFs of PfpMemoryListQuery @ 0x1400EECF4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400FCAC0 (MmQueryMemoryListInformation.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  _QWORD v9[22]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+F0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v7 = -1073741789;
    *a3 = 64;
  }
  else
  {
    MmQueryMemoryListInformation(v9, 176LL, a3, &v10);
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v6 = 1;
    *(_DWORD *)(v6 + 4) = 64;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)(v6 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v6 + 24) = v9[8] + v9[7] + v9[6] + v9[5] + v9[9];
    *(_QWORD *)(v6 + 32) = v9[10];
    *(_QWORD *)(v6 + 40) = v9[12] + v9[11];
    *(_QWORD *)(v6 + 48) = v9[0] + v9[1];
    *(_QWORD *)(v6 + 56) = v9[3] + v9[2];
    *a3 = 64;
  }
  return v7;
}
