/*
 * XREFs of ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x18002DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DF6C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18002E0B8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::ReleaseMarshalData(CWrlLightweightHandlerBase *this, struct IStream *a2)
{
  void **v4; // rax
  const struct _GUID *v5; // rdx
  int StdMarshaler; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMarshal>>(&v9);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v5, v4);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *))(*(_QWORD *)v9 + 56LL))(v9, a2);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)StdMarshaler;
}
