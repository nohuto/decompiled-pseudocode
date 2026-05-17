/*
 * XREFs of _ResCreateSecurityDescriptor @ 0x180103F4C
 * Callers:
 *     _CreateSecureFileMapping @ 0x180103484 (_CreateSecureFileMapping.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x18000BB10 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlCreateSecurityDescriptor @ 0x180010ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180010FD0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x180014CE4 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180014E80 (RtlValidSecurityDescriptor.c)
 *     RtlValidAcl @ 0x180014FC0 (RtlValidAcl.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800700B0 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall ResCreateSecurityDescriptor(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 Src; // r15
  unsigned int v5; // edi
  unsigned __int64 v7; // r14
  __int64 Heap; // rax
  unsigned __int64 v9; // r13
  int Acl; // ebx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rax
  char *v17; // r14
  NTSTATUS v18; // eax
  ULONG v19; // eax
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int16 v21; // [rsp+34h] [rbp-3Ch]
  int v22; // [rsp+38h] [rbp-38h] BYREF
  __int16 v23; // [rsp+3Ch] [rbp-34h]
  _BYTE v24[48]; // [rsp+40h] [rbp-30h] BYREF
  int v25; // [rsp+C8h] [rbp+58h] BYREF
  __int16 v26; // [rsp+CCh] [rbp+5Ch]

  v26 = 256;
  v25 = 0;
  v22 = 0;
  v3 = 0LL;
  v23 = 1280;
  Src = 0LL;
  v20 = 0;
  v5 = 1;
  v21 = 1280;
  if ( a1 == 2 )
  {
    if ( !a3 )
      return 0LL;
    if ( (int)RtlCreateSecurityDescriptor(v24, 1) < 0 )
      return 0;
    v7 = (unsigned int)RtlLengthRequiredSid(1u);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    v9 = Heap;
    if ( !Heap )
      return 0;
    Acl = RtlInitializeSid(Heap, (__int64)&v25, 1u);
    if ( Acl >= 0 )
    {
      *(_DWORD *)(v9 + 8) = 0;
      v11 = RtlLengthRequiredSid(2u);
      v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      v3 = v12;
      if ( !v12 )
      {
LABEL_9:
        Acl = -1073741801;
        goto LABEL_26;
      }
      Acl = RtlInitializeSid(v12, (__int64)&v20, 2u);
      if ( Acl >= 0 )
      {
        *(_DWORD *)(v3 + 8) = 32;
        *(_DWORD *)(v3 + 12) = 544;
        v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        Src = v13;
        if ( !v13 )
          goto LABEL_9;
        Acl = RtlInitializeSid(v13, (__int64)&v22, 1u);
        if ( Acl >= 0 )
        {
          v14 = *(unsigned __int8 *)(Src + 1);
          *(_DWORD *)(Src + 8) = 19;
          v15 = 4 * (*(unsigned __int8 *)(v9 + 1) + *(unsigned __int8 *)(v3 + 1) + v14) + 68;
          v16 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
          v17 = (char *)v16;
          if ( !v16 )
            goto LABEL_9;
          Acl = RtlCreateAcl(v16, v15, 2);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v17, 2u, 3, 0x10000000, (unsigned __int8 *)Src, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v17, 2u, 3, 0x10000000, (unsigned __int8 *)v3, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v17, 2u, 3, 0x80000000, (unsigned __int8 *)v9, 0);
                if ( Acl >= 0 )
                {
                  if ( RtlValidAcl((__int64)v17) )
                  {
                    Acl = RtlSetDaclSecurityDescriptor((__int64)v24, 1, (__int64)v17, 0);
                    if ( Acl >= 0 )
                    {
                      if ( RtlValidSecurityDescriptor((__int64)v24) )
                      {
                        v18 = RtlAbsoluteToSelfRelativeSD((__int64)v24);
                        Acl = v18;
                        if ( v18 < 0 )
                        {
                          v19 = RtlNtStatusToDosError(v18);
                          RtlSetLastWin32Error(v19);
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
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v17);
        }
      }
    }
LABEL_26:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( Src )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Src);
    if ( v3 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    if ( Acl >= 0 )
      return v5;
    return 0;
  }
  RtlSetLastWin32Error(0x32u);
  return v5;
}
