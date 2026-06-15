/*
 * XREFs of ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z @ 0x18009D12C
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x18009E8F0 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

struct CApplication *__fastcall TsSessionIdGetActiveMediaAppById(DWORD a1, wchar_t *String2)
{
  __int64 v4; // rdi
  struct TSSession *v5; // rcx
  _QWORD *Next; // rax
  __int64 v7; // rbx
  struct TSSession *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 0, 0LL, &v9) )
  {
    v5 = (struct TSSession *)*((_QWORD *)v9 + 13);
    v9 = v5;
    if ( v5 )
    {
      while ( 1 )
      {
        Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v5, (_QWORD **)&v9);
        v7 = *Next;
        if ( !_wcsicmp(*(const wchar_t **)(*Next + 16LL), String2) )
          break;
        if ( !v9 )
          goto LABEL_7;
      }
      v4 = v7;
    }
  }
LABEL_7:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return (struct CApplication *)v4;
}
