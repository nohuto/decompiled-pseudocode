/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C004E0D0
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004DEE4 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  PVOID v4; // rsi
  unsigned int v5; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState");
  if ( UserIsCurrentProcessDwm(v2) )
  {
    v3 = ObReferenceObjectByHandle(
           *((HANDLE *)gpSfmState + 3),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v4 = Object;
    v5 = v3;
    if ( v3 >= 0 )
    {
      v5 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v4);
    }
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
  return v5;
}
