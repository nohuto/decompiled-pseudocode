/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0081514
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(GdiHandleManager *a1)
{
  unsigned int NextEntryIndex; // esi
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v3; // rdi
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (_DWORD)a1 == 2 )
  {
    NextEntryIndex = 0;
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, NextEntryIndex, &v6);
      if ( !NextEntryIndex )
        break;
      if ( *((_BYTE *)v6 + 14) == 5 )
      {
        EntryObject = GdiHandleManager::GetEntryObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        NextEntryIndex);
        v3 = EntryObject;
        if ( EntryObject )
        {
          if ( *((_QWORD *)EntryObject + 31) )
          {
            v4 = *((_QWORD *)EntryObject + 33);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
            if ( v4 == CurrentProcessWin32Process )
            {
              *((_QWORD *)v3 + 33) = 0LL;
              *((_QWORD *)v3 + 32) = 0LL;
            }
          }
        }
      }
    }
  }
}
