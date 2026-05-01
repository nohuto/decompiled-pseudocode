/*
 * XREFs of ??1?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800216F0
 * Callers:
 *     _lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_::operator() @ 0x18002318C (_lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_--operator().c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x1800023D0 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800215B4 (-Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18002410C (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024A2C (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800253BC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     free @ 0x180027044 (free.c)
 */

void __fastcall wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  const struct _TlgProvider_t *v2; // rax
  _QWORD **v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::shared_object<wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TileDataLayerItemWrappersLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(a1 + 136));
  if ( *(_BYTE *)(a1 + 120) )
  {
    free(*(void **)(a1 + 112));
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    v2 = TileDataLayerItemWrappersLogging::Provider();
    _TlgWriteActivityAutoStop<0,5>(v2, a1 + 64);
  }
  v3 = (_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 56) = 3;
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3AF,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v6);
    v4 = *v3;
    *(_DWORD *)(a1 + 32) = 0;
    if ( *v4 )
    {
      while ( (_QWORD **)**v3 != v3 )
      {
        v5 = (_QWORD *)(**v3 + 16LL);
        *v3 = v5;
        if ( !*v5 )
          goto LABEL_13;
      }
      **v3 = *(_QWORD *)(a1 + 24);
    }
LABEL_13:
    *v3 = 0LL;
  }
}
