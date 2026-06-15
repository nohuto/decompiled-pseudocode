/*
 * XREFs of AudioSessionDestroy @ 0x180031510
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180018A00 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionDestroy(CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rbx
  unsigned __int32 v3; // edi
  __int64 (__fastcall *v4)(CServerAudioSessionControl *); // rsi
  __int64 (__fastcall *v6)(CServerAudioSessionControl *); // rsi

  v1 = *a1;
  v3 = _InterlockedDecrement((volatile signed __int32 *)*a1 + 6);
  if ( !v3 )
  {
    v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v1 + 104LL);
    if ( v6 == CServerAudioSessionControl::Dispose )
      CServerAudioSessionControl::Dispose(v1);
    else
      v6(v1);
  }
  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v1 + 16LL);
  if ( v4 == CServerAudioSessionControl::Release )
    CServerAudioSessionControl::Release(v1);
  else
    v4(v1);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      90LL,
      &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      v3);
  }
  *a1 = 0LL;
  return 0LL;
}
