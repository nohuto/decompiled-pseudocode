/*
 * XREFs of ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009640
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180004DA8 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180005984 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180006150 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  errno_t v7; // eax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = v5 - v2;
  if ( v6 )
  {
    v7 = memmove_s((void *const)(*a1 + 8 * a2), 8 * v6, (const void *const)(*a1 + 8 * v2), 8 * v6);
    if ( v7 )
    {
      if ( v7 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v7 == 22 || v7 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v7 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  --a1[1];
}
