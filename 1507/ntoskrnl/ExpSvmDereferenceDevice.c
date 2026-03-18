/*
 * XREFs of ExpSvmDereferenceDevice @ 0x140265480
 * Callers:
 *     ExFreeSvmAsid @ 0x14012A494 (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  int v15[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v6, (ULONG_PTR)&ExpSvmDeviceListLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (*((_DWORD *)P + 6))-- == 1 )
  {
    v11 = P[5];
    v15[0] = 7;
    ((void (__fastcall *)(__int64, int *))P[10])(v11, v15);
    v5 = (*((__int64 (__fastcall **)(__int64, _QWORD))HalIommuDispatch[0] + 7))(ExpSvmIommuSystemContext, P[13]);
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v12 = (_QWORD *)*P;
    v13 = (PVOID *)P[1];
    if ( *(_QWORD **)(*P + 8LL) != P || *v13 != P )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    ((void (__fastcall *)(_QWORD))P[7])(P[5]);
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  return v5;
}
