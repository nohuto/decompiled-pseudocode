/*
 * XREFs of HmgModifyHandleType @ 0x1C005C300
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002ED98 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005C1A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C005C2A0 (HmgLockAndModifyHandleType.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  GdiHandleEntryDirectory **DeferredContext; // rdi
  unsigned int v3; // ebp
  struct OBJECT *EntryObject; // rsi
  unsigned int v5; // eax
  __int64 result; // rax

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v3 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  EntryObject = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v3);
  v5 = GdiHandleManager::DecodeIndex(DeferredContext, v3);
  *((_WORD *)GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v5, 0) + 6) = WORD1(a1);
  result = a1;
  *(_QWORD *)EntryObject = a1;
  return result;
}
