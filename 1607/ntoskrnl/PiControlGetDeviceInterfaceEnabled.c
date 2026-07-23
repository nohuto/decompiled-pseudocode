/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1404E3DC0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  signed __int64 v5; // rbx
  __int64 result; // rax
  int Object; // esi
  signed __int64 *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  ULONG_PTR v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  _WORD v18[4]; // [rsp+38h] [rbp-18h] BYREF
  void *v19; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v5 = 0LL;
  v17 = 0LL;
  v18[1] = v4;
  v18[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v19, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v17, 0LL, v18);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v17, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        v10 = (signed __int64 *)BugCheckParameter2;
        PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2);
        *((_BYTE *)a2 + 20) = v10[5] != 0;
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v5 = v11 - 16;
        if ( (v11 & 2) != 0
          || (v12 = *v10, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v11)) )
        {
          v13 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2);
        }
        else
        {
          v13 = BugCheckParameter2;
        }
        KeAbPostRelease(v13);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v17, v18);
    PiControlFreeUserModeCallersBuffer(a4, v19);
    return (unsigned int)Object;
  }
  return result;
}
