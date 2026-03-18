/*
 * XREFs of vCleanupPrivateFonts @ 0x1C0022F90
 * Callers:
 *     <none>
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 vCleanupPrivateFonts()
{
  __int64 result; // rax
  __int64 v1; // rdi
  struct PFT **v2; // rbx
  struct PFF *i; // rcx
  struct PFF *v4; // rcx
  struct PFF *v5; // rax
  struct PFF *v6; // rax
  struct PFF *v7[29]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v8[16]; // [rsp+110h] [rbp+10h] BYREF
  struct PFT **v9; // [rsp+160h] [rbp+60h] BYREF

  result = ghsemPublicPFT;
  if ( ghsemPublicPFT )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v9 = gpPFTPrivate;
    if ( gpPFTPrivate )
    {
      memset(v8, 0, 0x38uLL);
      memset(v7, 0, sizeof(v7));
      HIDWORD(v7[6]) = 0x10000;
      v1 = 20LL;
      v8[3] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v7[20] = (struct PFF *)v8;
      v2 = gpPFTPrivate + 5;
      do
      {
        for ( i = *v2; ; i = v5 )
        {
          v6 = SkipInvalidPff(i);
          if ( !v6 )
            break;
          v7[2] = v6;
          v7[1] = *((struct PFF **)v6 + 1);
          *((_QWORD *)v6 + 1) = v7;
          if ( v7[1] )
            *((_QWORD *)v7[1] + 2) = v7;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v9, v6, v2, 0x80u) )
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
          if ( *v2 == (struct PFT *)v7 )
            *v2 = v7[1];
          v4 = v7[2];
          if ( v7[2] )
          {
            *((struct PFF **)v7[2] + 1) = v7[1];
            v4 = v7[2];
          }
          v5 = v7[1];
          if ( v7[1] )
          {
            *((_QWORD *)v7[1] + 2) = v4;
            v5 = v7[1];
          }
        }
        ++v2;
        --v1;
      }
      while ( v1 );
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    return GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return result;
}
