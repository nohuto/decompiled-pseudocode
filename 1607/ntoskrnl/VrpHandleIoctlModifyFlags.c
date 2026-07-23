/*
 * XREFs of VrpHandleIoctlModifyFlags @ 0x140613F34
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 */

__int64 __fastcall VrpHandleIoctlModifyFlags(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int JobSilo; // edi
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  __int64 v10; // rbx
  PVOID Object; // [rsp+68h] [rbp+28h] BYREF

  Object = 0LL;
  a5 = 0LL;
  a6 = 0LL;
  if ( a2 < 0x10 || (*(_DWORD *)(a1 + 8) & *(_DWORD *)(a1 + 12)) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
    v9 = Object;
    JobSilo = v8;
    if ( v8 >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        JobSilo = PsGetPermanentSiloContext(a6, gVregSiloContextSlot, (unsigned __int64 *)&a5);
        if ( JobSilo >= 0 )
        {
          v10 = a5;
          VrpLockJobContextExclusive(a5);
          *(_DWORD *)(v10 + 80) = ~*(_DWORD *)(a1 + 12) & (*(_DWORD *)(v10 + 80) | *(_DWORD *)(a1 + 8));
          VrpUnlockJobContextExclusive(a5);
          v9 = Object;
        }
      }
    }
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
