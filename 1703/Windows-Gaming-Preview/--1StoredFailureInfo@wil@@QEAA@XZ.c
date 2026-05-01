/*
 * XREFs of ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180002198
 * Callers:
 *     ??1?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800233F4 (--1-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026670 (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::StoredFailureInfo::~StoredFailureInfo(wil::StoredFailureInfo *this)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *((LPVOID *)this + 18));
    }
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
}
