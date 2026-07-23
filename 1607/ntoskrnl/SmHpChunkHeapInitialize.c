/*
 * XREFs of SmHpChunkHeapInitialize @ 0x140002818
 * Callers:
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14000256C (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400041D8 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

unsigned int __fastcall SmHpChunkHeapInitialize(char *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r8d
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned int result; // eax

  memset(a1, 0, 0x238uLL);
  *((_QWORD *)a1 + 34) = *(_QWORD *)a2;
  memset(a1, 0, 0x100uLL);
  v4 = a1 + 288;
  *((_DWORD *)a1 + 64) = 1;
  v5 = 16LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = *(_DWORD *)(a2 + 4);
  *((_DWORD *)a1 + 136) = -1;
  v7 = (v6 + 23) & ~(v6 - 1);
  v8 = (unsigned int)(4096 - v7) / *(_DWORD *)a2;
  *((_DWORD *)a1 + 137) = v8;
  _BitScanReverse(&v8, v8);
  *((_DWORD *)a1 + 66) = v8;
  v9 = *((_DWORD *)a1 + 137);
  if ( !v9 || ((v9 - 1) & v9) != 0 )
    ++*((_DWORD *)a1 + 66);
  v10 = *((_DWORD *)a1 + 66);
  v11 = 0xFFFFFFFF >> v10;
  *((_DWORD *)a1 + 67) = (1 << v10) - 1;
  v12 = (unsigned int)(v9 + 15) >> 4;
  _BitScanReverse(&result, v12);
  *((_DWORD *)a1 + 65) = v11;
  *((_DWORD *)a1 + 70) = v7;
  *((_DWORD *)a1 + 139) = v9;
  *((_DWORD *)a1 + 138) = result;
  if ( !v12 || (result = v12 - 1, ((v12 - 1) & v12) != 0) )
    ++*((_DWORD *)a1 + 138);
  return result;
}
