/*
 * XREFs of ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x1800133BC
 * Callers:
 *     PbmIsPlaying @ 0x180016C40 (PbmIsPlaying.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x18000AD64 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x1800122B4 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsPlaying(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rsi
  unsigned int IsPlaying; // ebx
  CApplication *v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]
  CApplication *v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = this;
  v3 = g_ApplicationManager;
  IsPlaying = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (CApplication *)*((_QWORD *)a2 + 28);
  v9 = v5;
  if ( !v5 )
  {
    if ( (int)CApplicationManager::GetApplication(
                v3,
                *((const unsigned __int16 **)a2 + 23),
                *((_DWORD *)a2 + 43),
                &v9,
                0,
                0LL) < 0 )
      goto LABEL_5;
    v5 = v9;
  }
  IsPlaying = CApplication::IsPlaying(v5);
LABEL_5:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return IsPlaying;
}
