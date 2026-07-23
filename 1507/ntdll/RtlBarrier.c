/*
 * XREFs of RtlBarrier @ 0x1800D38B0
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClearEvent @ 0x180093CE0 (NtClearEvent.c)
 */

BOOLEAN __cdecl RtlBarrier(PRTL_BARRIER Barrier, ULONG Flags)
{
  signed __int32 v4; // eax
  unsigned int v5; // edi
  _BOOL8 v6; // rbp
  DWORD v7; // eax
  _BOOL8 v8; // rax
  ULONG_PTR v9; // rcx
  void *v10; // rcx
  DWORD v11; // edi
  ULONG_PTR v12; // rcx
  DWORD v14; // ecx
  DWORD v15; // eax
  ULONG_PTR v16; // rax
  DWORD Reserved5; // eax
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = _InterlockedDecrement((volatile signed __int32 *)Barrier);
  v5 = ~v4 & 0x80000000;
  v6 = ~v4 < 0;
  v7 = v4 & 0x7FFFFFFF;
  if ( !v7 )
  {
    v8 = !v6;
    v9 = Barrier->Reserved3[v8];
    if ( (v9 & 1) != 0 )
    {
      v10 = (void *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
      Barrier->Reserved3[v8] = (ULONG_PTR)v10;
      NtClearEvent(v10);
    }
    v11 = Barrier->Reserved2 | v5;
    if ( (Flags & 0x10000) != 0 )
      Barrier->Reserved2 = 1;
    Barrier->Reserved1 = v11;
    _InterlockedOr(v18, 0);
    v12 = Barrier->Reserved3[v6];
    if ( (v12 & 1) != 0 )
      ZwSetEvent((HANDLE)(v12 & 0xFFFFFFFFFFFFFFFEuLL), 0LL);
    return 1;
  }
  if ( v7 < Barrier->Reserved4 && (Flags & 2) == 0 || (Flags & 1) != 0 )
  {
    v14 = 0;
    if ( Barrier->Reserved5 )
    {
      while ( (Barrier->Reserved1 & 0x80000000) != v5 )
      {
        if ( (Flags & 1) == 0 )
          ++v14;
        _mm_pause();
        if ( v14 >= Barrier->Reserved5 )
          goto LABEL_17;
      }
      Reserved5 = Barrier->Reserved5;
      if ( Reserved5 < 0x1388 )
        Barrier->Reserved5 = Reserved5 + 1;
      goto LABEL_23;
    }
LABEL_17:
    v15 = Barrier->Reserved5;
    if ( v15 > 0x32 )
      Barrier->Reserved5 = v15 - 1;
  }
  v16 = Barrier->Reserved3[v6];
  if ( (v16 & 1) == 0 )
  {
    Barrier->Reserved3[v6] = v16 | 1;
    _InterlockedOr(v18, 0);
  }
  if ( (Barrier->Reserved1 & 0x80000000) != v5 )
    NtWaitForSingleObject((HANDLE)(Barrier->Reserved3[v6] & 0xFFFFFFFFFFFFFFFEuLL), 0, 0LL);
LABEL_23:
  if ( (Flags & 0x10000) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)&Barrier->Reserved2);
  return 0;
}
