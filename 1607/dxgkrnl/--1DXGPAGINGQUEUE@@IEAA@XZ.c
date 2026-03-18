/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00902DC
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C0006FAC (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C0007AF8 (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000966C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C008FE30 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this)
{
  __int64 v2; // rax
  void *v3; // rdi
  unsigned int v4; // edx

  if ( !*((_BYTE *)this + 56) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 35LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*((DXGDEVICESYNCOBJECT **)this + 5));
    DXGQUOTAALLOCATOR<1,1265072196>::operator delete(v3);
  }
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v4);
  *((_QWORD *)this + 2) = 0LL;
}
