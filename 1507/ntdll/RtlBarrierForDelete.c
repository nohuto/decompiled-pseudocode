/*
 * XREFs of RtlBarrierForDelete @ 0x1800D39F0
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClearEvent @ 0x180093CE0 (NtClearEvent.c)
 */

char __fastcall RtlBarrierForDelete(__int64 a1, int a2)
{
  int v3; // esi
  signed __int32 v4; // eax
  char v5; // di
  unsigned int v6; // ebp
  BOOL v7; // r14d
  unsigned int v8; // eax
  _BOOL8 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v16; // eax
  signed __int32 v17[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a2 | 0x10000;
  v4 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v5 = 1;
  v6 = ~v4 & 0x80000000;
  v7 = ~v4 < 0;
  v8 = v4 & 0x7FFFFFFF;
  if ( !v8 )
  {
    v9 = !v7;
    v10 = *(_QWORD *)(a1 + 8 * v9 + 8);
    if ( (v10 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8 * v9 + 8) = v10 & 0xFFFFFFFFFFFFFFFEuLL;
      NtClearEvent();
    }
    v11 = v6 | *(_DWORD *)(a1 + 4);
    if ( (v3 & 0x10000) != 0 )
      *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)a1 = v11;
    _InterlockedOr(v17, 0);
    if ( (*(_QWORD *)(a1 + 8LL * v7 + 8) & 1) != 0 )
      ZwSetEvent();
    return v5;
  }
  if ( v8 < *(_DWORD *)(a1 + 24) && (a2 & 2) == 0 || (a2 & 1) != 0 )
  {
    v12 = 0;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( (*(_DWORD *)a1 & 0x80000000) != v6 )
      {
        if ( (a2 & 1) == 0 )
          ++v12;
        _mm_pause();
        if ( v12 >= *(_DWORD *)(a1 + 28) )
          goto LABEL_16;
      }
      v16 = *(_DWORD *)(a1 + 28);
      if ( v16 < 0x1388 )
        *(_DWORD *)(a1 + 28) = v16 + 1;
      goto LABEL_22;
    }
LABEL_16:
    v13 = *(_DWORD *)(a1 + 28);
    if ( v13 > 0x32 )
      *(_DWORD *)(a1 + 28) = v13 - 1;
  }
  v14 = *(_QWORD *)(a1 + 8LL * v7 + 8);
  if ( (v14 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 8LL * v7 + 8) = v14 | 1;
    _InterlockedOr(v17, 0);
  }
  if ( (*(_DWORD *)a1 & 0x80000000) != v6 )
    NtWaitForSingleObject((HANDLE)(*(_QWORD *)(a1 + 8LL * v7 + 8) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0LL);
LABEL_22:
  if ( (v3 & 0x10000) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 4), 1u);
  return 0;
}
