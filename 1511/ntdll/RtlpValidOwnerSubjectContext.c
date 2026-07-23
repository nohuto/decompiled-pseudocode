/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x18005DC30
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEqualSid @ 0x18005DDF0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A7390 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7550 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, void *a2, char a3, NTSTATUS *a4)
{
  char v4; // bl
  void *ProcessHeap; // r13
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  PSID *Heap; // r14
  unsigned int v13; // edi
  PSID *v14; // r15
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  BOOLEAN v17; // cl
  BOOLEAN Result[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG TokenInformationLength; // [rsp+34h] [rbp-85h] BYREF
  HANDLE TokenHandle[2]; // [rsp+38h] [rbp-81h] BYREF
  HANDLE ClientToken; // [rsp+48h] [rbp-71h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-69h] BYREF
  PSID TokenInformation[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  ClientToken = a1;
  if ( a2 )
  {
    if ( a3 )
    {
      v15 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, TokenHandle);
      *a4 = v15;
      if ( v15 < 0 )
        return 0;
    }
    else
    {
      TokenHandle[0] = a1;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(TokenHandle[0], 1u, TokenInformation, 0x54u, &TokenInformationLength);
    *a4 = v9;
    if ( v9 >= 0 )
    {
      if ( RtlEqualSid(a2, TokenInformation[0]) )
      {
        if ( a3 )
          NtClose(TokenHandle[0]);
        return 1;
      }
      v11 = NtQueryInformationToken(TokenHandle[0], 2u, 0LL, 0, &TokenInformationLength);
      *a4 = v11;
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
      {
        Heap = (PSID *)RtlAllocateHeap(ProcessHeap, 0, TokenInformationLength);
        if ( Heap )
        {
          *a4 = NtQueryInformationToken(TokenHandle[0], 2u, Heap, TokenInformationLength, &TokenInformationLength);
          if ( a3 )
            NtClose(TokenHandle[0]);
          if ( *a4 >= 0 )
          {
            v13 = 0;
            if ( !*(_DWORD *)Heap )
              goto LABEL_30;
            v14 = Heap + 1;
            while ( !RtlEqualSid(a2, *v14) )
            {
              ++v13;
              v14 += 2;
              if ( v13 >= *(_DWORD *)Heap )
                goto LABEL_30;
            }
            if ( ((__int64)Heap[2 * v13 + 2] & 0x18) != 8 )
            {
LABEL_30:
              RtlFreeHeap(ProcessHeap, 0, Heap);
              TokenHandle[1] = (HANDLE)18;
              RequiredPrivileges.Privilege[0].Luid = (_LUID)18LL;
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v16 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Result);
              v17 = Result[0];
              if ( v16 < 0 )
                v17 = 0;
              if ( v17 )
                return 1;
              *a4 = -1073741734;
              return 0;
            }
            v4 = 1;
          }
          RtlFreeHeap(ProcessHeap, 0, Heap);
          return v4;
        }
        *a4 = -1073741801;
      }
    }
    if ( a3 )
      NtClose(TokenHandle[0]);
  }
  else
  {
    *a4 = -1073741734;
  }
  return 0;
}
