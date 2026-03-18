/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C0144334
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C001D2C0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000973C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000F640 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  DXGDEVICESYNCOBJECT *v6; // rcx
  unsigned int v7; // edx

  if ( !*((_BYTE *)this + 56) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 35LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
  if ( v6 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v6);
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v7);
  *((_QWORD *)this + 2) = 0LL;
}
