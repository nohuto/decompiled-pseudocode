/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140482AD0
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140485B70 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        char *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  char v9; // r13
  unsigned __int8 v10; // r15
  unsigned __int64 v11; // rdx
  ULONG64 v12; // rcx
  unsigned __int64 v13; // rcx
  _DWORD *v14; // r14
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rcx
  unsigned __int64 v17; // rcx
  int SecurityAttributesToken; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v20; // rbx
  char v21; // dl
  struct _KTHREAD *v22; // rax
  __int16 v23; // cx
  size_t Size; // [rsp+28h] [rbp-60h]
  _BYTE v26[4]; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v27 = 0;
  v9 = 0;
  Object = 0LL;
  v30 = 0LL;
  v26[0] = 0;
  v10 = KeGetCurrentThread()->gap0[10];
  v26[1] = v10;
  if ( a5 )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_39:
    SecurityAttributesToken = -1073741811;
    v27 = -1073741811;
LABEL_41:
    v20 = (PERESOURCE *)Object;
    goto LABEL_25;
  }
  if ( a4 )
    goto LABEL_39;
LABEL_3:
  if ( v10 )
  {
    if ( a5 )
    {
      v11 = (unsigned __int64)a4;
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)a4 + a5 - 1;
      if ( (unsigned __int64)a4 > v12 || v12 >= MmUserProbeAddress )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v11 = *(_BYTE *)v11;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v11 != v13 );
      }
    }
    v14 = (_DWORD *)a6;
    v15 = a6;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = a6 + 3;
    if ( a6 >= a6 + 3 || v16 >= MmUserProbeAddress )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
    }
  }
  else
  {
    v14 = (_DWORD *)a6;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, v10, &P);
  v27 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_41;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, v10, &Object, v26, &v30);
  v27 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_41;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LODWORD(Size) = a5;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx((__int64)v20, v21, (__int64)P, a3, a4, Size, v14);
  v27 = SecurityAttributesToken;
LABEL_25:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v20[6]);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = (PERESOURCE *)Object;
    SecurityAttributesToken = v27;
  }
  if ( v20 )
    ObfDereferenceObject(v20);
  return (unsigned int)SecurityAttributesToken;
}
