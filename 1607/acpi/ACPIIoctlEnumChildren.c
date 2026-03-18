/*
 * XREFs of ACPIIoctlEnumChildren @ 0x1C0021170
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0008940 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C00816A0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     AMLIFindNameSpaceObject @ 0x1C0020F88 (AMLIFindNameSpaceObject.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0021380 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIIoctlEnumChildren(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  PVOID *v3; // rdi
  char *v4; // rsi
  unsigned int v6; // r12d
  __int64 *v7; // r13
  _IRP *MasterIrp; // r14
  int v9; // ecx
  SIZE_T MdlAddress_low; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // ebx
  char *v15; // rax
  PVOID *v16; // rax
  PVOID v17; // rax
  size_t v18; // rdi
  char *PoolWithTag; // rax
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( *(_DWORD *)(a3 + 16) < 0x10u )
  {
    v11 = -1073741820;
    goto LABEL_13;
  }
  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 < 0x14 )
  {
    v11 = -1073741789;
    goto LABEL_13;
  }
  v7 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v7 )
  {
    v11 = -1073741810;
    goto LABEL_13;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v11 = -1073741585;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber;
  MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
  if ( (MasterIrp->AllocationProcessorNumber & 3) != 3 && (v9 & 7) != 0 && ((v9 & 4) == 0 || (_DWORD)MdlAddress_low) )
  {
    v14 = (v9 & 1) != 0;
    if ( (_DWORD)MdlAddress_low )
    {
      v18 = LODWORD(MasterIrp->MdlAddress);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MdlAddress_low, 0x52706341u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (char *)&MasterIrp->MdlAddress + 4, v18);
        _strupr(v4);
        goto LABEL_19;
      }
    }
    else
    {
      v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x52706341u);
      v4 = v15;
      if ( v15 )
      {
        *v15 = 0;
        v14 |= 2u;
LABEL_19:
        v16 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
        v3 = v16;
        if ( v16
          && (memset(v16, 0, 0x28uLL),
              v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u),
              (v3[1] = v17) != 0LL) )
        {
          memset(v17, 0, 0x28uLL);
          v11 = AMLIFindNameSpaceObject(v7, (__int64)v3, v14, v4);
          if ( v11 >= 0 )
          {
            v11 = ACPIIoctlEnumChildrenPopulateOutputBuffer(MasterIrp, v6, &v20, v3);
            a2->IoStatus.Information = v20;
          }
        }
        else
        {
          v11 = -1073741670;
        }
        goto LABEL_7;
      }
    }
    v11 = -1073741670;
    goto LABEL_13;
  }
  v11 = -1072431089;
LABEL_7:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  if ( v3 )
  {
    v12 = (__int64)v3[1];
    if ( v12 )
    {
      dword_1C0074698 = 0;
      byte_1C007469C = 0;
      FreeDataBuffs(v12, 1u);
      ExFreePoolWithTag(v3[1], 0x52706341u);
      v3[1] = 0LL;
    }
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    FreeDataBuffs((__int64)v3, 1u);
    ExFreePoolWithTag(v3, 0x52706341u);
  }
LABEL_13:
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
