/*
 * XREFs of ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001D14C
 * Callers:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18000EB48 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x18000FF20 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014404 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdIsAScreenReaderProcess(DWORD SessionId, int a2, float *a3)
{
  unsigned int v6; // edi
  __int64 *i; // rax
  struct TSSession *v9; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(SessionId, 1, 0LL, &v9) )
  {
    for ( i = (__int64 *)*((_QWORD *)v9 + 22); i && *((_DWORD *)i + 4) != a2; i = (__int64 *)*i )
      ;
    LOBYTE(v6) = i != 0LL;
    if ( a3 )
      *a3 = *((float *)v9 + 56);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v6;
}
