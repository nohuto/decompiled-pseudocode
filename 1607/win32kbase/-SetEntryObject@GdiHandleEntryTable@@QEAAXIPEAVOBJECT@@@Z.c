/*
 * XREFs of ?SetEntryObject@GdiHandleEntryTable@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002B344
 * Callers:
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002AA90 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C002B36C (-ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryTable::SetEntryObject(GdiHandleEntryTable *this, unsigned int a2, struct OBJECT *a3)
{
  if ( a2 < *((_DWORD *)this + 5) )
    *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) = a3;
}
