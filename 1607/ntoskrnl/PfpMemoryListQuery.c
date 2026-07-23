/*
 * XREFs of PfpMemoryListQuery @ 0x1400AC28C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-B8h]
  __int64 v11; // [rsp+38h] [rbp-B0h]
  __int64 v12; // [rsp+48h] [rbp-A0h]
  __int64 v13; // [rsp+50h] [rbp-98h]
  __int64 v14; // [rsp+58h] [rbp-90h]
  __int64 v15; // [rsp+60h] [rbp-88h]
  __int64 v16; // [rsp+68h] [rbp-80h]
  __int64 v17; // [rsp+70h] [rbp-78h]
  __int64 v18; // [rsp+78h] [rbp-70h]
  __int64 v19; // [rsp+80h] [rbp-68h]
  int v20; // [rsp+F0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v7 = -1073741789;
    *a3 = 64;
  }
  else
  {
    MmQueryMemoryListInformation(&v9, 0xB0u, (__int64)a3, &v20);
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v6 = 1;
    *(_DWORD *)(v6 + 4) = 64;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)(v6 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v6 + 24) = v15 + v14 + v13 + v12 + v16;
    *(_QWORD *)(v6 + 32) = v17;
    *(_QWORD *)(v6 + 40) = v19 + v18;
    *(_QWORD *)(v6 + 48) = v9 + *((_QWORD *)&v9 + 1);
    *(_QWORD *)(v6 + 56) = v11 + v10;
    *a3 = 64;
  }
  return v7;
}
