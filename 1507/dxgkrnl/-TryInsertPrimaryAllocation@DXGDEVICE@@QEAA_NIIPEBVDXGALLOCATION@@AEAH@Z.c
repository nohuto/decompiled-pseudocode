/*
 * XREFs of ?TryInsertPrimaryAllocation@DXGDEVICE@@QEAA_NIIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C000B25C
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00B7B74 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

char __fastcall DXGDEVICE::TryInsertPrimaryAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        const struct DXGALLOCATION *a4,
        int *a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // bl
  unsigned int v13; // ecx
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  v7 = a3;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, (DXGDEVICE *)((char *)this + 232));
  v9 = (unsigned int)v5;
  v10 = v7 + 31 * v5;
  if ( *((_QWORD *)this + v10 + 74) )
  {
    v12 = 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v11 + 24) = a4;
    *(_QWORD *)(v11 + 32) = v9;
    *((_QWORD *)this + v10 + 74) = a4;
    v12 = 1;
    v13 = *((_DWORD *)this + v9 + 1188) ^ ((unsigned __int8)*((_DWORD *)this + v9 + 1188) ^ (unsigned __int8)(*((_DWORD *)this + v9 + 1188) + 1)) & 0x1F;
    *((_DWORD *)this + v9 + 1188) = v13;
    *a5 = (v13 >> 5) & 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v12;
}
