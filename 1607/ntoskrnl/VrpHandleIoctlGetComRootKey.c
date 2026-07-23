/*
 * XREFs of VrpHandleIoctlGetComRootKey @ 0x140613638
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpLockJobContextShared @ 0x140613034 (VrpLockJobContextShared.c)
 *     VrpUnlockJobContextShared @ 0x140613150 (VrpUnlockJobContextShared.c)
 *     VrpTranslatePath @ 0x140616A6C (VrpTranslatePath.c)
 */

__int64 __fastcall VrpHandleIoctlGetComRootKey(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        HANDLE *a5,
        _DWORD *a6)
{
  PVOID v9; // rsi
  int JobSilo; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rdi
  ULONG v14; // eax
  HANDLE *v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-19h] BYREF
  PVOID v18[2]; // [rsp+60h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+6Fh] BYREF

  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  memset(v18, 0, sizeof(v18));
  v9 = 0LL;
  Object = 0LL;
  v16 = 0LL;
  KeyHandle = 0LL;
  if ( a2 < 8 )
  {
    JobSilo = -1073741811;
    goto LABEL_9;
  }
  v11 = ObReferenceObjectByHandleWithTag(*a1, 4u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  v9 = Object;
  JobSilo = v11;
  if ( v11 >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetPermanentSiloContext(0LL, gVregSiloContextSlot, (unsigned __int64 *)&v16);
      if ( JobSilo >= 0 )
      {
        v12 = v16;
        VrpLockJobContextShared(v16);
        if ( *(_DWORD *)(v12 + 84) )
        {
          JobSilo = -1073741738;
LABEL_8:
          VrpUnlockJobContextShared(v12);
          goto LABEL_9;
        }
        JobSilo = VrpTranslatePath(gComRootKey, v18, 0LL, 0LL, v12, 0LL);
        if ( JobSilo < 0 )
          goto LABEL_8;
        v14 = 576;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( a3 == 1 )
          v14 = 1088;
        ObjectAttributes.Attributes = v14;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
        JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
        if ( JobSilo < 0 )
          goto LABEL_8;
        VrpUnlockJobContextShared(v12);
        JobSilo = 0;
        v15 = a5;
        *a6 = 8;
        *v15 = KeyHandle;
      }
    }
  }
LABEL_9:
  if ( v18[1] )
    ExFreePoolWithTag(v18[1], 0x67655256u);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x52566D43u);
  return (unsigned int)JobSilo;
}
