/*
 * XREFs of BiConvertBootEnvironmentDeviceToUnknown @ 0x1406D2DE4
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x14053EA70 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToUnknown(_DWORD *Src, _QWORD *a2, unsigned int *a3)
{
  unsigned int v4; // edi
  _DWORD *PoolWithTag; // rax
  unsigned int v8; // ebx
  _DWORD *v9; // rsi

  v4 = Src[2] + 20;
  if ( Src[2] >= 0xFFFFFFEC )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x4B444342u);
    v8 = 0;
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4);
      *v9 = 5;
      memmove(v9 + 5, Src, (unsigned int)Src[2]);
      *a2 = v9;
      *a3 = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
