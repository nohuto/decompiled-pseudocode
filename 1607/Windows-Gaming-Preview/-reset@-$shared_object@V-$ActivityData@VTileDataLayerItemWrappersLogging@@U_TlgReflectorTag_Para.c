/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18002410C
 * Callers:
 *     ??1?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800216F0 (--1-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180023918 (-Destroy@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x1800023D0 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800215B4 (-Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024A2C (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180026834 (--3@YAXPEAX@Z.c)
 *     free @ 0x180027044 (free.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TileDataLayerItemWrappersLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi
  const struct _TlgProvider_t *v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(v3 + 22));
        if ( *((_BYTE *)v3 + 72) )
        {
          free(*((void **)v3 + 8));
          *((_BYTE *)v3 + 72) = 0;
        }
        *((_QWORD *)v3 + 8) = 0LL;
        if ( *((_DWORD *)v3 + 2) == 1 )
        {
          *((_DWORD *)v3 + 2) = 2;
          v4 = TileDataLayerItemWrappersLogging::Provider();
          _TlgWriteActivityAutoStop<0,5>(v4, v3 + 4);
        }
        *((_DWORD *)v3 + 2) = 3;
        operator delete((void *)v3);
      }
    }
    *a1 = 0LL;
  }
}
