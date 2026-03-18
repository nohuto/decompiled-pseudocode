/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00A31C8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 206LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) >> 6) & 0x3F | (((*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 20) ^ ((unsigned int)v3 ^ (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 20)) & 0xFFFFFF) << 6);
}
