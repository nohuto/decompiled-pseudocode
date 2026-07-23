/*
 * XREFs of _ResCreateSecurityDescriptor @ 0x1800F9C9C
 * Callers:
 *     _CreateSecureFileMapping @ 0x1800F91D8 (_CreateSecureFileMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180020220 (RtlValidSecurityDescriptor.c)
 *     RtlValidAcl @ 0x180020360 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004B180 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x18004E850 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800642D0 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall ResCreateSecurityDescriptor(int a1, void *a2, ULONG *a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *Sid; // r15
  unsigned int v6; // edi
  SIZE_T v8; // r14
  unsigned __int8 *Heap; // rax
  unsigned __int8 *v10; // r13
  int Acl; // ebx
  ULONG v12; // eax
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rax
  int v15; // ecx
  ULONG v16; // ebx
  ACL *v17; // rax
  ACL *v18; // r14
  int v19; // eax
  LONG v20; // eax
  _SID_IDENTIFIER_AUTHORITY v21; // [rsp+30h] [rbp-40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v22; // [rsp+38h] [rbp-38h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-30h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v22.Value = 0;
  v4 = 0LL;
  *(_WORD *)&v22.Value[4] = 1280;
  Sid = 0LL;
  *(_DWORD *)v21.Value = 0;
  v6 = 1;
  *(_WORD *)&v21.Value[4] = 1280;
  if ( a1 == 2 )
  {
    if ( !a3 )
      return 0LL;
    if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) < 0 )
      return 0;
    v8 = RtlLengthRequiredSid(1u);
    Heap = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v10 = Heap;
    if ( !Heap )
      return 0;
    Acl = RtlInitializeSid(Heap, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *((_DWORD *)v10 + 2) = 0;
      v12 = RtlLengthRequiredSid(2u);
      v13 = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      v4 = v13;
      if ( !v13 )
      {
LABEL_9:
        Acl = -1073741801;
        goto LABEL_26;
      }
      Acl = RtlInitializeSid(v13, &v21, 2u);
      if ( Acl >= 0 )
      {
        *((_DWORD *)v4 + 2) = 32;
        *((_DWORD *)v4 + 3) = 544;
        v14 = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        Sid = v14;
        if ( !v14 )
          goto LABEL_9;
        Acl = RtlInitializeSid(v14, &v22, 1u);
        if ( Acl >= 0 )
        {
          v15 = Sid[1];
          *((_DWORD *)Sid + 2) = 19;
          v16 = 4 * (v10[1] + v4[1] + v15) + 68;
          v17 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
          v18 = v17;
          if ( !v17 )
            goto LABEL_9;
          Acl = RtlCreateAcl(v17, v16, 2u);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v18, 2u, 3, 0x10000000, Sid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v18, 2u, 3, 0x10000000, v4, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v18, 2u, 3, 0x80000000, v10, 0);
                if ( Acl >= 0 )
                {
                  if ( RtlValidAcl(v18) )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v18, 0);
                    if ( Acl >= 0 )
                    {
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                      {
                        v19 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, a2, a3);
                        Acl = v19;
                        if ( v19 < 0 )
                        {
                          v20 = RtlNtStatusToDosError(v19);
                          RtlSetLastWin32Error(v20);
                        }
                      }
                      else
                      {
                        Acl = -1073741703;
                      }
                    }
                  }
                  else
                  {
                    Acl = -1073741705;
                  }
                }
              }
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
      }
    }
LABEL_26:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    if ( Sid )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    if ( Acl >= 0 )
      return v6;
    return 0;
  }
  RtlSetLastWin32Error(50);
  return v6;
}
