/*
 * XREFs of PspUpdateCreateInfo @ 0x14050AE10
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 * Callees:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

__int64 __fastcall PspUpdateCreateInfo(int a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v8; // r15
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  _KPROCESS *v12; // rcx
  _KPROCESS *v13; // rcx
  char v14; // al
  char v15; // cl
  char v16; // al
  char v17; // cl
  _KPROCESS *Process; // rcx
  __int64 v20; // rax
  _KPROCESS *v21; // rcx
  __int64 v22; // rax
  int *v23; // rdi
  int v24[2]; // [rsp+40h] [rbp-38h] BYREF
  int v25[2]; // [rsp+48h] [rbp-30h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 2LL;
  if ( (*(_BYTE *)(a2 + 8) & 2) == 0 )
    goto LABEL_16;
  v9 = a1 - 2;
  if ( !v9 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode )
    {
      v5 = ObDuplicateObject((ULONG_PTR)Process, *(void **)(a2 + 160), (ULONG_PTR)Process, (__int64 *)v24, 0, 0, 2, 0);
      v20 = *(_QWORD *)v24;
    }
    else
    {
      v20 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)v24 = v20;
      *(_QWORD *)(a2 + 160) = 0LL;
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v6 + 16) = v20;
      goto LABEL_16;
    }
LABEL_33:
    *(_QWORD *)v24 = 0LL;
    goto LABEL_16;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_WORD *)(v6 + 16) = *(_WORD *)(a2 + 94);
    goto LABEL_16;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v21 = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode )
    {
      v5 = ObDuplicateObject((ULONG_PTR)v21, *(void **)(a2 + 184), (ULONG_PTR)v21, (__int64 *)v24, 0, 0, 2, 0);
      v22 = *(_QWORD *)v24;
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 184);
      *(_QWORD *)v24 = v22;
      *(_QWORD *)(a2 + 184) = 0LL;
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v6 + 16) = v22;
      goto LABEL_16;
    }
    goto LABEL_33;
  }
  if ( v11 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
    {
      v12 = KeGetCurrentThread()->ApcState.Process;
      if ( PreviousMode )
      {
        v5 = ObDuplicateObject((ULONG_PTR)v12, *(void **)(a2 + 160), (ULONG_PTR)v12, (__int64 *)v24, 0, 0, 2, 0);
      }
      else
      {
        *(_QWORD *)v24 = *(_QWORD *)(a2 + 160);
        *(_QWORD *)(a2 + 160) = 0LL;
      }
      if ( v5 < 0 )
      {
        *(_QWORD *)v24 = 0LL;
        goto LABEL_34;
      }
      v13 = KeGetCurrentThread()->ApcState.Process;
      if ( PreviousMode )
      {
        v5 = ObDuplicateObject((ULONG_PTR)v13, *(void **)(a2 + 176), (ULONG_PTR)v13, (__int64 *)v25, 0, 0, 2, 0);
      }
      else
      {
        *(_QWORD *)v25 = *(_QWORD *)(a2 + 176);
        *(_QWORD *)(a2 + 176) = 0LL;
        v5 = 0;
      }
      if ( v5 < 0 )
      {
        *(_QWORD *)v25 = 0LL;
        goto LABEL_34;
      }
    }
    *(_DWORD *)(v6 + 16) = 0;
    *(_BYTE *)(v6 + 16) ^= (((*(_BYTE *)(a3 + 1714) & 7) != 0) ^ *(_BYTE *)(v6 + 16)) & 1;
    v14 = *(_BYTE *)(v6 + 16) ^ (*(_BYTE *)(v6 + 16) ^ (16 * ((*(_BYTE *)(a3 + 1714) & 7) == 1))) & 0x10;
    *(_BYTE *)(v6 + 16) = v14;
    v15 = v14 ^ (v14 ^ (2 * ((*(_DWORD *)(a3 + 772) & 0x20000) != 0))) & 2;
    *(_BYTE *)(v6 + 16) = v15;
    v16 = v15 ^ (v15 ^ (4 * (PspGlobalFlags & 1))) & 4;
    *(_BYTE *)(v6 + 16) = v16;
    v17 = v16 ^ (v16 ^ (*(_BYTE *)(a2 + 8) >> 2)) & 8;
    *(_BYTE *)(v6 + 16) = v17;
    if ( (v17 & 8) != 0 )
    {
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(a2 + 296);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(a2 + 304);
    }
    *(_QWORD *)(v6 + 24) = *(_QWORD *)v24;
    *(_QWORD *)(v6 + 32) = *(_QWORD *)v25;
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(a2 + 216);
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(*(_QWORD *)(a2 + 200) + 8LL);
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(a3 + 1016);
    *(_DWORD *)(v6 + 64) = *(_DWORD *)(a2 + 220);
  }
LABEL_16:
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v6 + 8) = a1;
    return 0LL;
  }
LABEL_34:
  v23 = v24;
  do
  {
    if ( *(_QWORD *)v23 )
      ObCloseHandle(*(HANDLE *)v23, PreviousMode);
    v23 += 2;
    --v8;
  }
  while ( v8 );
  return (unsigned int)v5;
}
