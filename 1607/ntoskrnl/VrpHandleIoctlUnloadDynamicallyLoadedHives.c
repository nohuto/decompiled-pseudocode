/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140614240
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     ZwUnloadKey2 @ 0x14015D870 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x140612ED4 (VrpCleanupNamespace.c)
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        ULONGLONG pullResult,
        __int64 a6)
{
  int JobSilo; // ebx
  int PermanentSiloContext; // eax
  __int64 v8; // rdi
  ULONGLONG v9; // rax
  ULONGLONG i; // rbx
  ULONGLONG v11; // rdx
  UNICODE_STRING *v12; // r14
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  Object = 0LL;
  a6 = 0LL;
  pullResult = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      PermanentSiloContext = PsGetPermanentSiloContext(pullResult, gVregSiloContextSlot, (unsigned __int64 *)&a6);
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext >= 0 )
      {
        v8 = a6;
        VrpLockJobContextExclusive(a6);
        if ( *(_DWORD *)(v8 + 84) )
        {
          JobSilo = -1073741738;
          VrpUnlockJobContextExclusive(v8);
          goto LABEL_21;
        }
        v9 = *(_QWORD *)(v8 + 48);
        for ( i = 0LL; i < v9; v9 = *(_QWORD *)(v8 + 48) )
        {
          v11 = 0LL;
          if ( i < v9 )
          {
            if ( ULongLongMult(*(_QWORD *)(v8 + 40), i, &pullResult) < 0
              || (v11 = *(_QWORD *)(v8 + 72) + pullResult, v11 < *(_QWORD *)(v8 + 72)) )
            {
              v11 = 0LL;
            }
          }
          v12 = *(UNICODE_STRING **)v11;
          if ( (*(_DWORD *)(*(_QWORD *)v11 + 48LL) & 1) != 0 )
          {
            TargetKey.RootDirectory = 0LL;
            TargetKey.ObjectName = v12 + 1;
            TargetKey.Length = 48;
            TargetKey.Attributes = 576;
            *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
            ZwUnloadKey2(&TargetKey, 1u);
            VrpDestroyNamespaceNode(v8);
          }
          else
          {
            ++i;
          }
        }
        VrpCleanupNamespace(v8);
        VrpUnlockJobContextExclusive(v8);
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_21;
      }
      JobSilo = 0;
    }
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
