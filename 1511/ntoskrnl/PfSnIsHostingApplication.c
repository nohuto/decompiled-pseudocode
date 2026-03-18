/*
 * XREFs of PfSnIsHostingApplication @ 0x1404D6338
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1404D64B4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     PfLockSharedAcquire @ 0x1400FAF50 (PfLockSharedAcquire.c)
 *     wcsstr @ 0x140145D70 (wcsstr.c)
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
  PfLockSharedAcquire((volatile signed __int64 *)qword_140305738);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140305738, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140305738);
  KeAbPostRelease((ULONG_PTR)qword_140305738);
  KeLeaveCriticalRegion();
  return v4;
}
