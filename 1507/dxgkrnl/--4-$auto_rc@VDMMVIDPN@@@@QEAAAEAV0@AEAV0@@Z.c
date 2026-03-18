/*
 * XREFs of ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0007D94
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00CD224 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00CDBEC (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 */

__int64 *__fastcall auto_rc<DMMVIDPN>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  auto_rc<DMMVIDPN>::reset(a1, v4);
  return a1;
}
