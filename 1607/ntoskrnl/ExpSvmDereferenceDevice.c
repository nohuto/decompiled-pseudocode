/*
 * XREFs of ExpSvmDereferenceDevice @ 0x14022F21C
 * Callers:
 *     ExFreeSvmAsid @ 0x140075618 (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_QWORD *P)
{
  unsigned int v2; // esi
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v3, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v5 )
    v5[26] |= 1u;
  if ( (*((_DWORD *)P + 6))-- == 1 )
  {
    v7 = P[5];
    v11[0] = 7;
    ((void (__fastcall *)(__int64, int *))P[10])(v7, v11);
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[7])(ExpSvmIommuSystemContext, P[13]);
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v8 = (_QWORD *)*P;
    v9 = (PVOID *)P[1];
    if ( *(_QWORD **)(*P + 8LL) != P || *v9 != P )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    ((void (__fastcall *)(_QWORD))P[7])(P[5]);
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  return v2;
}
