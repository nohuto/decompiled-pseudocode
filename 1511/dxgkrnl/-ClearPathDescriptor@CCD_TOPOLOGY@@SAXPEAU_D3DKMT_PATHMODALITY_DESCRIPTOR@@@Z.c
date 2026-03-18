/*
 * XREFs of ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C28C4
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0060D9C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

void __fastcall CCD_TOPOLOGY::ClearPathDescriptor(struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v7[4]; // [rsp+20h] [rbp-40h] BYREF

  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_DWORD *)a1 + 4) = -1;
  *((_DWORD *)a1 + 5) = -1;
  memset(v7, 0, 0x38uLL);
  v2 = v7[0];
  v3 = v7[1];
  *((_DWORD *)a1 + 20) = -2;
  *(_OWORD *)((char *)a1 + 24) = v2;
  v4 = v7[2];
  *(_OWORD *)((char *)a1 + 40) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v7[3];
  *(_OWORD *)((char *)a1 + 56) = v4;
  *((_QWORD *)a1 + 9) = v3;
  memset(v7, 0, 0x20uLL);
  v5 = v7[0];
  *((_DWORD *)a1 + 30) = 0;
  *((_DWORD *)a1 + 31) = 0;
  *((_DWORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 51) = 0;
  *((_DWORD *)a1 + 52) = 0;
  *((_DWORD *)a1 + 53) = 0;
  v6 = v7[1];
  *((_DWORD *)a1 + 46) = 0;
  *(_OWORD *)((char *)a1 + 84) = v5;
  *((_BYTE *)a1 + 116) = 0;
  *(_OWORD *)((char *)a1 + 100) = v6;
  *(_QWORD *)((char *)a1 + 132) = 0LL;
  *(_OWORD *)((char *)a1 + 156) = 0uLL;
  *(_QWORD *)((char *)a1 + 140) = 0LL;
}
