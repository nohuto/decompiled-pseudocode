/*
 * XREFs of NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400010A0
 * Callers:
 *     NtProcessStartupW @ 0x140001080 (NtProcessStartupW.c)
 * Callees:
 *     wmain @ 0x14000135C (wmain.c)
 */

NTSTATUS __fastcall NtProcessStartupW_AfterSecurityCookieInitialized(__int64 a1)
{
  NTSTATUS v2; // ebx
  struct _RTL_USER_PROCESS_PARAMETERS *v3; // rcx
  __int64 v4; // r15
  __int64 v5; // r8
  PRTL_USER_PROCESS_PARAMETERS v6; // r12
  int v7; // eax
  unsigned int v8; // edi
  UNICODE_STRING *p_CommandLine; // rsi
  wint_t *v10; // r14
  int Length; // ebp
  wint_t *Buffer; // rax
  wint_t *v13; // rbx
  PWSTR Environment; // rcx
  int v15; // edx
  __int64 v17; // rcx
  __int64 v18; // rbx
  SIZE_T v19; // r15
  wint_t **Heap; // rax
  wint_t **v21; // rsi
  wint_t **v22; // r13
  wint_t *v23; // rbx
  wint_t *v24; // rdi
  unsigned int v25; // r12d
  wint_t v26; // ax
  _QWORD *v27; // rsi
  PWSTR v28; // rax
  unsigned int v31; // [rsp+70h] [rbp+8h]
  ULONG DebugFlags; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_USER_PROCESS_PARAMETERS *v34; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = *(struct _RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  v33 = 0LL;
  DebugFlags = 0;
  v4 = 0LL;
  v6 = RtlNormalizeProcessParams(v3);
  v34 = v6;
  v31 = 0;
  v7 = 1;
  v8 = 1;
  p_CommandLine = 0LL;
  v10 = 0LL;
  Length = 0;
  if ( v6 )
  {
    p_CommandLine = &v6->CommandLine;
    DebugFlags = v6->DebugFlags;
    Buffer = v6->CommandLine.Buffer;
    if ( Buffer && p_CommandLine->Length
      || (Buffer = v6->ImagePathName.Buffer, p_CommandLine = &v6->ImagePathName, Buffer) )
    {
      Length = p_CommandLine->Length;
      v10 = Buffer;
      if ( p_CommandLine->Length )
      {
        do
        {
          if ( !*v10 || !Length )
            break;
          do
          {
            if ( !*v10 )
              break;
            if ( !iswspace(*v10) )
              break;
            ++v10;
            Length -= 2;
          }
          while ( Length );
          if ( !Length )
            break;
          if ( *v10 )
          {
            ++v8;
            v13 = v10;
            do
            {
              ++v10;
              Length -= 2;
            }
            while ( Length && !iswspace(*v10) );
            v4 += 2 * (v10 - v13) + 2;
          }
        }
        while ( Length );
        v2 = 0;
      }
    }
    Environment = v6->Environment;
    v15 = 0;
    if ( Environment && *Environment )
    {
      do
      {
        ++Environment;
        ++v15;
        while ( *Environment++ )
          ;
      }
      while ( *Environment );
    }
    v7 = v15 + 1;
  }
  v17 = v8 + v7;
  if ( (unsigned int)v17 <= 2 )
    goto LABEL_62;
  if ( v8 > 1 )
  {
    v10 = p_CommandLine->Buffer;
    Length = p_CommandLine->Length;
  }
  v18 = v17;
  v19 = 8 * v17 + v4;
  Heap = (wint_t **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v19);
  v21 = Heap;
  if ( !Heap )
  {
    v2 = -1073741801;
LABEL_62:
    v22 = (wint_t **)&v33;
    goto LABEL_50;
  }
  v22 = Heap;
  if ( v8 > 1 )
  {
    v23 = (wint_t *)&Heap[v18];
    v24 = (wint_t *)((char *)Heap + v19);
    if ( Length )
    {
      v25 = 0;
      do
      {
        if ( v23 >= v24 || !*v10 )
          break;
        do
        {
          if ( !*v10 )
            break;
          if ( !iswspace(*v10) )
            break;
          ++v10;
          Length -= 2;
        }
        while ( Length );
        if ( !Length )
          break;
        if ( *v10 )
        {
          *v21++ = v23;
          ++v25;
          do
          {
            v26 = *v10++;
            *v23++ = v26;
            Length -= 2;
            if ( !Length )
              break;
            if ( v23 >= v24 )
              goto LABEL_63;
          }
          while ( !iswspace(*v10) );
          if ( v23 < v24 )
          {
            *v23++ = 0;
            continue;
          }
LABEL_63:
          *--v23 = 0;
        }
      }
      while ( Length );
      v31 = v25;
      v6 = v34;
    }
  }
  v2 = 0;
  *v21 = 0LL;
  v27 = v21 + 1;
  v28 = v6->Environment;
  if ( v28 && *v28 )
  {
    do
    {
      *v27++ = v28++;
      while ( *v28++ )
        ;
    }
    while ( *v28 );
  }
  *v27 = 0LL;
LABEL_50:
  if ( DebugFlags )
    __debugbreak();
  if ( v2 >= 0 )
    v2 = wmain(v31, v22, v5, DebugFlags);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2);
}
