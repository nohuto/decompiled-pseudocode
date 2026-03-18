/*
 * XREFs of PfSnIsHostingApplication @ 0x1403E6324
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1403E64A0 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1400064A4 (PfLockSharedAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     wcsstr @ 0x14014F14C (wcsstr.c)
 */

char __fastcall PfSnIsHostingApplication(wchar_t *SubStr)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  char v4; // si
  const wchar_t *v5; // rcx
  wchar_t *v6; // rbx
  wchar_t *v7; // rax
  wchar_t *v9; // rdx

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( SubStr[v3] );
  v4 = 0;
  PfLockSharedAcquire((volatile signed __int64 *)qword_140328538);
  do
    ++v1;
  while ( Str[v1] );
  v5 = Str;
  v6 = (wchar_t *)&PfGlobals + v1 + 120;
  while ( 1 )
  {
    v7 = wcsstr(v5, SubStr);
    if ( !v7 || v7 < Str || v7 >= v6 )
      break;
    if ( v7 == Str || *(v7 - 1) == 44 )
    {
      v9 = &v7[(unsigned int)v3];
      if ( v9 == v6 || *v9 == 44 )
      {
        v4 = 1;
        break;
      }
    }
    v5 = v7 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140328538, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140328538);
  KeAbPostRelease((ULONG_PTR)qword_140328538);
  KeLeaveCriticalRegion();
  return v4;
}
