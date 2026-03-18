/*
 * XREFs of _recalloc @ 0x1800BE9B0
 * Callers:
 *     ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1800B8140 (-Add@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_D.c)
 *     ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1800B99FC (-RemoveAt@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBL.c)
 * Callees:
 *     _errno_0 @ 0x1800BEBE6 (_errno_0.c)
 *     _invalid_parameter @ 0x1800BEBF4 (_invalid_parameter.c)
 */

void *__cdecl recalloc(void *Block, size_t Count, size_t Size)
{
  if ( Count && 0xFFFFFFFFFFFFFFE0uLL / Count < Size )
  {
    *errno_0() = 12;
    invalid_parameter(0LL, 0LL, 0LL, 0, 0LL);
  }
  return realloc_0(Block, Size * Count);
}
