/*
 * XREFs of RtlDefaultNpAcl @ 0x180050BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x1800030B0 (RtlGetAppContainerParent.c)
 *     RtlAddAccessAllowedAce @ 0x18001FD50 (RtlAddAccessAllowedAce.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlGetAppContainerSidType @ 0x18004AA20 (RtlGetAppContainerSidType.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlDefaultNpAcl(unsigned __int64 *a1)
{
  __int64 *v2; // rdi
  void *ProcessHeap; // rcx
  void **Heap; // r14
  int InformationToken; // ebx
  int v6; // ebx
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  int v15; // [rsp+30h] [rbp-40h] BYREF
  __int16 v16; // [rsp+34h] [rbp-3Ch]
  int v17; // [rsp+38h] [rbp-38h] BYREF
  __int16 v18; // [rsp+3Ch] [rbp-34h]
  int v19; // [rsp+40h] [rbp-30h] BYREF
  int v20; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned __int8 *v21; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-18h] BYREF
  int v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+64h] [rbp-Ch]

  v16 = 1280;
  *a1 = 0LL;
  v15 = 0;
  v2 = 0LL;
  v17 = 0;
  v18 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v21 = 0LL;
  v20 = 0;
  Heap = (void **)RtlAllocateHeap((__int64)ProcessHeap, 0, 76LL);
  if ( Heap )
  {
    InformationToken = NtQueryInformationToken(-6LL, 4LL, Heap);
    if ( InformationToken < 0 )
      goto LABEL_19;
    v19 = 0;
    if ( (int)NtQueryInformationToken(-6LL, 29LL, &v19) < 0 || !v19 )
      goto LABEL_5;
    v2 = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 76LL);
    if ( !v2 )
    {
      InformationToken = -1073741801;
      goto LABEL_19;
    }
    InformationToken = NtQueryInformationToken(-6LL, 31LL, v2);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlGetAppContainerSidType(*v2, &v20);
      if ( InformationToken >= 0 )
      {
        if ( v20 != 1 || (InformationToken = RtlGetAppContainerParent(*v2, (__int64 *)&v21), InformationToken >= 0) )
        {
LABEL_5:
          v6 = RtlLengthRequiredSid(1u);
          v7 = RtlLengthRequiredSid(2u) + 3 * v6;
          if ( v2 )
            v7 += 4 * *(unsigned __int8 *)(*v2 + 1) + 16;
          if ( v21 )
            v7 += 4 * v21[1] + 16;
          v8 = v7 + 4 * (*((unsigned __int8 *)*Heap + 1) + 14);
          v9 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
          *a1 = v9;
          if ( v9 )
          {
            RtlCreateAcl(v9, v8, 2);
            RtlInitializeSid((__int64)v22, (__int64)&v15, 1u);
            v10 = *a1;
            v23 = 18;
            RtlAddAccessAllowedAce(v10, 2, 0x10000000, v22);
            RtlInitializeSid((__int64)v22, (__int64)&v15, 2u);
            v11 = *a1;
            v23 = 32;
            v24 = 544;
            RtlAddAccessAllowedAce(v11, 2, 0x10000000, v22);
            if ( v2 )
              RtlAddAccessAllowedAce(*a1, 2, 0x10000000, (void *)*v2);
            if ( v21 )
              RtlAddAccessAllowedAce(*a1, 2, 0x10000000, v21);
            RtlAddAccessAllowedAce(*a1, 2, 0x10000000, *Heap);
            RtlInitializeSid((__int64)v22, (__int64)&v17, 1u);
            v12 = *a1;
            v23 = 0;
            RtlAddAccessAllowedAce(v12, 2, 0x80000000, v22);
            RtlInitializeSid((__int64)v22, (__int64)&v15, 1u);
            v13 = *a1;
            v23 = 7;
            RtlAddAccessAllowedAce(v13, 2, 0x80000000, v22);
            InformationToken = 0;
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
      }
    }
    if ( v2 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v2);
    if ( v21 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v21);
LABEL_19:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    if ( InformationToken >= 0 )
      return (unsigned int)InformationToken;
    goto LABEL_22;
  }
  InformationToken = -1073741801;
LABEL_22:
  if ( *a1 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
    *a1 = 0LL;
  }
  return (unsigned int)InformationToken;
}
