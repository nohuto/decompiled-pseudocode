/*
 * XREFs of ??1?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091964
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180089D6C (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV-$.c)
 *     ??1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x180091DE8 (--1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18009332C (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 * Callees:
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091B4C (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180092AF0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  _QWORD *result; // rax
  __int64 v5; // rbx
  void *v6; // rdx
  unsigned int v7; // r8d
  _QWORD *v8; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  result = (_QWORD *)wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  v5 = a1 + 8;
  if ( *(_DWORD *)(v5 + 24) )
  {
    if ( *(_DWORD *)(v5 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL, v9);
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
