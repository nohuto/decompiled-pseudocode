/*
 * XREFs of ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0
 * Callers:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180005F0C (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180011380 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x1800118AC (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18002A314 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18005DF00 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180065B18 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180065F20 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1800124B0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180012A64 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rsi
  ATL::CAtlStringMgr *v6; // rcx
  __int64 (*v7)(void); // rax
  struct ATL::IAtlStringMgr *v8; // rax
  __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  int v15; // eax
  size_t v16; // r8

  v2 = *a2;
  v4 = (volatile signed __int32 *)(*a1 - 24LL);
  v5 = v2 - 24;
  if ( (volatile signed __int32 *)(v2 - 24) == v4 )
    return a1;
  if ( *((int *)v4 + 4) < 0 || (v6 = *(ATL::CAtlStringMgr **)v5, *(_QWORD *)v5 != *(_QWORD *)v4) )
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(a1, v2, *(unsigned int *)(v2 - 16));
    return a1;
  }
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 32LL);
  if ( (char *)v7 == (char *)ATL::CAtlStringMgr::Clone )
    v8 = ATL::CAtlStringMgr::Clone(v6);
  else
    v8 = (struct ATL::IAtlStringMgr *)v7();
  if ( *(int *)(v5 + 16) < 0 || v8 != *(struct ATL::IAtlStringMgr **)v5 )
  {
    v11 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v8)(
            v8,
            *(unsigned int *)(v5 + 8),
            2LL);
    v9 = v11;
    if ( !v11 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v13, v12);
    v14 = (void *)(v11 + 24);
    *(_DWORD *)(v11 + 8) = *(_DWORD *)(v5 + 8);
    v15 = *(_DWORD *)(v5 + 8) + 1;
    if ( !(2LL * v15) )
      goto LABEL_9;
    if ( v9 != -24 )
    {
      v16 = 2LL * v15;
      if ( v5 != -24 )
      {
        memcpy_0(v14, (const void *)(v5 + 24), v16);
        goto LABEL_9;
      }
      memset(v14, 0, v16);
    }
    *(_DWORD *)_o__errno(v14, v12) = 22;
    invalid_parameter_noinfo();
    goto LABEL_9;
  }
  v9 = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
LABEL_9:
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4, v4);
  *a1 = v9 + 24;
  return a1;
}
