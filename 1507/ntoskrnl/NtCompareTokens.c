/*
 * XREFs of NtCompareTokens @ 0x1404107DC
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeTokenIsWriteRestricted @ 0x140125C48 (SeTokenIsWriteRestricted.c)
 *     SepCompareClaimAttributes @ 0x14041044C (SepCompareClaimAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404104AC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     SepCompareSidAndAttributeArrays @ 0x140411698 (SepCompareSidAndAttributeArrays.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  bool v5; // r15
  char v6; // r13
  KPROCESSOR_MODE PreviousMode; // di
  _BYTE *v8; // rcx
  int InformationToken; // r12d
  PVOID v10; // rbx
  bool v11; // cf
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rax
  unsigned int *v14; // rdi
  unsigned int *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r13
  void *v18; // rcx
  void *v19; // rdx
  BOOLEAN IsRestricted; // bl
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  struct _KTHREAD *v26; // rax
  BOOLEAN v27; // bl
  PVOID TokenInformation; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v30; // [rsp+40h] [rbp-48h]
  PVOID v31; // [rsp+48h] [rbp-40h]
  PBOOLEAN v32; // [rsp+50h] [rbp-38h]
  PVOID Token; // [rsp+A8h] [rbp+20h] BYREF

  v32 = Equal;
  v30 = 0LL;
  v31 = 0LL;
  v5 = 0;
  v6 = 0;
  TokenInformation = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = Equal;
    if ( (unsigned __int64)Equal >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
  }
  InformationToken = ObReferenceObjectByHandle(
                       FirstTokenHandle,
                       8u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       PreviousMode,
                       &Token,
                       0LL);
  v10 = Token;
  v30 = Token;
  if ( InformationToken < 0 )
  {
    v30 = 0LL;
    goto LABEL_30;
  }
  if ( FirstTokenHandle == SecondTokenHandle )
    goto LABEL_46;
  InformationToken = ObReferenceObjectByHandle(
                       SecondTokenHandle,
                       8u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       PreviousMode,
                       &Object,
                       0LL);
  v31 = Object;
  if ( InformationToken < 0 )
  {
    v31 = 0LL;
    goto LABEL_30;
  }
  v11 = v10 < Object;
  if ( v10 == Object )
  {
LABEL_46:
    v5 = 1;
    goto LABEL_30;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v11 )
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = (unsigned int *)Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v15 = (unsigned int *)Token;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v15 = (unsigned int *)Token;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    v14 = (unsigned int *)Object;
  }
  v16 = *((_QWORD *)v14 + 19);
  v17 = *((_QWORD *)v15 + 19);
  if ( RtlEqualSid(*(PSID *)v17, *(PSID *)v16) )
  {
    if ( ((*(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v17 + 8)) & 0x14) == 0 )
    {
      InformationToken = SeQueryInformationToken(v15, TokenIsAppContainer, &TokenInformation);
      if ( InformationToken >= 0 )
      {
        InformationToken = SeQueryInformationToken(v14, TokenIsAppContainer, (PVOID *)((char *)&TokenInformation + 4));
        if ( InformationToken >= 0
          && (_DWORD)TokenInformation == HIDWORD(TokenInformation)
          && (!(_DWORD)TokenInformation
           || RtlEqualSid(*((PSID *)v15 + 98), *((PSID *)v14 + 98))
           && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                 *((_QWORD *)v15 + 99),
                                 v15[200],
                                 *((_QWORD *)v14 + 99),
                                 v14[200])) )
        {
          v18 = (void *)*((_QWORD *)v15 + 138);
          v19 = (void *)*((_QWORD *)v14 + 138);
          if ( (v18 != 0LL) == (v19 != 0LL) && (!v18 || RtlEqualSid(v18, v19)) )
          {
            IsRestricted = SeTokenIsRestricted(v15);
            if ( IsRestricted == SeTokenIsRestricted(v14) )
            {
              if ( !IsRestricted
                || (v27 = SeTokenIsWriteRestricted(v15), v27 == SeTokenIsWriteRestricted(v14))
                && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                      *((_QWORD *)v15 + 20),
                                      v15[32],
                                      *((_QWORD *)v14 + 20),
                                      v14[32]) )
              {
                if ( *((_QWORD *)v15 + 9) == *((_QWORD *)v14 + 9)
                  && *((_QWORD *)v15 + 8) == *((_QWORD *)v14 + 8)
                  && v15[53] == v14[53]
                  && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                        *((_QWORD *)v15 + 19) + 16LL,
                                        v15[31] - 1,
                                        *((_QWORD *)v14 + 19) + 16LL,
                                        v14[31] - 1)
                  && SepCompareClaimAttributes(*((unsigned int **)v15 + 137), *((unsigned int **)v14 + 137)) )
                {
                  v5 = AuthzBasepCompareLegacySecurityAttributesInformation(*((int **)v15 + 97), *((_QWORD *)v14 + 97));
                }
              }
            }
          }
        }
      }
    }
  }
  v6 = 1;
LABEL_30:
  if ( v6 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v30 + 6));
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExReleaseResourceLite(*((PERESOURCE *)v31 + 6));
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v30 )
    ObfDereferenceObject(v30);
  if ( v31 )
    ObfDereferenceObject(v31);
  *v32 = v5;
  return InformationToken;
}
