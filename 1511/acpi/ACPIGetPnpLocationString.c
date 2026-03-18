/*
 * XREFs of ACPIGetPnpLocationString @ 0x1C0070990
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C000434C (AMLIGetNSObjectNameSegment.c)
 *     RtlStringCchPrintfExW @ 0x1C001EA7C (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall ACPIGetPnpLocationString(_QWORD *a1, wchar_t **a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  WCHAR *v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(_QWORD, void **); // rax
  void *v9; // rcx
  unsigned int v10; // esi
  char v11; // r14
  int v12; // eax
  _WORD *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v18; // rdi
  wchar_t *v19; // rbx
  NTSTATUS v20; // eax
  unsigned int v21; // ebx
  void *Src; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+48h] [rbp-38h] BYREF
  PUCHAR SourceCharacter; // [rsp+50h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-28h] BYREF
  _WORD v27[8]; // [rsp+60h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 704LL);
  if ( v5 )
  {
    v24 = AMLIGetNSObjectNameSegment(v5);
    v6 = v27;
    SourceCharacter = (PUCHAR)&v24;
    v7 = 4LL;
    do
    {
      *v6++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      --v7;
    }
    while ( v7 );
    v27[4] = 0;
  }
  else
  {
    v27[0] = 0;
  }
  v8 = (__int64 (__fastcall *)(_QWORD, void **))a1[5];
  v9 = 0LL;
  Src = 0LL;
  v10 = 0;
  v11 = 0;
  if ( v8 )
  {
    v12 = v8(a1[2], &Src);
    v9 = Src;
    if ( v12 == 288 )
    {
      v11 = 1;
    }
    else
    {
      if ( v12 < 0 )
        v9 = 0LL;
      Src = v9;
    }
    if ( v9 )
    {
      for ( i = v9; *i; i += v15 + 1 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( i[v14] );
        v10 += v14 + 1;
        v15 = -1LL;
        do
          ++v15;
        while ( i[v15] );
      }
      ++v10;
    }
  }
  v16 = v10;
  if ( v27[0] )
    v16 = v10 + 12;
  if ( v16 )
  {
    if ( v11 )
      ++v16;
    if ( v27[0] )
      ++v16;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v16, 0x53706341u);
    v9 = Src;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v19 = PoolWithTag;
      if ( Src )
      {
        if ( v11 )
        {
          v19 = PoolWithTag + 1;
          *PoolWithTag = 64;
          v9 = Src;
        }
        memmove(v19, v9, 2LL * v10);
        v9 = Src;
        v19 += v10 - 1;
      }
      if ( !v27[0]
        || (*v19 = 33,
            v20 = RtlStringCchPrintfExW(v19 + 1, 0xCuLL, 0LL, &pcchRemaining, 0x200u, L"ACPI(%ws)", v27),
            v9 = Src,
            v21 = v20,
            v20 >= 0) )
      {
        *a2 = v18;
        v21 = *(_QWORD *)(v4 + 736) == 0LL ? 0x120 : 0;
      }
    }
    else
    {
      v21 = -1073741670;
    }
  }
  else
  {
    v21 = -1073741637;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v21;
}
