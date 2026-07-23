/*
 * XREFs of BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1406D2CFC
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x14053EA70 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToQualifiedPartition(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  int v9; // eax

  if ( *(_DWORD *)a1 == 6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x3CuLL, 0x4B444342u);
    v6 = 0;
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x3CuLL);
    *v8 = 6;
    if ( *(_DWORD *)(a1 + 32) )
    {
      v6 = -1073741637;
LABEL_13:
      ExFreePoolWithTag(v8, 0x4B444342u);
      return v6;
    }
    v9 = *(_DWORD *)(a1 + 36);
    if ( v9 == 1 )
    {
      v8[5] = 0;
      v8[7] = *(_DWORD *)(a1 + 40);
      *((_QWORD *)v8 + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      if ( v9 )
      {
        v6 = -1073741811;
        goto LABEL_13;
      }
      v8[5] = 1;
      *(_OWORD *)(v8 + 7) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v8 + 11) = *(_OWORD *)(a1 + 16);
    }
    *a2 = v8;
    *a3 = 60;
    return v6;
  }
  return (unsigned int)-1073741811;
}
