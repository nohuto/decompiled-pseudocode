/*
 * XREFs of RtlDefaultNpAcl @ 0x1800CC680
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlAddAccessAllowedAce @ 0x1800191F0 (RtlAddAccessAllowedAce.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x1800622C0 (RtlGetAppContainerSidType.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlDefaultNpAcl(unsigned __int64 *a1)
{
  void *ProcessHeap; // rcx
  void **Heap; // r14
  int InformationToken; // ebx
  int v5; // ebx
  int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int16 v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+38h] [rbp-38h] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-34h]
  int v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+44h] [rbp-2Ch]
  unsigned __int8 *v20; // [rsp+48h] [rbp-28h]
  _BYTE v21[8]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  v15 = 1280;
  *a1 = 0LL;
  v14 = 0;
  v16 = 0;
  v17 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v20 = 0LL;
  v19 = 0;
  Heap = (void **)RtlAllocateHeap((__int64)ProcessHeap, 0, 76LL);
  if ( !Heap )
  {
    InformationToken = -1073741801;
LABEL_14:
    if ( *a1 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
      *a1 = 0LL;
    }
    return (unsigned int)InformationToken;
  }
  InformationToken = NtQueryInformationToken();
  if ( InformationToken >= 0 )
  {
    v18 = 0;
    NtQueryInformationToken();
    v5 = RtlLengthRequiredSid(1u);
    v6 = RtlLengthRequiredSid(2u) + 3 * v5;
    if ( v20 )
      v6 += 4 * v20[1] + 16;
    v7 = v6 + 4 * (*((unsigned __int8 *)*Heap + 1) + 14);
    v8 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    *a1 = v8;
    if ( v8 )
    {
      RtlCreateAcl(v8, v7, 2);
      RtlInitializeSid((__int64)v21, (__int64)&v14, 1u);
      v9 = *a1;
      v22 = 18;
      RtlAddAccessAllowedAce(v9, 2, 0x10000000, v21);
      RtlInitializeSid((__int64)v21, (__int64)&v14, 2u);
      v10 = *a1;
      v22 = 32;
      v23 = 544;
      RtlAddAccessAllowedAce(v10, 2, 0x10000000, v21);
      if ( v20 )
        RtlAddAccessAllowedAce(*a1, 2, 0x10000000, v20);
      RtlAddAccessAllowedAce(*a1, 2, 0x10000000, *Heap);
      RtlInitializeSid((__int64)v21, (__int64)&v16, 1u);
      v11 = *a1;
      v22 = 0;
      RtlAddAccessAllowedAce(v11, 2, 0x80000000, v21);
      RtlInitializeSid((__int64)v21, (__int64)&v14, 1u);
      v12 = *a1;
      v22 = 7;
      RtlAddAccessAllowedAce(v12, 2, 0x80000000, v21);
      InformationToken = 0;
    }
    else
    {
      InformationToken = -1073741801;
    }
    if ( v20 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v20);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( InformationToken < 0 )
    goto LABEL_14;
  return (unsigned int)InformationToken;
}
