/*
 * XREFs of ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18002DED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DF6C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18002E0B8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::UnmarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  void **v8; // rax
  const struct _GUID *v9; // rdx
  int StdMarshaler; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v8 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMarshal>>(&v13);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v9, v8);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void **))(*(_QWORD *)v13 + 48LL))(
                     v13,
                     a2,
                     a3,
                     a4);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)StdMarshaler;
}
