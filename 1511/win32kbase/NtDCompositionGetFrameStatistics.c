/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1C006DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v4; // rdi
  DirectComposition::CConnection *v5; // rbx
  __int64 v6; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v8; // rbx
  struct _ERESOURCE *v9; // rsi
  unsigned __int64 v10; // r12
  LARGE_INTEGER PerformanceCounter; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  int v18; // [rsp+24h] [rbp-64h]
  __int128 v19; // [rsp+28h] [rbp-60h]
  __int128 v20; // [rsp+38h] [rbp-50h]
  LARGE_INTEGER v21; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+A8h] [rbp+20h]

  v4 = a1;
  if ( !a1 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    a1 = (unsigned __int64)W32UserProbeAddress;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *(_BYTE *)(a1 + 39) = *(_BYTE *)(a1 + 39);
  v5 = 0LL;
  v6 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v6 )
  {
    v8 = *(struct _ERESOURCE **)(v6 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v8, 1u);
    v5 = *(DirectComposition::CConnection **)(v6 + 24);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)v5);
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
    KeLeaveCriticalRegion();
  }
  if ( !v5 )
  {
    v9 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v9, 1u);
      v5 = DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
    if ( !v5 )
      return 3221225506LL;
  }
  do
  {
    v10 = *((_QWORD *)v5 + 21);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = *((unsigned int *)v5 + 44);
    *(_QWORD *)&v19 = v10;
    DWORD2(v19) = v12;
    HIDWORD(v19) = *((_DWORD *)v5 + 45);
    *(LARGE_INTEGER *)&v20 = PerformanceCounter;
    *((union _LARGE_INTEGER *)&v20 + 1) = DirectComposition::CConnection::s_qpcFrequency;
    if ( (_DWORD)v12 )
    {
      v13 = DirectComposition::CConnection::s_qpcFrequency.QuadPart * *((unsigned int *)v5 + 45);
      v14 = v12 == 60 ? v13 / 0x3C : v13 / (unsigned int)v12;
      if ( v14 )
      {
        v15 = -1LL;
        if ( PerformanceCounter.QuadPart >= v10 )
        {
          v16 = PerformanceCounter.QuadPart - v10;
          if ( v14 == 55210 )
            v15 = v16 / 0xD7AA;
          else
            v15 = v16 / v14;
        }
        PerformanceCounter.QuadPart = v10 + v14 * (v15 + 2);
      }
    }
    v21 = PerformanceCounter;
  }
  while ( v10 != *((_QWORD *)v5 + 21) );
  v23 = DirectComposition::CConnection::s_minSafeFeatureLevel;
  v18 = DirectComposition::CConnection::s_maxHardwareFeatureLevel;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(v5);
  if ( v4 + 40 < v4 || v4 + 40 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)v4 = v19;
  *(_OWORD *)(v4 + 16) = v20;
  *(LARGE_INTEGER *)(v4 + 32) = v21;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v23;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v18;
  return 0LL;
}
