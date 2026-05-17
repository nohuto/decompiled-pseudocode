/*
 * XREFs of RtlBarrier @ 0x1800D38B0
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClearEvent @ 0x180093CE0 (NtClearEvent.c)
 */

char __fastcall RtlBarrier(__int64 a1, int a2)
{
  signed __int32 v4; // eax
  unsigned int v5; // edi
  BOOL v6; // ebp
  unsigned int v7; // eax
  _BOOL8 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v5 = ~v4 & 0x80000000;
  v6 = ~v4 < 0;
  v7 = v4 & 0x7FFFFFFF;
  if ( !v7 )
  {
    v8 = !v6;
    v9 = *(_QWORD *)(a1 + 8 * v8 + 8);
    if ( (v9 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8 * v8 + 8) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      NtClearEvent();
    }
    v10 = *(_DWORD *)(a1 + 4) | v5;
    if ( (a2 & 0x10000) != 0 )
      *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)a1 = v10;
    _InterlockedOr(v16, 0);
    if ( (*(_QWORD *)(a1 + 8LL * v6 + 8) & 1) != 0 )
      ZwSetEvent();
    return 1;
  }
  if ( v7 < *(_DWORD *)(a1 + 24) && (a2 & 2) == 0 || (a2 & 1) != 0 )
  {
    v12 = 0;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( (*(_DWORD *)a1 & 0x80000000) != v5 )
      {
        if ( (a2 & 1) == 0 )
          ++v12;
        _mm_pause();
        if ( v12 >= *(_DWORD *)(a1 + 28) )
          goto LABEL_17;
      }
      v15 = *(_DWORD *)(a1 + 28);
      if ( v15 < 0x1388 )
        *(_DWORD *)(a1 + 28) = v15 + 1;
      goto LABEL_23;
    }
LABEL_17:
    v13 = *(_DWORD *)(a1 + 28);
    if ( v13 > 0x32 )
      *(_DWORD *)(a1 + 28) = v13 - 1;
  }
  v14 = *(_QWORD *)(a1 + 8LL * v6 + 8);
  if ( (v14 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 8LL * v6 + 8) = v14 | 1;
    _InterlockedOr(v16, 0);
  }
  if ( (*(_DWORD *)a1 & 0x80000000) != v5 )
    NtWaitForSingleObject((HANDLE)(*(_QWORD *)(a1 + 8LL * v6 + 8) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0LL);
LABEL_23:
  if ( (a2 & 0x10000) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  return 0;
}
