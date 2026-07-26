/*
 * XREFs of NdisInitializeWrapper @ 0x1C00CBE50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  SIZE_T v7; // rbp
  PVOID *PoolWithTag; // rax
  PVOID *v9; // rbx
  size_t v10; // r8

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xAu, &WPP_d846d484cf1120be40243b5ff6d3deb2_Traceguids);
  *NdisWrapperHandle = 0LL;
  v7 = (unsigned int)*(unsigned __int16 *)SystemSpecific2 + 26;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6877444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *NdisWrapperHandle = PoolWithTag;
    memset(PoolWithTag, 0, (unsigned int)v7);
    *v9 = SystemSpecific1;
    v9[2] = v9 + 3;
    v10 = *(unsigned __int16 *)SystemSpecific2;
    *((_WORD *)v9 + 4) = v10;
    *((_WORD *)v9 + 5) = v10 + 2;
    memmove(v9 + 3, *((const void **)SystemSpecific2 + 1), v10);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xBu, &WPP_d846d484cf1120be40243b5ff6d3deb2_Traceguids);
}
