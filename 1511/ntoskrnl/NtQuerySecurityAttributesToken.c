/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140433870
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepReferenceTokenByHandle @ 0x14008A010 (SepReferenceTokenByHandle.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140433B60 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  char v9; // r13
  unsigned __int8 v10; // r15
  unsigned __int64 v11; // rdx
  ULONG64 v12; // rcx
  unsigned __int64 v13; // rcx
  PULONG v14; // r14
  PULONG v15; // rdx
  ULONG64 v16; // rcx
  unsigned __int64 v17; // rcx
  NTSTATUS SecurityAttributesToken; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v20; // rbx
  char v21; // dl
  struct _KTHREAD *v22; // rax
  __int16 v23; // cx
  $E81C3296F15336D9BF9B2D43BB137B25 *v24; // rcx
  size_t Size; // [rsp+28h] [rbp-60h]
  _BYTE v27[4]; // [rsp+40h] [rbp-48h] BYREF
  int v28; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v28 = 0;
  v9 = 0;
  Object = 0LL;
  v31 = 0LL;
  v27[0] = 0;
  v10 = KeGetCurrentThread()->gap0[10];
  v27[1] = v10;
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_40:
    SecurityAttributesToken = -1073741811;
    v28 = -1073741811;
LABEL_39:
    v20 = (PERESOURCE *)Object;
    goto LABEL_25;
  }
  if ( Buffer )
    goto LABEL_40;
LABEL_3:
  if ( v10 )
  {
    if ( Length )
    {
      v11 = (unsigned __int64)Buffer;
      if ( ((unsigned __int8)Buffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)Buffer + Length - 1;
      if ( (unsigned __int64)Buffer > v12 || v12 >= MmUserProbeAddress )
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
    v14 = ReturnLength;
    v15 = ReturnLength;
    if ( ((unsigned __int8)ReturnLength & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (ULONG64)ReturnLength + 3;
    if ( ReturnLength >= (PULONG)((char *)ReturnLength + 3) || v16 >= MmUserProbeAddress )
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
        v15 = (PULONG)(((unsigned __int64)v15 & 0xFFFFFFFFFFFFF000uLL) + 4096);
      }
      while ( v15 != (PULONG)v17 );
    }
  }
  else
  {
    v14 = ReturnLength;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(Attributes, NumberOfAttributes, v10, &P);
  v28 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_39;
  SecurityAttributesToken = SepReferenceTokenByHandle((char *)TokenHandle, 8u, v10, &Object, v27, &v31);
  v28 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_39;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LODWORD(Size) = Length;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v20,
                              v21,
                              (__int64)P,
                              NumberOfAttributes,
                              Buffer,
                              Size,
                              v14);
  v28 = SecurityAttributesToken;
LABEL_25:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v20[6]);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23 )
    {
      v24 = &v22->152;
      if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v24->ApcState.ApcListHead[0].Flink != v24 && !v22->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v24);
    }
    v20 = (PERESOURCE *)Object;
    SecurityAttributesToken = v28;
  }
  if ( v20 )
    ObfDereferenceObject(v20);
  return SecurityAttributesToken;
}
