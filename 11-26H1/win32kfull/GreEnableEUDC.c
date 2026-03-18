/*
 * XREFs of GreEnableEUDC @ 0x14016EE38
 * Callers:
 *     NtGdiEnableEudc @ 0x14016EE20 (NtGdiEnableEudc.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x14020E8D4 (-CleanUpEUDC@@YAXXZ.c)
 * Callees:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6A9C (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6B9C (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FABC0 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x14016EF30 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC@@YAK_N@Z @ 0x14016EFC8 (-GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC@@YAK_N@Z.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x14026078C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdi
  int SessionTextStackStatus; // eax
  __int64 v6; // rcx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // esi

  v3 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4864LL;
  SessionTextStackStatus = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  if ( SessionTextStackStatus && SessionTextStackStatus != -1073741637 )
    return 0LL;
  GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v6, (struct W32_PUSH_LOCK *)(v4 + 8624));
  if ( v3 )
  {
    GreAcquirePushLockExclusive2<16,1>(v4);
    if ( *(_DWORD *)(v4 + 14692) == 1 && !*(_DWORD *)(v4 + 14696) && (unsigned int)bSetupDefaultFlEntry() )
      *(_DWORD *)(v4 + 14696) = 1;
    GreReleasePushLockExclusive2<16,1>(v4);
  }
  v8 = *(_DWORD *)(v4 + 8648);
  *(_DWORD *)(v4 + 8648) = GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC(v3 != 0) | v8;
  if ( v3 )
    v12 = bAddAllFlEntry(1);
  else
    v12 = bDeleteAllFlEntry(v10, v9, v11);
  v14 = *(_BYTE *)(v4 + 8632) == 0;
  v15 = v12;
  *(_DWORD *)(v4 + 8648) = v8;
  if ( v14 )
    *(_BYTE *)(v4 + 8632) = 1;
  GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v13, (struct W32_PUSH_LOCK *)(v4 + 8624));
  return v15;
}
