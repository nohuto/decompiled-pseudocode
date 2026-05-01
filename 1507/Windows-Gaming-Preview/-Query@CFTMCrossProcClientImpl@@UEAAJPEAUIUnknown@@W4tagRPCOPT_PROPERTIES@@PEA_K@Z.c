/*
 * XREFs of ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x18001FC60
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000AA3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D7F8 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::Query(
        CFTMCrossProcClientImpl *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  signed int RemoteIdentity; // esi
  int v8; // ebp
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  RemoteIdentity = a3 != 2 ? 0x80070057 : 0;
  if ( a3 == 2 )
  {
    v8 = -2147467262;
    if ( *((_QWORD *)this + 1) )
    {
      v15 = 0LL;
      v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>((__int64 *)&v15);
      RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                         (CFTMCrossProcClientImpl *)((char *)this - 48),
                         &GUID_00000000_0000_0000_c000_000000000046,
                         (void **)v9);
      if ( RemoteIdentity >= 0 )
      {
        v14[0] = 0LL;
        v10 = (**v15)(v15, &GUID_00000144_0000_0000_c000_000000000046, v14);
        v8 = v10;
        if ( v10 < 0 )
        {
          if ( v10 != -2147467262 )
            RemoteIdentity = v10;
        }
        else
        {
          RemoteIdentity = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), _QWORD, unsigned __int64 *))(*(_QWORD *)v14[0] + 32LL))(
                             v14[0],
                             v15,
                             a3,
                             a4);
        }
        v11 = v14[0];
        if ( v14[0] )
        {
          v14[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      v12 = (__int64)v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    if ( RemoteIdentity >= 0 && v8 == -2147467262 )
    {
      *a4 = 0LL;
      return 0;
    }
  }
  return (unsigned int)RemoteIdentity;
}
