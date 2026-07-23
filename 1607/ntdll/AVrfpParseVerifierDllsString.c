/*
 * XREFs of AVrfpParseVerifierDllsString @ 0x1800D70E4
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 AVrfpParseVerifierDllsString()
{
  void *ProcessHeap; // rbp
  PVOID Heap; // rax
  __int64 v2; // rbx
  __int64 *v4; // rax
  bool v5; // zf
  ULONG *i; // rbx
  __int16 v7; // ax
  const WCHAR *v8; // rsi
  PVOID v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
  v2 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x48uLL);
  *(UNICODE_STRING *)(v2 + 16) = VerifierDllString;
  v4 = (__int64 *)qword_180151458;
  if ( *(__int64 **)qword_180151458 != &AVrfpVerifierProvidersList )
    __fastfail(3u);
  v5 = UseWOW64 == 0;
  *(_QWORD *)v2 = &AVrfpVerifierProvidersList;
  *(_QWORD *)(v2 + 8) = v4;
  *v4 = v2;
  qword_180151458 = v2;
  if ( v5 )
  {
    for ( i = AVrfpVerifierDllsString; *(_WORD *)i; i = (ULONG *)((char *)i + 2) )
    {
      while ( *(_WORD *)i == 32 || *(_WORD *)i == 9 )
        i = (ULONG *)((char *)i + 2);
      v7 = *(_WORD *)i;
      v8 = (const WCHAR *)i;
      if ( !*(_WORD *)i )
        break;
      do
      {
        if ( v7 == 32 )
          break;
        if ( v7 == 9 )
          break;
        i = (ULONG *)((char *)i + 2);
        v7 = *(_WORD *)i;
      }
      while ( *(_WORD *)i );
      if ( v8 == (const WCHAR *)i )
        break;
      *(_WORD *)i = 0;
      if ( wcsicmp(v8, L"verifier.dll") )
      {
        v9 = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
        v10 = (__int64)v9;
        if ( !v9 )
          return 3221225495LL;
        memset(v9, 0, 0x48uLL);
        RtlInitUnicodeString((PUNICODE_STRING)(v10 + 16), v8);
        v11 = (__int64 *)qword_180151458;
        if ( *(__int64 **)qword_180151458 != &AVrfpVerifierProvidersList )
          __fastfail(3u);
        *(_QWORD *)v10 = &AVrfpVerifierProvidersList;
        *(_QWORD *)(v10 + 8) = v11;
        *v11 = v10;
        qword_180151458 = v10;
      }
    }
  }
  return 0LL;
}
