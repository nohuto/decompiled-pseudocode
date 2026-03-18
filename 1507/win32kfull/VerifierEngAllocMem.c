/*
 * XREFs of VerifierEngAllocMem @ 0x1C0290920
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290828 (-VerifierRandomFailure@@YAHK@Z.c)
 */

__int64 __fastcall VerifierEngAllocMem(char a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  void *v9; // rax
  __int64 v10; // rbx
  void **v11; // rax

  v4 = a2;
  v6 = a2;
  if ( (unsigned int)VerifierRandomFailure() || !v4 )
    return 0LL;
  if ( (gvs & 8) != 0 )
  {
    if ( v4 > 0xFFFFFFDF )
      return 0LL;
    v4 += 32;
  }
  if ( v4 > 0xFFFFFFDF )
    return 0LL;
  v7 = v4 + 32;
  if ( v7 >= 0x2710000 )
    return 0LL;
  v8 = v7;
  v9 = (void *)Win32AllocPoolWithPriority((a1 & 2) != 0 ? 512 : 33, v7, a3, 40LL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( (a1 & 1) != 0 )
      memset(v9, 0, v8);
    MultiUserGreTrackAddEngResource(v10, 2LL);
    v10 += 32LL;
    if ( (gvs & 8) != 0 )
    {
      *(_QWORD *)(v10 + 16) = v6;
      *(_DWORD *)(v10 + 24) = a3;
      GreAcquireSemaphore(qword_1C031B260);
      v11 = (void **)qword_1C031B270;
      *(_QWORD *)v10 = &unk_1C031B268;
      *(_QWORD *)(v10 + 8) = v11;
      if ( *v11 != &unk_1C031B268 )
        __fastfail(3u);
      *v11 = (void *)v10;
      qword_1C031B270 = v10;
      EtwTraceGreLockReleaseSemaphore(L"gvs.hsemPoolTracker", qword_1C031B260);
      GreReleaseSemaphoreInternal(qword_1C031B260);
      v10 += 32LL;
    }
  }
  return v10;
}
