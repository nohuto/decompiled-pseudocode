/*
 * XREFs of ??1?$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C00BF0B0
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>(
        PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
