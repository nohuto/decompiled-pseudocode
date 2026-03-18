/*
 * XREFs of NtCompareTokens @ 0x1403BE070
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140003900 (SeTokenIsWriteRestricted.c)
 *     SepAcquireOrderedReadLocks @ 0x1400040E0 (SepAcquireOrderedReadLocks.c)
 *     SepReleaseOrderedReadLocks @ 0x140004154 (SepReleaseOrderedReadLocks.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SepCompareSidAndAttributeArrays @ 0x1404BD624 (SepCompareSidAndAttributeArrays.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404C288C (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     SepCompareClaimAttributes @ 0x1404C44E8 (SepCompareClaimAttributes.c)
 */

NTSTATUS __stdcall NtCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  PBOOLEAN v3; // r13
  bool v6; // r12
  KPROCESSOR_MODE PreviousMode; // bl
  _BYTE *v8; // rcx
  int InformationToken; // r15d
  unsigned int *v10; // rsi
  unsigned int *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r13
  void *v14; // rcx
  void *v15; // rdx
  BOOLEAN IsRestricted; // bl
  BOOLEAN v18; // bl
  PVOID TokenInformation; // [rsp+30h] [rbp-58h] BYREF
  PBOOLEAN v20; // [rsp+38h] [rbp-50h]
  unsigned int *v21; // [rsp+40h] [rbp-48h]
  PVOID Token; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  char v24; // [rsp+A8h] [rbp+20h]

  v3 = Equal;
  v20 = Equal;
  Object[1] = 0LL;
  v21 = 0LL;
  v6 = 0;
  v24 = 0;
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
  v10 = (unsigned int *)Token;
  if ( InformationToken < 0 )
  {
    v10 = 0LL;
LABEL_38:
    v11 = v21;
    goto LABEL_26;
  }
  if ( FirstTokenHandle == SecondTokenHandle )
  {
    v6 = 1;
    goto LABEL_38;
  }
  InformationToken = ObReferenceObjectByHandle(
                       SecondTokenHandle,
                       8u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       PreviousMode,
                       Object,
                       0LL);
  v11 = (unsigned int *)Object[0];
  if ( InformationToken < 0 )
  {
    v11 = 0LL;
  }
  else if ( v10 == Object[0] )
  {
    v6 = 1;
  }
  else
  {
    SepAcquireOrderedReadLocks((unsigned __int64)v10, (unsigned __int64)Object[0]);
    v24 = 1;
    v12 = *((_QWORD *)v11 + 19);
    v13 = *((_QWORD *)v10 + 19);
    if ( RtlEqualSid(*(PSID *)v13, *(PSID *)v12) )
    {
      if ( ((*(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v13 + 8)) & 0x14) == 0 )
      {
        InformationToken = SeQueryInformationToken(v10, TokenIsAppContainer, &TokenInformation);
        if ( InformationToken >= 0 )
        {
          InformationToken = SeQueryInformationToken(v11, TokenIsAppContainer, (PVOID *)((char *)&TokenInformation + 4));
          if ( InformationToken >= 0
            && (_DWORD)TokenInformation == HIDWORD(TokenInformation)
            && (!(_DWORD)TokenInformation
             || RtlEqualSid(*((PSID *)v10 + 98), *((PSID *)v11 + 98))
             && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                   *((_QWORD *)v10 + 99),
                                   v10[200],
                                   *((_QWORD *)v11 + 99),
                                   v11[200])) )
          {
            v14 = (void *)*((_QWORD *)v10 + 138);
            v15 = (void *)*((_QWORD *)v11 + 138);
            if ( (v14 != 0LL) == (v15 != 0LL) && (!v14 || RtlEqualSid(v14, v15)) )
            {
              IsRestricted = SeTokenIsRestricted(v10);
              if ( IsRestricted == SeTokenIsRestricted(v11) )
              {
                if ( !IsRestricted
                  || (v18 = SeTokenIsWriteRestricted(v10), v18 == SeTokenIsWriteRestricted(v11))
                  && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                        *((_QWORD *)v10 + 20),
                                        v10[32],
                                        *((_QWORD *)v11 + 20),
                                        v11[32]) )
                {
                  if ( *((_QWORD *)v10 + 9) == *((_QWORD *)v11 + 9)
                    && *((_QWORD *)v10 + 8) == *((_QWORD *)v11 + 8)
                    && v10[53] == v11[53]
                    && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                          *((_QWORD *)v10 + 19) + 16LL,
                                          v10[31] - 1,
                                          *((_QWORD *)v11 + 19) + 16LL,
                                          v11[31] - 1)
                    && (unsigned __int8)SepCompareClaimAttributes(*((_QWORD *)v10 + 137), *((_QWORD *)v11 + 137)) )
                  {
                    v6 = (unsigned __int8)AuthzBasepCompareLegacySecurityAttributesInformation(
                                            *((_QWORD *)v10 + 97),
                                            *((_QWORD *)v11 + 97)) != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    v3 = v20;
  }
LABEL_26:
  if ( v24 )
    SepReleaseOrderedReadLocks((__int64)v10, (__int64)v11);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObfDereferenceObject(v11);
  *v3 = v6;
  return InformationToken;
}
