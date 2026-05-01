/*
 * XREFs of ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800107B4
 * Callers:
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x18000F808 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800109F8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800100F8 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180010710 (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTask(int a1, unsigned int a2, int a3, __int64 a4)
{
  HMODULE *v8; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  int v11; // esi
  signed int v12; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-30h] BYREF
  HMODULE *v15[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+38h] BYREF

  v15[1] = (HMODULE *)-2LL;
  hHandle = 0LL;
  v8 = 0LL;
  v15[0] = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  if ( (a2 & 0x60) == 0 )
  {
    Event = hHandle;
    goto LABEL_11;
  }
  Event = Windows::Internal::ComTaskPool::s_hEventCache;
  if ( Windows::Internal::ComTaskPool::s_hEventCache )
  {
    hHandle = Windows::Internal::ComTaskPool::s_hEventCache;
    Windows::Internal::ComTaskPool::s_hEventCache = 0LL;
LABEL_11:
    v11 = Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock((__int64)Event, a1, a2, a3, a4, &v16, v15);
    v8 = v15[0];
    goto LABEL_12;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  hHandle = Event;
  if ( Event )
    goto LABEL_11;
  LastError = GetLastError();
  v11 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v11 = LastError;
  if ( v11 >= 0 )
    v11 = -2147467259;
LABEL_12:
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::TaskList *)&v16);
  if ( v11 >= 0 && v8 )
  {
    v11 = 0;
    if ( WaitForSingleObject(v8[7], 0xFFFFFFFF) == -1 )
    {
      v12 = GetLastError();
      v11 = (unsigned __int16)v12 | 0x80070000;
      if ( v12 <= 0 )
        v11 = v12;
      if ( v11 >= 0 )
        v11 = -2147467259;
    }
    if ( (*((_BYTE *)v8 + 132) & 2) == 0 )
    {
      CloseHandle(v8[7]);
      v8[7] = 0LL;
    }
    if ( v11 >= 0 )
      v11 = *((_DWORD *)v8 + 12);
  }
  if ( hHandle )
  {
    if ( v11 >= 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        while ( CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &hHandle, &dwindex) < 0 && WaitForSingleObject(hHandle, 0) )
          Sleep(1u);
      }
      else if ( (a2 & 0x20) != 0 )
      {
        WaitForSingleObject(hHandle, 0xFFFFFFFF);
      }
    }
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( !Windows::Internal::ComTaskPool::s_hEventCache )
    {
      Windows::Internal::ComTaskPool::s_hEventCache = hHandle;
      hHandle = 0LL;
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( hHandle )
      CloseHandle(hHandle);
  }
  if ( v8 )
    (*((void (__fastcall **)(HMODULE *))*v8 + 2))(v8);
  return (unsigned int)v11;
}
