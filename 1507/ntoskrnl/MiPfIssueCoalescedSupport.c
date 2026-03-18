/*
 * XREFs of MiPfIssueCoalescedSupport @ 0x1402191FC
 * Callers:
 *     MiPfIssueCoalesceCandidates @ 0x1402190FC (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiInitializeInPageSupport @ 0x14005EB30 (MiInitializeInPageSupport.c)
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiPfIssueCoalescedSupport(__int64 **a1, unsigned int a2)
{
  __int64 v2; // rdi
  char *result; // rax
  LARGE_INTEGER v5; // rbx
  char *v6; // rbp
  char *v7; // r9
  int v8; // r13d
  unsigned __int64 v9; // r12
  __int64 *v10; // rsi
  __int64 v11; // rax
  PVOID *v12; // rcx
  ULONG v13; // r8d
  unsigned __int64 v14; // rdx
  size_t v15; // rdi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  char *v18; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER StartingOffset; // [rsp+88h] [rbp+20h] BYREF

  v2 = a2;
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (a2 >> 12) + 304, 0x7343694Du);
  v5.QuadPart = 0LL;
  v6 = result;
  if ( result )
  {
    MiInitializeInPageSupport((__int64)result, 0);
    v6[191] |= 0x40u;
    *((_QWORD *)v6 + 32) = 0LL;
    v7 = v6 + 304;
    *((_WORD *)v6 + 133) = 0;
    v8 = 0;
    *((_WORD *)v6 + 132) = 8 * (((unsigned __int64)(v2 + 4095) >> 12) + 6);
    *((_QWORD *)v6 + 36) = 0LL;
    *((_DWORD *)v6 + 75) = 0;
    *((_DWORD *)v6 + 74) = v2;
    *((_WORD *)v6 + 133) |= 0x4042u;
    v9 = (unsigned __int64)MmBadPointer;
    while ( 1 )
    {
      v10 = *a1;
      v18 = v7;
      if ( *a1 == (__int64 *)a1 )
        break;
      v11 = *v10;
      if ( (__int64 **)v10[1] != a1 || *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      *a1 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = a1;
      v12 = (PVOID *)*((_QWORD *)v6 + 3);
      *v10 = (__int64)(v6 + 16);
      v10[1] = (__int64)v12;
      if ( *v12 != v6 + 16 )
        __fastfail(3u);
      *v12 = v10;
      *((_QWORD *)v6 + 3) = v10;
      if ( (*((_WORD *)v10 + 133) & 0x4000) == 0 )
        *((_WORD *)v6 + 133) &= ~0x4000u;
      if ( v8 )
      {
        if ( v5.QuadPart != v10[12] )
        {
          *((_WORD *)v6 + 133) &= ~0x4000u;
          v13 = *((_DWORD *)v10 + 24) - v5.LowPart;
          v14 = (unsigned __int64)(8 * (v13 >> 12)) >> 3;
          memset64(v7, qword_14034F708, v14);
          v7 += 8 * v14;
          v5.QuadPart += v13;
          v18 = v7;
          v8 += v13;
        }
      }
      else
      {
        v5.QuadPart = v10[12];
        v9 = v10[24];
        StartingOffset = v5;
      }
      v15 = (unsigned int)(8 * (*((_DWORD *)v10 + 45) >> 12));
      memmove(v7, v10 + 38, v15);
      v16 = *((unsigned int *)v10 + 45);
      v5.QuadPart += v16;
      v8 += v16;
      v7 = &v18[8 * (v15 >> 3)];
    }
    v17 = IoPageRead(
            (PFILE_OBJECT)(v9 | 2),
            (PMDL)((unsigned __int64)(v6 + 256) | 1),
            &StartingOffset,
            (PKEVENT)(v6 + 32),
            (PIO_STATUS_BLOCK)v6 + 5);
    if ( v17 < 0 )
    {
      *((_QWORD *)v6 + 11) = 0LL;
      *((_DWORD *)v6 + 20) = v17;
      KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
    }
    return v6;
  }
  return result;
}
