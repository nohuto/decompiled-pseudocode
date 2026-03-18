/*
 * XREFs of OSNotifyCreateProcessor @ 0x1C0021458
 * Callers:
 *     OSNotifyCreate @ 0x1C000B400 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C00214D0 (ACPIBuildProcessorExtension.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  volatile signed __int64 *v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = (volatile signed __int32 *)AMLIGetParent(a1);
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 96LL);
  if ( !v5 )
    v5 = RootDeviceExtension;
  v6 = ACPIBuildProcessorExtension(a1, v5, &v9);
  if ( v6 >= 0 )
  {
    ACPIInitReferenceDeviceExtension(v9);
    _InterlockedOr64(v7, a2);
    v6 = 259;
  }
  AMLIDereferenceHandleEx(v4);
  return (unsigned int)v6;
}
