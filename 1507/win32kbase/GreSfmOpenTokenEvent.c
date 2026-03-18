/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C000E5D0
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAII@Z @ 0x1C000E3E8 (-TokenThread@CTokenManager@@SAJPEAXPEAII@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v7; // eax
  PVOID v8; // rsi
  unsigned int v9; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v3 = ghsemDwmState;
  if ( ghsemDwmState )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
    v3 = ghsemDwmState;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState", (__int64)v3, a3);
  if ( (unsigned int)UserIsCurrentProcessDwm(v5) )
  {
    v7 = ObReferenceObjectByHandle(
           *((HANDLE *)gpSfmState + 3),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v8 = Object;
    v9 = v7;
    if ( v7 >= 0 )
    {
      v9 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v8);
    }
  }
  else
  {
    v9 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v6);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v9;
}
