/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C005C384
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(GdiHandleManager *a1)
{
  char v1; // si
  unsigned int NextEntryIndex; // edi
  struct _ENTRY *v3; // rbx
  struct OBJECT *EntryObject; // rax
  struct _ENTRY *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char)a1;
  NextEntryIndex = 0;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, NextEntryIndex, &v5);
    if ( !NextEntryIndex )
      break;
    v3 = v5;
    if ( v1 )
    {
      if ( v1 == *((_BYTE *)v5 + 14) )
        goto LABEL_5;
    }
    else if ( (unsigned __int8)(*((_BYTE *)v5 + 14) - 1) <= 0x1Du )
    {
LABEL_5:
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      NextEntryIndex);
      *((_DWORD *)EntryObject + 2) = 0;
      *((_WORD *)EntryObject + 6) = 0;
      *((_QWORD *)EntryObject + 2) = 0LL;
      *((_DWORD *)v3 + 2) &= ~1u;
      *((_BYTE *)v3 + 15) &= ~1u;
      if ( (*((_BYTE *)v3 + 15) & 0x20) != 0 )
        *((_QWORD *)v3 + 2) = 0LL;
      *((_BYTE *)v3 + 15) &= ~0x20u;
    }
  }
}
