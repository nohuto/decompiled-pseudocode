/*
 * XREFs of MiPfIssueCoalescedSupport @ 0x140125790
 * Callers:
 *     MiPfIssueCoalesceCandidates @ 0x140125734 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiInitializeInPageSupport @ 0x1400E5470 (MiInitializeInPageSupport.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiPfIssueCoalescedSupport(__int64 **a1, unsigned int a2)
{
  __int64 v2; // rdi
  char *result; // rax
  __int64 v5; // rbx
  char *v6; // rsi
  char *v7; // r13
  int v8; // r12d
  __int64 *v9; // r14
  __int64 v10; // rax
  PVOID *v11; // rcx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  size_t v14; // rdi
  __int64 v15; // rax
  struct _FILE_OBJECT *v16; // rax
  int v17; // eax
  struct _FILE_OBJECT *v18; // [rsp+90h] [rbp+18h]
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (a2 >> 12) + 304, 0x7343694Du);
  v5 = 0LL;
  v6 = result;
  if ( result )
  {
    MiInitializeInPageSupport((ULONG_PTR)result, 0);
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
    v18 = (struct _FILE_OBJECT *)MmBadPointer;
    while ( 1 )
    {
      v9 = *a1;
      if ( *a1 == (__int64 *)a1 )
        break;
      v10 = *v9;
      if ( (__int64 **)v9[1] != a1 || *(__int64 **)(v10 + 8) != v9 )
        __fastfail(3u);
      *a1 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = a1;
      v11 = (PVOID *)*((_QWORD *)v6 + 3);
      if ( *v11 != v6 + 16 )
        __fastfail(3u);
      v9[1] = (__int64)v11;
      *v9 = (__int64)(v6 + 16);
      *v11 = v9;
      *((_QWORD *)v6 + 3) = v9;
      if ( (*((_WORD *)v9 + 133) & 0x4000) == 0 )
        *((_WORD *)v6 + 133) &= ~0x4000u;
      if ( v8 )
      {
        if ( v5 != v9[12] )
        {
          *((_WORD *)v6 + 133) &= ~0x4000u;
          v12 = *((_DWORD *)v9 + 24) - v5;
          v13 = (unsigned __int64)(8 * (v12 >> 12)) >> 3;
          memset64(v7, qword_1403276D8, v13);
          v7 += 8 * v13;
          v5 += v12;
          v8 += v12;
        }
      }
      else
      {
        v5 = v9[12];
        v16 = (struct _FILE_OBJECT *)v9[24];
        v19 = v5;
        v18 = v16;
      }
      v14 = (unsigned int)(8 * (*((_DWORD *)v9 + 45) >> 12));
      memmove(v7, v9 + 38, v14);
      v15 = *((unsigned int *)v9 + 45);
      v5 += v15;
      v8 += v15;
      v7 += 8 * (v14 >> 3);
    }
    v17 = IoPageReadEx(v18, (__int64)(v6 + 256), &v19, (__int64)(v6 + 32), (__int64)(v6 + 80), 6, 0LL);
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
