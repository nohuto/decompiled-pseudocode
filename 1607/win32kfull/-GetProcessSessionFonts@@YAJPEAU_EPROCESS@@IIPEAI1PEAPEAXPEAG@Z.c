/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00FD9FC
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C00FD6E0 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C025A0E8 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        struct _EPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v10; // r14
  __int64 i; // r12
  struct PFF *j; // rcx
  struct PFF *v14; // rax
  int v15; // r8d
  struct PFF *v16; // rdi
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int k; // edi
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v7 = 0;
  *a4 = 0;
  v10 = a6;
  *a5 = 0;
  if ( a2 )
    memset(a6, 0, 8LL * a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  KeStackAttachProcess(a1, &ApcState);
  v23 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)gpPFTPublic + 6); i = (unsigned int)(i + 1) )
  {
    for ( j = gpPFTPublic[i + 5]; ; j = (struct PFF *)*((_QWORD *)v16 + 1) )
    {
      v14 = SkipInvalidPff(j);
      v16 = v14;
      if ( !v14 )
        break;
      if ( (*((_DWORD *)v14 + 13) & 8) == 0 && *((_QWORD *)v14 + 11) == qword_1C0334780 )
      {
        if ( *a4 == -1 )
          goto LABEL_19;
        v17 = *((_DWORD *)v14 + 8) + *a5;
        if ( v17 < *((_DWORD *)v14 + 8) )
        {
          *a5 = -1;
LABEL_19:
          v7 = -1073741675;
          break;
        }
        *a5 = v17;
        v18 = ++*a4;
        if ( v7 != v15 )
        {
          if ( v18 > a2 || *a5 > a3 )
          {
            if ( a2 )
              v7 = v15;
          }
          else
          {
            v7 = PffDuplicateFileHandle(v16, CurrentProcess, a1, &a6[v18 - 1]);
            if ( v7 < 0 )
              break;
            memmove(a7, *(const void **)(**((_QWORD **)v16 + 19) + 80LL), 2LL * *((unsigned int *)v16 + 8));
            a7 += *((unsigned int *)v16 + 8);
          }
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( k = 0; k < a2; ++v10 )
    {
      if ( !*v10 )
        break;
      NtClose(*v10);
      ++k;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  return (unsigned int)v7;
}
