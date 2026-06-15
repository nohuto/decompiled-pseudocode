/*
 * XREFs of ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002C1E8
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??9CAppAudioSessionId@@QEBA_NAEBV0@@Z @ 0x18002A2AC (--9CAppAudioSessionId@@QEBA_NAEBV0@@Z.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x18002BC3C (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ?InitHashTable@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NI_N@Z @ 0x18002BCE4 (-InitHashTable@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTr.c)
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18002BDF8 (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        __int64 a1,
        const struct CAudioSessionInstanceId *a2,
        _QWORD *a3)
{
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  __int64 i; // rbx
  __int64 v9; // rax
  int v11; // eax

  v6 = CAudioSessionInstanceIdTraits::Hash(a2);
  v7 = v6 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    goto LABEL_6;
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v6 % *(_DWORD *)(a1 + 16))); i; i = *(_QWORD *)(i + 88) )
  {
    if ( *(_DWORD *)(i + 96) == v6 && !(unsigned int)_o__wcsicmp(*(_QWORD *)i, *(_QWORD *)a2) )
    {
      v11 = *(_DWORD *)(i + 64);
      if ( v11 == *((_DWORD *)a2 + 16)
        && (v11 || *(_DWORD *)(i + 56) == *((_DWORD *)a2 + 14))
        && !CAppAudioSessionId::operator!=(i + 8, (__int64)a2 + 8) )
      {
        break;
      }
    }
  }
  if ( i )
  {
    *(_QWORD *)(i + 80) = *a3;
  }
  else
  {
LABEL_6:
    if ( !*(_QWORD *)a1
      && !ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::InitHashTable(
            (void **)a1,
            *(_DWORD *)(a1 + 16),
            1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v9 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
           a1,
           (__int64)a2,
           v7,
           v6);
    i = v9;
    try
    {
      *(_QWORD *)(v9 + 80) = *a3;
    }
    catch ( ... )
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
        a1,
        v9);
      throw;
    }
  }
  return i;
}
