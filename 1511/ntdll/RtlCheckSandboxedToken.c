/*
 * XREFs of RtlCheckSandboxedToken @ 0x180002800
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180061D70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180061DD0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x180061E30 (RtlCreateSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlAllocateAndInitializeSid @ 0x180062DC0 (RtlAllocateAndInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1800658C0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlFreeSid @ 0x180078300 (RtlFreeSid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A50C0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x1800A5540 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x1800A5900 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x1800A7390 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(HANDLE a1, bool *a2)
{
  HANDLE v3; // rsi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  __int64 Heap; // rax
  __int64 v8; // r14
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v14; // [rsp+64h] [rbp-9Ch]
  int v15; // [rsp+68h] [rbp-98h] BYREF
  __int16 v16; // [rsp+6Ch] [rbp-94h]
  HANDLE v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+8Ch] [rbp-74h] BYREF
  int v22; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _DWORD *v30; // [rsp+D0h] [rbp-30h]
  _BYTE v31[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v32[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v33; // [rsp+108h] [rbp+8h]
  _BYTE v34[56]; // [rsp+110h] [rbp+10h] BYREF

  v16 = 4096;
  v15 = 0;
  v13 = 0;
  v3 = a1;
  v14 = 1280;
  v4 = 0;
  v17 = 0LL;
  *a2 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    v17 = a1;
  }
  else
  {
    v5 = NtOpenThreadToken(-2LL, 8LL, 0LL, &v17);
    a1 = v17;
    v4 = v5;
  }
  if ( !a1 )
  {
    if ( v4 == -1073741700 )
    {
      v4 = NtOpenProcessToken(-1LL, 10LL, &Handle);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v30 = v32;
      v25 = 48;
      v26 = 0LL;
      v28 = 0;
      v27 = 0LL;
      v29 = 0LL;
      v32[0] = 12;
      v32[1] = 2;
      v33 = 1;
      v4 = NtDuplicateToken(Handle, 12LL, &v25, 0LL, 2, &v17);
      NtClose(Handle);
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_12;
  }
  v4 = NtQueryInformationToken(a1, 9LL, &v21);
  if ( v4 >= 0 )
  {
    if ( v21 < 2 )
    {
      v4 = -1073741659;
      goto LABEL_22;
    }
LABEL_12:
    v6 = (unsigned int)RtlLengthRequiredSid(1LL) + 20;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v6);
    v8 = Heap;
    if ( Heap )
    {
      RtlCreateAcl(Heap, (unsigned int)v6, 2LL);
      LOBYTE(v9) = 1;
      v4 = RtlAllocateAndInitializeSid((unsigned int)&v15, v9, 0x2000, 0, 0, 0, 0, 0, 0, 0, (__int64)&v19);
      if ( v4 >= 0 )
      {
        LOBYTE(v10) = 1;
        v4 = RtlAllocateAndInitializeSid((unsigned int)&v13, v10, 18, 0, 0, 0, 0, 0, 0, 0, (__int64)&v18);
        if ( v4 >= 0 )
        {
          RtlAddMandatoryAce(v8, 2, 0, v19, 17, 2);
          RtlCreateSecurityDescriptor(v31, 1LL);
          LOBYTE(v11) = 1;
          RtlSetSaclSecurityDescriptor(v31, v11, v8, 0LL);
          RtlSetOwnerSecurityDescriptor(v31, v18, 0LL);
          RtlSetGroupSecurityDescriptor(v31, v18, 0LL);
          v22 = 56;
          v4 = ZwAccessCheck(v31, v17, 0x20000LL, &RtlpRestrictedMapping, v34, &v22, v24, &v20);
          if ( v4 >= 0 )
            *a2 = v20 < 0;
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
      if ( v19 )
        RtlFreeSid();
      if ( v18 )
        RtlFreeSid();
    }
    else
    {
      v4 = -1073741801;
    }
  }
LABEL_22:
  if ( !v3 && v17 )
    NtClose(v17);
  return (unsigned int)v4;
}
