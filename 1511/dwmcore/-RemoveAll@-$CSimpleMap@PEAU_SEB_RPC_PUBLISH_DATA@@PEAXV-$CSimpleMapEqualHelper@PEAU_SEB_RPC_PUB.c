/*
 * XREFs of ?RemoveAll@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAXXZ @ 0x180159E24
 * Callers:
 *     ??1ContextTable@@QEAA@XZ @ 0x1800BA4D4 (--1ContextTable@@QEAA@XZ.c)
 *     ??1?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAA@XZ @ 0x180159E18 (--1-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DAT.c)
 * Callees:
 *     <none>
 */

void ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll()
{
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  if ( *(&Block + 1) )
  {
    free(*(&Block + 1));
    *(&Block + 1) = 0LL;
  }
  dword_1801A3EA8 = 0;
}
