/*
 * XREFs of ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180020C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E4DC (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::Query(
        CFTMCrossProcClientImpl *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  signed int RemoteIdentity; // ebx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  RemoteIdentity = a3 != 2 ? 0x80070057 : 0;
  if ( a3 == 2 )
  {
    v7 = -2147467262;
    if ( *((_QWORD *)this + 1) )
    {
      v13 = 0LL;
      RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                         (CFTMCrossProcClientImpl *)((char *)this - 48),
                         &GUID_00000000_0000_0000_c000_000000000046,
                         (void **)&v13);
      if ( RemoteIdentity >= 0 )
      {
        v12[0] = 0LL;
        v8 = (**v13)(v13, &GUID_00000144_0000_0000_c000_000000000046, v12);
        v7 = v8;
        if ( v8 < 0 )
        {
          if ( v8 != -2147467262 )
            RemoteIdentity = v8;
        }
        else
        {
          RemoteIdentity = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), _QWORD, unsigned __int64 *))(*(_QWORD *)v12[0] + 32LL))(
                             v12[0],
                             v13,
                             a3,
                             a4);
        }
        v9 = v12[0];
        if ( v12[0] )
        {
          v12[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    if ( RemoteIdentity >= 0 && v7 == -2147467262 )
    {
      *a4 = 0LL;
      return 0;
    }
  }
  return (unsigned int)RemoteIdentity;
}
