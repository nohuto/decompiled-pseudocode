/*
 * XREFs of ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DF6C
 * Callers:
 *     ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x18002D980 (-GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x18002DA60 (-ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z.c)
 *     ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x18002DAE0 (-DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z.c)
 *     ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18002DB60 (-GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18002DCA0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18002DED0 (-UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::_GetStdMarshaler(RTL_SRWLOCK *this, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  RTL_SRWLOCK *v6; // rsi
  int v7; // ebx
  HRESULT StdMarshal; // ebx
  __int64 (__fastcall **Ptr)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rax
  PVOID v10; // rcx
  IUnknown *v11; // rbx
  DWORD v12; // eax
  LPUNKNOWN v13; // rcx
  LPUNKNOWN pUnkOuter; // [rsp+48h] [rbp+10h] BYREF

  pUnkOuter = a2;
  *a3 = 0LL;
  v3 = this + 2;
  AcquireSRWLockShared(this + 2);
  v6 = this + 3;
  v7 = -(this[3].Ptr == 0LL);
  ReleaseSRWLockShared(v3);
  if ( v7 >= 0 )
    return (unsigned int)(**(unsigned __int64 (__fastcall ***)(PVOID, GUID *, void **))v6->Ptr)(
                           v6->Ptr,
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  AcquireSRWLockExclusive(v3);
  StdMarshal = v6->Ptr == 0LL ? 0x80004005 : 0;
  if ( !v6->Ptr )
  {
    Ptr = (__int64 (__fastcall **)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *))this->Ptr;
    pUnkOuter = 0LL;
    StdMarshal = (*Ptr)((CWrlLightweightHandlerBase *)this, &GUID_00000000_0000_0000_c000_000000000046, &pUnkOuter);
    if ( StdMarshal >= 0 )
    {
      v10 = v6->Ptr;
      if ( v6->Ptr )
      {
        v6->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = pUnkOuter;
      v12 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 9))(this);
      StdMarshal = CoGetStdMarshalEx(v11, v12, (LPUNKNOWN *)&this[3]);
      if ( StdMarshal >= 0 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 12))(this);
    }
    v13 = pUnkOuter;
    if ( pUnkOuter )
    {
      pUnkOuter = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
    }
  }
  ReleaseSRWLockExclusive(v3);
  if ( StdMarshal >= 0 )
    return (unsigned int)(**(unsigned __int64 (__fastcall ***)(PVOID, GUID *, void **))v6->Ptr)(
                           v6->Ptr,
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  return (unsigned int)StdMarshal;
}
