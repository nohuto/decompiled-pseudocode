/*
 * XREFs of ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180092B34
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180089844 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@PEAUISpatialGraphNodeReferenceFactory@234@@Z @ 0x180089A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ??1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x180092220 (--1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180092AF0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180092C44 (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  _QWORD *result; // rax
  __int64 v5; // rbx
  void *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  result = (_QWORD *)wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  v5 = a1 + 8;
  if ( *(_DWORD *)(v5 + 24) )
  {
    if ( *(_DWORD *)(v5 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL);
    result = *(_QWORD **)v5;
    *(_DWORD *)(v5 + 24) = 0;
    if ( *result )
    {
      while ( 1 )
      {
        result = *(_QWORD **)v5;
        if ( **(_QWORD **)v5 == v5 )
          break;
        v8 = (_QWORD *)(*result + 16LL);
        *(_QWORD *)v5 = v8;
        if ( !*v8 )
          goto LABEL_14;
      }
      result = *(_QWORD **)(v5 + 16);
      **(_QWORD **)v5 = result;
    }
LABEL_14:
    *(_QWORD *)v5 = 0LL;
  }
  return result;
}
