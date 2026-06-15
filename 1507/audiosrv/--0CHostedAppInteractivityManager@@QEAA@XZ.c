/*
 * XREFs of ??0CHostedAppInteractivityManager@@QEAA@XZ @ 0x180041184
 * Callers:
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001130 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

CHostedAppInteractivityManager *__fastcall CHostedAppInteractivityManager::CHostedAppInteractivityManager(
        CHostedAppInteractivityManager *this)
{
  CHostedAppInteractivityManager *result; // rax

  ATL::CCriticalSection::CCriticalSection(&stru_1800E8430);
  dword_1800E8480 = 10;
  qword_1800E8458 = 0LL;
  qword_1800E8460 = 0LL;
  result = (CHostedAppInteractivityManager *)&stru_1800E8430;
  qword_1800E8468 = 0LL;
  xmmword_1800E8470 = 0LL;
  return result;
}
