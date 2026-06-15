/*
 * XREFs of ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180002674
 * Callers:
 *     PbmIsPlaying @ 0x180003A80 (PbmIsPlaying.c)
 * Callees:
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180003094 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsPlaying(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rsi
  unsigned int IsPlaying; // ebx
  int v5; // edx
  struct CApplication *v6; // rcx
  char *v8; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  struct CApplication *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = this;
  v3 = g_ApplicationManager;
  IsPlaying = 0;
  v8 = (char *)g_ApplicationManager + 24;
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v8);
  v6 = (struct CApplication *)*((_QWORD *)a2 + 28);
  v10 = v6;
  if ( v6 )
    goto LABEL_2;
  if ( CApplicationManager::GetApplication(
         v3,
         *((const unsigned __int16 **)a2 + 23),
         *((_DWORD *)a2 + 43),
         &v10,
         0,
         0LL) >= 0 )
  {
    v6 = v10;
LABEL_2:
    IsPlaying = CApplication::IsPlaying(v6, v5);
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v8);
  return IsPlaying;
}
