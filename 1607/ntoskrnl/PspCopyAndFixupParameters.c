/*
 * XREFs of PspCopyAndFixupParameters @ 0x1404FE1F8
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 */

__int64 __fastcall PspCopyAndFixupParameters(struct _EX_RUNDOWN_REF *a1, void **a2, __int64 a3)
{
  unsigned int *v4; // r14
  size_t v5; // r15
  char *v6; // rbx
  _KPROCESS *Process; // r10
  char PreviousMode; // r9
  int v9; // eax
  signed __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  unsigned int *v21; // r8
  __int64 *v22; // r15
  unsigned int v23; // r12d
  void **v24; // rsi
  void *v25; // rdx
  __int64 v26; // rcx
  size_t v27; // [rsp+40h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+90h] [rbp+8h]
  char v29; // [rsp+98h] [rbp+10h]
  __int64 v30; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v31; // [rsp+A8h] [rbp+20h]

  v28 = a1;
  v4 = *(unsigned int **)(a3 + 200);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v27 = v5;
  v6 = *(char **)(a3 + 208);
  Process = KeGetCurrentThread()->ApcState.Process;
  v31 = Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 && (*(_BYTE *)(a3 + 9) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 80) == 3 && (int)v4[4] > 0 )
  {
    v9 = ObDuplicateObject(a1, *((void **)v4 + 2), (ULONG_PTR)Process, &v30, 0, 0, 6, PreviousMode);
    a1 = v28;
    Process = v31;
    PreviousMode = v29;
    if ( v9 >= 0 )
      *((_QWORD *)v4 + 2) = v30;
  }
  if ( a2 )
  {
    v21 = v4 + 8;
    v22 = (__int64 *)(v4 + 8);
    v23 = 0;
    v24 = a2;
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 )
      {
        if ( (int)v25 < 0 )
        {
          v26 = 0LL;
          v30 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, v25, (ULONG_PTR)Process, &v30, 0, 0, 6, PreviousMode);
          v26 = v30;
          v21 = v4 + 8;
        }
        if ( (int)result < 0 )
        {
          if ( a2 == (void **)v21 )
            return result;
        }
        else
        {
          *v22 = v26;
        }
      }
      ++v22;
      ++v23;
      ++v24;
      if ( v23 >= 3 )
        break;
      a1 = v28;
      Process = v31;
      PreviousMode = v29;
    }
    v5 = v27;
  }
  v10 = v6 - (char *)v4;
  memmove(v6, v4, v5);
  v11 = *((_QWORD *)v6 + 8);
  if ( v11 )
    *((_QWORD *)v6 + 8) = v10 + v11;
  v12 = *((_QWORD *)v6 + 11);
  if ( v12 )
    *((_QWORD *)v6 + 11) = v10 + v12;
  v13 = *((_QWORD *)v6 + 13);
  if ( v13 )
    *((_QWORD *)v6 + 13) = v10 + v13;
  v14 = *((_QWORD *)v6 + 15);
  if ( v14 )
    *((_QWORD *)v6 + 15) = v10 + v14;
  v15 = *((_QWORD *)v6 + 23);
  if ( v15 )
    *((_QWORD *)v6 + 23) = v10 + v15;
  v16 = *((_QWORD *)v6 + 25);
  if ( v16 )
    *((_QWORD *)v6 + 25) = v10 + v16;
  v17 = *((_QWORD *)v6 + 27);
  if ( v17 )
    *((_QWORD *)v6 + 27) = v10 + v17;
  v18 = *((_QWORD *)v6 + 29);
  if ( v18 )
    *((_QWORD *)v6 + 29) = v10 + v18;
  v19 = *((_QWORD *)v6 + 16);
  if ( v19 )
    *((_QWORD *)v6 + 16) = v10 + v19;
  *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 32) = v6;
  return 0LL;
}
