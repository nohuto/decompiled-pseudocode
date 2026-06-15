/*
 * XREFs of ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180003E3C
 * Callers:
 *     PbmIsPlaying @ 0x1800036EC (PbmIsPlaying.c)
 * Callees:
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180004A20 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsPlaying(CApplicationManager *this, struct CProcess *a2, bool a3)
{
  CApplicationManager *v4; // rsi
  unsigned int IsPlaying; // ebx
  int v6; // edx
  struct CApplication *v7; // rcx
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF
  struct CApplication *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = this;
  v4 = g_ApplicationManager;
  IsPlaying = 0;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v9,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24),
    a3);
  v7 = (struct CApplication *)*((_QWORD *)a2 + 28);
  v10 = v7;
  if ( v7 )
    goto LABEL_2;
  if ( CApplicationManager::GetApplication(
         v4,
         *((const unsigned __int16 **)a2 + 23),
         *((_DWORD *)a2 + 43),
         &v10,
         0,
         0LL) >= 0 )
  {
    v7 = v10;
LABEL_2:
    IsPlaying = CApplication::IsPlaying(v7, v6);
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
  return IsPlaying;
}
