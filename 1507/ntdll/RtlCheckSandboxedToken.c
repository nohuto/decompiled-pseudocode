/*
 * XREFs of RtlCheckSandboxedToken @ 0x1800C2BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlAddMandatoryAce @ 0x18004AD20 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x18004E790 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x18004E7F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004E850 (RtlCreateSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSid @ 0x18004F230 (RtlAllocateAndInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     RtlFreeSid @ 0x18006DD20 (RtlFreeSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18006EC70 (RtlSetSaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x180093900 (ZwAccessCheck.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x180093B40 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x180093D20 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x180094A40 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(void *a1, bool *a2)
{
  int v4; // ebx
  HANDLE v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 Heap; // rax
  unsigned __int64 v9; // r14
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v11; // [rsp+64h] [rbp-9Ch]
  int v12; // [rsp+68h] [rbp-98h] BYREF
  __int16 v13; // [rsp+6Ch] [rbp-94h]
  HANDLE v14; // [rsp+70h] [rbp-90h]
  unsigned __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+8Ch] [rbp-74h]
  int v19; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  _DWORD *v26; // [rsp+D0h] [rbp-30h]
  _BYTE v27[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v28[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v29; // [rsp+108h] [rbp+8h]

  v13 = 4096;
  v12 = 0;
  v10 = 0;
  v11 = 1280;
  v4 = 0;
  v14 = 0LL;
  *a2 = 0;
  if ( a1 )
  {
    v5 = a1;
    v14 = a1;
  }
  else
  {
    v4 = NtOpenThreadToken();
    v5 = v14;
  }
  if ( v5 )
  {
    result = NtQueryInformationToken();
    if ( (int)result < 0 )
      return result;
    if ( v18 < 2 )
      return 3221225637LL;
  }
  else
  {
    if ( v4 == -1073741700 )
    {
      v4 = NtOpenProcessToken();
      if ( v4 < 0 )
        return (unsigned int)v4;
      v26 = v28;
      v21 = 48;
      v22 = 0LL;
      v24 = 0;
      v23 = 0LL;
      v25 = 0LL;
      v28[0] = 12;
      v28[1] = 2;
      v29 = 1;
      v4 = NtDuplicateToken();
      NtClose(Handle);
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v16 = 0LL;
  v15 = 0LL;
  v7 = RtlLengthRequiredSid(1u) + 20;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  RtlCreateAcl(Heap, v7, 2);
  v4 = RtlAllocateAndInitializeSid((__int64)&v12, 1u, 0x2000, 0, 0, 0, 0, 0, 0, 0, (__int64 *)&v16);
  if ( v4 >= 0 )
  {
    v4 = RtlAllocateAndInitializeSid((__int64)&v10, 1u, 18, 0, 0, 0, 0, 0, 0, 0, (__int64 *)&v15);
    if ( v4 >= 0 )
    {
      RtlAddMandatoryAce(v9, 2u, 0, v16, 17, 2);
      RtlCreateSecurityDescriptor(v27, 1);
      RtlSetSaclSecurityDescriptor((__int64)v27, 1, v9, 0);
      RtlSetOwnerSecurityDescriptor((__int64)v27, v15, 0);
      RtlSetGroupSecurityDescriptor((__int64)v27, v15, 0);
      v19 = 56;
      v4 = ZwAccessCheck();
      if ( v4 >= 0 )
        *a2 = v17 < 0;
    }
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( v16 )
    RtlFreeSid(v16);
  if ( v15 )
    RtlFreeSid(v15);
  if ( !a1 )
  {
    if ( v14 )
      NtClose(v14);
  }
  return (unsigned int)v4;
}
