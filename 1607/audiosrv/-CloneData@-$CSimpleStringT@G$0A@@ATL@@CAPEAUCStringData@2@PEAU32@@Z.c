/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180012CE0
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000CAF4 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18002BDF8 (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x18005D634 (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rcx
  int v10; // eax
  size_t v11; // r8

  v2 = *(_QWORD *)a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v3 != (char *)ATL::CAtlStringMgr::Clone )
    v2 = v3();
  if ( *(int *)(a1 + 16) >= 0 && v2 == *(_QWORD *)a1 )
  {
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v2)(v2, *(unsigned int *)(a1 + 8), 2LL);
    v4 = v6;
    if ( !v6 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v8, v7);
    v9 = (void *)(v6 + 24);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 8) + 1;
    if ( 2LL * v10 )
    {
      if ( v4 != -24 )
      {
        v11 = 2LL * v10;
        if ( a1 != -24 )
        {
          memcpy_0(v9, (const void *)(a1 + 24), v11);
          return v4;
        }
        memset(v9, 0, v11);
      }
      *(_DWORD *)_o__errno(v9, v7) = 22;
      invalid_parameter_noinfo();
    }
  }
  return v4;
}
