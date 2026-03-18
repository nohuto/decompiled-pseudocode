/*
 * XREFs of ?_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z @ 0x1C002B1B0
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C002B36C (-ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     HmgReplaceObject @ 0x1C0036E20 (HmgReplaceObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall GdiHandleEntryTable::_IsEntryInUse(GdiHandleEntryTable *this, unsigned int a2)
{
  return a2 < *((_DWORD *)this + 5)
      && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8))
                   + 16LL * (unsigned __int8)a2
                   + 8);
}
