/*
 * XREFs of RtlpGetDefaultsSubjectContext @ 0x18006B014
 * Callers:
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B250 (RtlpGetDefaultTrustSubjectContext.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlpGetDefaultsSubjectContext(
        __int64 a1,
        char a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  struct _PEB *v12; // rax
  __int64 ProcessHeap; // rdi
  __int64 Heap; // rax
  int InformationToken; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  HANDLE Handle[2]; // [rsp+38h] [rbp-10h] BYREF
  char v23; // [rsp+90h] [rbp+48h]
  unsigned int v25; // [rsp+A0h] [rbp+58h]

  Handle[0] = 0LL;
  *a6 = 0LL;
  v23 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  *a7 = 0LL;
  v12 = NtCurrentPeb();
  *a5 = 0LL;
  *a9 = 0LL;
  ProcessHeap = (__int64)v12->ProcessHeap;
  if ( a1 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
    *a3 = Heap;
    if ( !Heap )
      goto LABEL_15;
    InformationToken = NtQueryInformationToken(a1, 4LL, Heap);
    if ( InformationToken < 0 )
      goto LABEL_16;
    v16 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x54uLL);
    *a7 = v16;
    if ( !v16 )
      goto LABEL_15;
    InformationToken = NtQueryInformationToken(a1, 25LL, v16);
    if ( InformationToken < 0 )
      goto LABEL_16;
    InformationToken = NtQueryInformationToken(a1, 5LL, *a4);
    if ( InformationToken != -1073741789 )
      goto LABEL_16;
    v17 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)a5);
    *a4 = v17;
    if ( !v17 )
      goto LABEL_15;
    InformationToken = NtQueryInformationToken(a1, 5LL, v17);
    if ( InformationToken < 0 )
      goto LABEL_16;
    InformationToken = NtQueryInformationToken(a1, 6LL, *a5);
    if ( InformationToken != -1073741789 )
      goto LABEL_16;
    v18 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)a9);
    *a5 = v18;
    if ( !v18 )
    {
LABEL_15:
      InformationToken = -1073741801;
      goto LABEL_16;
    }
    InformationToken = NtQueryInformationToken(a1, 6LL, v18);
    if ( InformationToken < 0 )
      goto LABEL_16;
  }
  InformationToken = RtlpGetDefaultTrustSubjectContext(a1, a8);
  if ( InformationToken < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  InformationToken = NtOpenProcessToken(-1LL, 8LL, Handle);
  if ( InformationToken < 0 )
  {
    v23 = 0;
    goto LABEL_16;
  }
  v23 = 1;
  v20 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
  *a6 = v20;
  if ( !v20 )
    goto LABEL_15;
  InformationToken = NtQueryInformationToken(Handle[0], 4LL, v20);
  if ( InformationToken >= 0 )
  {
    InformationToken = NtQueryInformationToken(Handle[0], 5LL, *a9);
    if ( InformationToken == -1073741789 )
    {
      v21 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v25);
      *a9 = v21;
      if ( v21 )
      {
        InformationToken = NtQueryInformationToken(Handle[0], 5LL, v21);
        if ( InformationToken >= 0 )
        {
          NtClose(Handle[0]);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  if ( *a7 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a7);
    *a7 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *a5 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a5);
    *a5 = 0LL;
  }
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *a8 = 0LL;
  }
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *a6 = 0LL;
  }
  if ( *a9 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *a9 = 0LL;
  }
  if ( v23 == 1 )
    NtClose(Handle[0]);
  return (unsigned int)InformationToken;
}
