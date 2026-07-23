/*
 * XREFs of SecureDump_Get_SecureDumpHeader @ 0x1401CB844
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1406276C4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SecureDump_Get_SecureDumpHeader(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // eax

  if ( !byte_1403234D0 || a3 != dword_140323504 )
    return 3221225485LL;
  v5 = a3;
  memset(a2, 0, a3);
  a2[2] = 1;
  a2[3] = dword_140323504;
  *a2 = *(_DWORD *)a1;
  a2[1] = *(_DWORD *)(a1 + 4);
  a2[12] = *(_DWORD *)(a1 + 48);
  a2[998] = *(_DWORD *)(a1 + 3992);
  *((_QWORD *)a2 + 500) = (*(_QWORD *)(a1 + 4000) + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  a2[1044] = *(_DWORD *)(a1 + 4176) | 0x100;
  v6 = *(_DWORD *)(a1 + 56);
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 9) = 0LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *((_QWORD *)a2 + 11) = 0LL;
  a2[14] = v6;
  a2[5] = 4184;
  a2[4] = pcbResult;
  memmove(a2 + 1046, qword_1403234D8, pcbResult);
  v7 = a2[4] + a2[5];
  a2[10] = cbOutput;
  v8 = dword_1403234E8;
  a2[7] = v7;
  a2[8] = v8;
  a2[6] = dword_1403234C8;
  memmove((char *)a2 + v7, qword_1403234C0, (unsigned int)dword_1403234C8);
  a2[9] = dword_140323500;
  return 0LL;
}
