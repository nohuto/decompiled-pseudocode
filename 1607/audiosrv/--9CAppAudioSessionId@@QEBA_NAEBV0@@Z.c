/*
 * XREFs of ??9CAppAudioSessionId@@QEBA_NAEBV0@@Z @ 0x18002A2AC
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18002BFDC (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002C1E8 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 * Callees:
 *     <none>
 */

char __fastcall CAppAudioSessionId::operator!=(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v5; // bl
  __int64 v6; // rax

  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 != *(_DWORD *)(a2 + 40) )
    return 1;
  v5 = 0;
  if ( !v2 )
  {
    if ( (unsigned int)_o__wcsicmp(*(_QWORD *)a1, *(_QWORD *)a2) )
      return 1;
  }
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a2 + 16);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24);
  if ( v6 )
    return 1;
  return v5;
}
