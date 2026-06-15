/*
 * XREFs of ??0CHostedAppInteractivityManager@@QEAA@XZ @ 0x180045A30
 * Callers:
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001110 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

CHostedAppInteractivityManager *__fastcall CHostedAppInteractivityManager::CHostedAppInteractivityManager(
        CHostedAppInteractivityManager *this)
{
  CHostedAppInteractivityManager *result; // rax

  ATL::CCriticalSection::CCriticalSection(&stru_1800E6430);
  dword_1800E6480 = 10;
  qword_1800E6458 = 0LL;
  qword_1800E6460 = 0LL;
  result = (CHostedAppInteractivityManager *)&stru_1800E6430;
  qword_1800E6468 = 0LL;
  xmmword_1800E6470 = 0LL;
  return result;
}
