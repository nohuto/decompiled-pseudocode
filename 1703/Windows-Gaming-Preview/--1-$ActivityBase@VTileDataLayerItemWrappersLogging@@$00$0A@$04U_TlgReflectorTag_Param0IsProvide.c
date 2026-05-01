/*
 * XREFs of ??1?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800233F4
 * Callers:
 *     _lambda_849682ba5faec79a8a918f75d9dbfadc_::operator() @ 0x1800252D8 (_lambda_849682ba5faec79a8a918f75d9dbfadc_--operator().c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180002198 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180023278 (-Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026670 (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800275C8 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180027E80 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  HANDLE ProcessHeap; // rax
  const struct _TlgProvider_t *v3; // rax
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::shared_object<wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TileDataLayerItemWrappersLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(a1 + 136));
  if ( *(_BYTE *)(a1 + 120) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 112));
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    v3 = TileDataLayerItemWrappersLogging::Provider();
    _TlgWriteActivityAutoStop<0,5>(v3, a1 + 64);
  }
  v4 = (_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 56) = 3;
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3AE,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v7);
    v5 = *v4;
    *(_DWORD *)(a1 + 32) = 0;
    if ( *v5 )
    {
      while ( (_QWORD **)**v4 != v4 )
      {
        v6 = (_QWORD *)(**v4 + 16LL);
        *v4 = v6;
        if ( !*v6 )
          goto LABEL_13;
      }
      **v4 = *(_QWORD *)(a1 + 24);
    }
LABEL_13:
    *v4 = 0LL;
  }
}
