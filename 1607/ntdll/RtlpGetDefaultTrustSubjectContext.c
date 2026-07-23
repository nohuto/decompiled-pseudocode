/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x18006B240
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B004 (RtlpGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSidDominatesForTrust @ 0x18006B3B0 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x18006B620 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(HANDLE TokenHandle, _QWORD *a2)
{
  PSID *v2; // rsi
  void *ProcessHeap; // r14
  NTSTATUS v6; // edi
  ULONG v7; // ecx
  _QWORD *Heap; // rax
  void *v9; // rbx
  BOOLEAN DominatesTrust[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-85h] BYREF
  ULONG TokenInformationLength; // [rsp+38h] [rbp-81h] BYREF
  PSID TokenInformation[10]; // [rsp+40h] [rbp-79h] BYREF
  PSID Sid2[10]; // [rsp+90h] [rbp-29h] BYREF

  DominatesTrust[0] = 0;
  ReturnLength = 76;
  TokenInformationLength = 76;
  v2 = TokenInformation;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v6 = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x29u, TokenInformation, 0x4Cu, &ReturnLength);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !TokenHandle )
    goto LABEL_16;
  v6 = NtQueryInformationToken(TokenHandle, 0x29u, Sid2, TokenInformationLength, &TokenInformationLength);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v6 = RtlSidDominatesForTrust(TokenInformation[0], Sid2[0], DominatesTrust);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( DominatesTrust[0] )
  {
    v7 = TokenInformationLength;
    v2 = Sid2;
    ReturnLength = TokenInformationLength;
  }
  else
  {
LABEL_16:
    v7 = ReturnLength;
  }
  Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v7);
  v9 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  if ( !*v2 )
  {
    *Heap = 0LL;
LABEL_10:
    *a2 = v9;
    v9 = 0LL;
    goto LABEL_11;
  }
  *Heap = Heap + 1;
  v6 = RtlCopySid(ReturnLength - 8, Heap + 1, *v2);
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    RtlFreeHeap(ProcessHeap, 0, v9);
  return (unsigned int)v6;
}
