/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C0050AE4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     AMLIIsObjectInGivenScope @ 0x1C0024B00 (AMLIIsObjectInGivenScope.c)
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C0024B6C (ACPIIoctlEvalPostProcessingEx.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ebx
  _IRP *MasterIrp; // r15
  _QWORD *v9; // rsi
  PVOID PoolWithTag; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rbx
  unsigned int v22; // eax

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v7 = -1073741820;
    goto LABEL_24;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v7 = -1073741789;
    goto LABEL_24;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v7 = -1073741585;
    goto LABEL_24;
  }
  v9 = *(_QWORD **)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v9 )
  {
    v7 = -1073741810;
    goto LABEL_24;
  }
  v7 = AMLIGetNameSpaceObject("_DSD");
  if ( v7 >= 0 )
  {
    v7 = AMLIIsObjectInGivenScope(0LL, v9);
    if ( v7 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
      v6 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v7 = -1073741670;
        goto LABEL_22;
      }
      v7 = AMLIEvalNameSpaceObject(0LL, PoolWithTag, 0, 0LL);
      if ( v7 >= 0 )
      {
        if ( *(_WORD *)(v6 + 2) != 4 )
          goto LABEL_20;
        v11 = *(_DWORD **)(v6 + 32);
        v12 = 0LL;
        if ( *v11 <= 1u )
          goto LABEL_20;
        while ( HIWORD(v11[10 * v12 + 2]) != 3
             || v11[10 * v12 + 8] != 16
             || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v11[10 * v12 + 10], 0x10uLL) != 16 )
        {
          v12 = (unsigned int)(v12 + 2);
          if ( (unsigned int)(v12 + 1) >= *v11 )
            goto LABEL_20;
        }
        LODWORD(v16) = *(&MasterIrp->Flags + 1);
        v17 = (unsigned int)(v12 + 1);
        if ( (_DWORD)v16 )
        {
          if ( HIWORD(v11[10 * v17 + 2]) != 4 )
            goto LABEL_20;
          v19 = *(_DWORD **)&v11[10 * v17 + 10];
          v20 = 0LL;
          if ( !*v19 )
            goto LABEL_20;
          while ( 1 )
          {
            if ( HIWORD(v19[10 * v20 + 2]) == 4 )
            {
              v21 = *(_QWORD *)&v19[10 * v20 + 10];
              if ( *(_DWORD *)v21 > 1u && *(_WORD *)(v21 + 10) == 2 )
              {
                v22 = *(_DWORD *)(v21 + 32);
                if ( (_DWORD)v16 == v22 )
                {
                  v16 = *(&MasterIrp->Flags + 1);
                  if ( v16 == RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v21 + 40), v22) )
                    break;
                }
              }
            }
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= *v19 )
              goto LABEL_20;
          }
          v18 = v21 + 48;
        }
        else
        {
          v18 = (__int64)&v11[8 * v17 + 2 + 2 * (unsigned int)v17];
        }
        if ( v18 )
        {
          v7 = ACPIIoctlEvalPostProcessingEx(a2, v18, v13, v14);
          goto LABEL_21;
        }
LABEL_20:
        v7 = -1073741275;
LABEL_21:
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs(v6, 1u);
      }
    }
  }
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_24:
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
