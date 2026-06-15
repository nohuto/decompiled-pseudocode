/*
 * XREFs of ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140009F50
 * Callers:
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x1400072C0 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall GraphStreamingResourceManager::RemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 80LL))((char *)this - 8);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
