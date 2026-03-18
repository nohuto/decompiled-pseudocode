/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C004E600
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004E418 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle)
{
  HSEMAPHORE v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  PVOID v6; // rsi
  unsigned int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = ghsemDwmState;
  if ( ghsemDwmState )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
    v1 = ghsemDwmState;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", v1);
  if ( UserIsCurrentProcessDwm(v4, v3) )
  {
    v5 = ObReferenceObjectByHandle(
           *((HANDLE *)gpSfmState + 3),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v6 = Object;
    v7 = v5;
    if ( v5 >= 0 )
    {
      v7 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v6);
    }
  }
  else
  {
    v7 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
  return v7;
}
