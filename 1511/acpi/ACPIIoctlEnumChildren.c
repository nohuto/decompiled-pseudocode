/*
 * XREFs of ACPIIoctlEnumChildren @ 0x1C0018F24
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0019E90 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0067120 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018D3C (AMLIFindNameSpaceObject.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C001918C (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIIoctlEnumChildren(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  PVOID *v3; // rdi
  char *v4; // rsi
  int v6; // ebx
  unsigned int v7; // r12d
  __int64 *v8; // r13
  _IRP *MasterIrp; // r14
  int v10; // ecx
  SIZE_T MdlAddress_low; // rdx
  unsigned int v12; // ebx
  size_t v13; // rdi
  char *PoolWithTag; // rax
  char *v15; // rax
  PVOID *v16; // rax
  __int64 v17; // rcx
  PVOID v19; // rax
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( *(_DWORD *)(a3 + 16) < 0x10u )
  {
    v6 = -1073741820;
    goto LABEL_27;
  }
  v7 = *(_DWORD *)(a3 + 8);
  if ( v7 < 0x14 )
  {
    v6 = -1073741789;
    goto LABEL_27;
  }
  v8 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 704);
  if ( !v8 )
  {
    v6 = -1073741810;
    goto LABEL_27;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v6 = -1073741585;
    goto LABEL_27;
  }
  v10 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber;
  MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
  if ( (MasterIrp->AllocationProcessorNumber & 3) == 3 || (v10 & 7) == 0 || (v10 & 4) != 0 && !(_DWORD)MdlAddress_low )
  {
    v6 = -1072431089;
  }
  else
  {
    v12 = (v10 & 1) != 0;
    if ( (_DWORD)MdlAddress_low )
    {
      v13 = LODWORD(MasterIrp->MdlAddress);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MdlAddress_low, 0x52706341u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_15:
        v6 = -1073741670;
        goto LABEL_27;
      }
      memmove(PoolWithTag, (char *)&MasterIrp->MdlAddress + 4, v13);
      _strupr(v4);
    }
    else
    {
      v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x52706341u);
      v4 = v15;
      if ( !v15 )
        goto LABEL_15;
      *v15 = 0;
      v12 |= 2u;
    }
    v16 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
    v3 = v16;
    if ( v16
      && (memset(v16, 0, 0x28uLL),
          v19 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u),
          (v3[1] = v19) != 0LL) )
    {
      memset(v19, 0, 0x28uLL);
      v6 = AMLIFindNameSpaceObject(v8, (__int64)v3, v12, v4);
      if ( v6 >= 0 )
      {
        v6 = ACPIIoctlEnumChildrenPopulateOutputBuffer(MasterIrp, v7, &v20, v3);
        a2->IoStatus.Information = v20;
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  if ( v3 )
  {
    v17 = (__int64)v3[1];
    if ( v17 )
    {
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      FreeDataBuffs(v17, 1u);
      ExFreePoolWithTag(v3[1], 0x52706341u);
      v3[1] = 0LL;
    }
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs((__int64)v3, 1u);
    ExFreePoolWithTag(v3, 0x52706341u);
  }
LABEL_27:
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v6;
}
