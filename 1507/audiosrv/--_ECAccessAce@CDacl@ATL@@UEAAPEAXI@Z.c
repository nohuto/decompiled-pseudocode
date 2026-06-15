/*
 * XREFs of ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180008460
 * Callers:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x180008148 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void **__fastcall ATL::CDacl::CAccessAce::`vector deleting destructor'(void **this, char a2)
{
  volatile signed __int32 *v4; // r14
  volatile signed __int32 *v5; // r14
  volatile signed __int32 *v6; // r14
  HANDLE ProcessHeap; // rax

  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  v4 = (volatile signed __int32 *)this[15];
  this[1] = &ATL::CSid::`vftable';
  if ( _InterlockedExchangeAdd(v4 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD **))(**((_QWORD **)v4 - 3) + 8LL))(*((_QWORD *)v4 - 3), (_QWORD **)v4 - 3);
  v5 = (volatile signed __int32 *)this[14];
  if ( _InterlockedExchangeAdd(v5 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD **))(**((_QWORD **)v5 - 3) + 8LL))(*((_QWORD *)v5 - 3), (_QWORD **)v5 - 3);
  v6 = (volatile signed __int32 *)this[13];
  if ( _InterlockedExchangeAdd(v6 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD **))(**((_QWORD **)v6 - 3) + 8LL))(*((_QWORD *)v6 - 3), (_QWORD **)v6 - 3);
  ATL::CStringData::Release((ATL::CStringData *)((char *)this[12] - 24));
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
