/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C002B36C
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C002B164 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 * Callees:
 *     ?_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z @ 0x1C002B1B0 (-_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z.c)
 *     ?SetEntryObject@GdiHandleEntryTable@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002B344 (-SetEntryObject@GdiHandleEntryTable@@QEAAXIPEAVOBJECT@@@Z.c)
 */

void __fastcall GdiHandleEntryTable::ReleaseLockAndEntry(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  unsigned __int64 v3; // r11
  GdiHandleEntryTable *v4; // r10

  LODWORD(v3) = a2;
  v4 = this;
  if ( a3 || GdiHandleEntryTable::_IsEntryInUse(this, a2) )
  {
    GdiHandleEntryTable::SetEntryObject(v4, v3, 0LL);
    *(_QWORD *)(*(_QWORD *)v4 + 24 * v3) = *((unsigned int *)v4 + 3);
    --*((_DWORD *)v4 + 4);
    *((_DWORD *)v4 + 3) = v3;
  }
  ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v4 + 3) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3, 0LL);
  KeLeaveCriticalRegion();
}
