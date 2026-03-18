/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C0059F94
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C002A4F0 (HmgNextOwned.c)
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     bDeleteRegion @ 0x1C003A220 (bDeleteRegion.c)
 */

void __fastcall vCleanupRegions(int a1)
{
  unsigned int Owned; // esi
  HRGN v3; // rdi
  struct OBJECT *v4; // rax
  struct OBJECT *v5; // rbx
  struct _ENTRY *EntryFromObject; // rax
  HRGN v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v7);
    if ( !Owned )
      break;
    v3 = v7;
    if ( (BYTE2(v7) & 0x1F) == 4 )
    {
      v4 = (struct OBJECT *)HmgLockEx((unsigned int)v7, 4, 0);
      v5 = v4;
      if ( v4 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject(
                            (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                            v4);
        if ( EntryFromObject )
          *((_QWORD *)EntryFromObject + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
        v3 = v7;
      }
      bDeleteRegion(v3);
    }
  }
}
