/*
 * XREFs of RtlCheckSandboxedToken @ 0x1800D4580
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateAndInitializeSid @ 0x18000BA00 (RtlAllocateAndInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18000BB10 (RtlLengthRequiredSid.c)
 *     RtlCreateSecurityDescriptor @ 0x180010ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010F10 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010F70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlAddMandatoryAce @ 0x18006B4C0 (RtlAddMandatoryAce.c)
 *     RtlFreeSid @ 0x18007A4A0 (RtlFreeSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18007D740 (RtlSetSaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x1800A68A0 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(HANDLE a1, bool *a2)
{
  HANDLE v3; // rsi
  int InformationToken; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 Heap; // rax
  unsigned __int64 v8; // r14
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v11; // [rsp+64h] [rbp-9Ch]
  int v12; // [rsp+68h] [rbp-98h] BYREF
  __int16 v13; // [rsp+6Ch] [rbp-94h]
  HANDLE v14; // [rsp+70h] [rbp-90h]
  unsigned __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  int v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+84h] [rbp-7Ch]
  int v18; // [rsp+88h] [rbp-78h]
  __int64 v19[2]; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  _DWORD *v25; // [rsp+D0h] [rbp-30h]
  _BYTE v26[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v27[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v28; // [rsp+108h] [rbp+8h]

  v11 = 4096;
  v10 = 0;
  v12 = 0;
  v3 = a1;
  v13 = 1280;
  InformationToken = 0;
  v14 = 0LL;
  *a2 = 0;
  v15 = 0LL;
  v19[0] = 0LL;
  if ( a1 )
  {
    v14 = a1;
  }
  else
  {
    v5 = NtOpenThreadToken();
    a1 = v14;
    InformationToken = v5;
  }
  if ( !a1 )
  {
    if ( InformationToken == -1073741700 )
    {
      InformationToken = NtOpenProcessToken();
      if ( InformationToken < 0 )
        return (unsigned int)InformationToken;
      v25 = v27;
      v20 = 48;
      v21 = 0LL;
      v23 = 0;
      v22 = 0LL;
      v24 = 0LL;
      v27[0] = 12;
      v27[1] = 2;
      v28 = 1;
      InformationToken = NtDuplicateToken();
      NtClose((HANDLE)v19[1]);
    }
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
    goto LABEL_12;
  }
  InformationToken = NtQueryInformationToken();
  if ( InformationToken >= 0 )
  {
    if ( v16 < 2 )
    {
      InformationToken = -1073741659;
      goto LABEL_22;
    }
LABEL_12:
    v6 = RtlLengthRequiredSid(1u) + 20;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v6);
    v8 = Heap;
    if ( Heap )
    {
      RtlCreateAcl(Heap, v6, 2);
      InformationToken = RtlAllocateAndInitializeSid((__int64)&v10, 1u, 0x2000, 0, 0, 0, 0, 0, 0, 0, v19);
      if ( InformationToken >= 0 )
      {
        InformationToken = RtlAllocateAndInitializeSid((__int64)&v12, 1u, 18, 0, 0, 0, 0, 0, 0, 0, (__int64 *)&v15);
        if ( InformationToken >= 0 )
        {
          RtlAddMandatoryAce(v8, 2u, 0, v19[0], 17, 2);
          RtlCreateSecurityDescriptor(v26, 1);
          RtlSetSaclSecurityDescriptor((__int64)v26, 1, v8, 0);
          RtlSetOwnerSecurityDescriptor((__int64)v26, v15, 0);
          RtlSetGroupSecurityDescriptor((__int64)v26, v15, 0);
          v17 = 56;
          InformationToken = ZwAccessCheck();
          if ( InformationToken >= 0 )
            *a2 = v18 < 0;
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
      if ( v19[0] )
        RtlFreeSid(v19[0]);
      if ( v15 )
        RtlFreeSid(v15);
    }
    else
    {
      InformationToken = -1073741801;
    }
  }
LABEL_22:
  if ( !v3 && v14 )
    NtClose(v14);
  return (unsigned int)InformationToken;
}
