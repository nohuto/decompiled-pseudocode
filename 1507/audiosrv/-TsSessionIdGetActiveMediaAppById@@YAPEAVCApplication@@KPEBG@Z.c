/*
 * XREFs of ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z @ 0x18009FFCC
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x1800A17A8 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

struct CApplication *__fastcall TsSessionIdGetActiveMediaAppById(DWORD a1, char *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *Next; // rax
  __int64 v7; // r9
  char *v8; // rax
  char *v9; // r8
  int v10; // edx
  struct TSSession *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 0, 0LL, &v12) )
  {
    v5 = *((_QWORD *)v12 + 13);
    v12 = (struct TSSession *)v5;
    if ( v5 )
    {
      while ( 1 )
      {
        Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, (_QWORD **)&v12);
        v7 = *Next;
        v8 = *(char **)(*Next + 16LL);
        v9 = (char *)(a2 - v8);
        do
        {
          v10 = *(unsigned __int16 *)&v9[(_QWORD)v8];
          v5 = (unsigned int)*(unsigned __int16 *)v8 - v10;
          if ( (_DWORD)v5 )
            break;
          v8 += 2;
        }
        while ( v10 );
        if ( (_DWORD)v5 )
          break;
        if ( !v12 )
          goto LABEL_10;
      }
      v4 = v7;
    }
  }
LABEL_10:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return (struct CApplication *)v4;
}
