/*
 * XREFs of ?TsSessionIdIsMuted@@YAHK@Z @ 0x18001A4E8
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180013304 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdIsMuted(DWORD SessionId)
{
  unsigned int v2; // edi
  struct TSSession *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(SessionId, 1, 0LL, &v4) )
    v2 = *((_DWORD *)v4 + 13);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v2;
}
