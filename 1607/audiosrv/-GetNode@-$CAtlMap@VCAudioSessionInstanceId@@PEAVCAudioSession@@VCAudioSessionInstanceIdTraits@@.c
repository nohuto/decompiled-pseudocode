/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18002BFDC
 * Callers:
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180010DAC (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18002C19C (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180012460 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800124C0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??9CAppAudioSessionId@@QEBA_NAEBV0@@Z @ 0x18002A2AC (--9CAppAudioSessionId@@QEBA_NAEBV0@@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18002C680 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
        __int64 a1,
        __int64 a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rbx
  int v14; // esi
  unsigned int v15; // esi
  __int64 v16; // rsi
  __int64 i; // rbx
  int v18; // eax
  ATL::CAtlStringMgr **v20; // rdx
  void (*v21)(void); // rax
  const void *v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v22[0] = (char *)NilString + 24;
  if ( (int)CAudioSessionInstanceId::ToString(a2, v22, v11, v12) < 0 )
  {
    v20 = (ATL::CAtlStringMgr **)((char *)v22[0] - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22[0] - 2, 0xFFFFFFFF) <= 1 )
    {
      v21 = *(void (**)(void))(*(_QWORD *)*v20 + 8LL);
      if ( (char *)v21 == (char *)ATL::CAtlStringMgr::Free )
        ATL::CAtlStringMgr::Free(*v20, (struct ATL::CStringData *)v20);
      else
        v21();
    }
    v15 = 0;
  }
  else
  {
    v13 = (char *)v22[0];
    v14 = *((_DWORD *)v22[0] - 4);
    if ( ((*((_DWORD *)v22[0] - 3) - v14) | (1 - *((_DWORD *)v22[0] - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v22, v14);
      v13 = (char *)v22[0];
    }
    _o__wcsupr_s(v13, v14 + 1);
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)v22, v14);
    v15 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v13);
    ATL::CStringData::Release((ATL::CStringData *)(v13 - 24));
  }
  *a4 = v15;
  *a3 = v15 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v16 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_DWORD *)(i + 96) == *a4 && !(unsigned int)_o__wcsicmp(*(_QWORD *)i, *(_QWORD *)a2) )
      {
        v18 = *(_DWORD *)(i + 64);
        if ( v18 == *(_DWORD *)(a2 + 64)
          && (v18 || *(_DWORD *)(i + 56) == *(_DWORD *)(a2 + 56))
          && !CAppAudioSessionId::operator!=(i + 8, a2 + 8) )
        {
          *a5 = v16;
          return i;
        }
      }
      v16 = i;
    }
  }
  return 0LL;
}
