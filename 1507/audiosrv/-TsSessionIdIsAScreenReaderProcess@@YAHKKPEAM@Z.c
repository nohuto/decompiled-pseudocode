/*
 * XREFs of ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180007B50
 * Callers:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180012250 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdIsAScreenReaderProcess(unsigned int a1, int a2, float *a3)
{
  unsigned int v6; // edi
  __int64 *i; // rax
  struct TSSession *v9; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v9) )
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
