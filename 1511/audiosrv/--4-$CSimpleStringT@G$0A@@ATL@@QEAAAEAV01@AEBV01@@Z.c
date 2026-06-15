/*
 * XREFs of ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4
 * Callers:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180011AB4 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180011E58 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180014DF0 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001B150 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180075B4C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007E214 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E5C0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E884 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180018630 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180018950 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  volatile signed __int32 *v4; // rsi
  volatile signed __int32 *v5; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rbp
  struct ATL::IAtlStringMgr *v7; // rax
  volatile signed __int32 *v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  rsize_t v15; // r9

  v2 = *a2;
  v4 = (volatile signed __int32 *)(*a1 - 24LL);
  v5 = (volatile signed __int32 *)(v2 - 24);
  if ( (volatile signed __int32 *)(v2 - 24) != v4 )
  {
    if ( *((int *)v4 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v4 )
    {
      v6 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**(_QWORD **)v5 + 32LL);
      if ( v6 == ATL::CAtlStringMgr::Clone )
        v7 = ATL::CAtlStringMgr::Clone(*(ATL::CAtlStringMgr **)v5);
      else
        v7 = v6(*(ATL::CAtlStringMgr **)v5);
      if ( *((int *)v5 + 4) >= 0 && v7 == *(struct ATL::IAtlStringMgr **)v5 )
      {
        v8 = v5;
        _InterlockedIncrement(v5 + 4);
      }
      else
      {
        v10 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v7)(
                v7,
                *((unsigned int *)v5 + 2),
                2LL);
        v8 = (volatile signed __int32 *)v10;
        if ( !v10 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v12, v11, v13, v14);
        *(_DWORD *)(v10 + 8) = *((_DWORD *)v5 + 2);
        v15 = 2LL * (*((_DWORD *)v5 + 2) + 1);
        memcpy_s((void *const)(v10 + 24), v15, (const void *const)(v5 + 6), v15);
      }
      if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4, v4);
      *a1 = v8 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a1, v2, *(unsigned int *)(v2 - 16));
    }
  }
  return a1;
}
