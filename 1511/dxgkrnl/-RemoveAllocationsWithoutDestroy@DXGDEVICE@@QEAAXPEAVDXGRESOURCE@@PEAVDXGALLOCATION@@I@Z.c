/*
 * XREFs of ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C013B0B4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsWithoutDestroy(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        int a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, this + 17);
  v8 = (_QWORD *)((char *)a3 + 56);
  v9 = *((_QWORD *)a3 + 7);
  v10 = a4 - 1;
  if ( v10 )
  {
    v11 = v10;
    do
    {
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      --v11;
    }
    while ( v11 );
  }
  v12 = *((_QWORD *)a3 + 8);
  if ( v9 )
  {
    *v8 = 0LL;
    *((_QWORD *)a3 + 8) = 0LL;
    *(_QWORD *)(v9 + 64) = v12;
    if ( v12 )
      *(_QWORD *)(v12 + 56) = v9;
  }
  else
  {
    if ( a2 )
      *((_QWORD *)a2 + 3) = v12;
    else
      this[6] = (struct _KTHREAD *)v12;
    *((_QWORD *)a3 + 8) = 0LL;
    if ( v12 )
      *(_QWORD *)(v12 + 56) = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
