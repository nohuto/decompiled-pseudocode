/*
 * XREFs of VrpPreFlushKey @ 0x140615C38
 * Callers:
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x140464700 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x1400A0BF4 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+60h] [rbp-38h] BYREF

  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( stru_1402F3520.LevelPlus1 > 5 )
      TlgWrite(&stru_1402F3520, &unk_14027B4DF, &ActivityId, 0LL, 2u, &pData);
    return 3221226755LL;
  }
  else
  {
    if ( stru_1402F3520.LevelPlus1 > 5 )
      TlgWrite(&stru_1402F3520, &unk_14027B745, &ActivityId, 0LL, 2u, &v6);
    return 0LL;
  }
}
