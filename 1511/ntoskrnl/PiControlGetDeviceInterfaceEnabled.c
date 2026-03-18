/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x14043F444
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404390E4 (PiControlMakeUserModeCallersCopy.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  int Object; // edi
  signed __int64 *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rtt
  ULONG_PTR v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _WORD v15[4]; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v14 = 0LL;
  v15[1] = v4;
  v15[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v14, 0LL, v15);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v14, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        v9 = (signed __int64 *)BugCheckParameter2;
        PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2);
        *((_BYTE *)a2 + 20) = v9[5] != 0;
        _m_prefetchw(v9);
        v10 = *v9;
        if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v11 = v10 - 16;
        else
          v11 = 0LL;
        if ( (v10 & 2) != 0
          || (v12 = *v9, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v11, v10)) )
        {
          v13 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2);
        }
        else
        {
          v13 = BugCheckParameter2;
        }
        KeAbPostRelease(v13);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v14, v15);
    if ( a4 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)Object;
  }
  return result;
}
