/*
 * XREFs of RtlBarrierForDelete @ 0x1800D39F0
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClearEvent @ 0x180093CE0 (NtClearEvent.c)
 */

BOOLEAN __cdecl RtlBarrierForDelete(PRTL_BARRIER Barrier, ULONG Flags)
{
  ULONG v3; // esi
  signed __int32 v4; // eax
  BOOLEAN v5; // di
  unsigned int v6; // ebp
  _BOOL8 v7; // r14
  DWORD v8; // eax
  _BOOL8 v9; // rax
  ULONG_PTR v10; // rcx
  void *v11; // rcx
  DWORD v12; // eax
  ULONG_PTR v13; // rcx
  DWORD v14; // ecx
  DWORD v15; // eax
  ULONG_PTR v16; // rax
  DWORD Reserved5; // eax
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = Flags | 0x10000;
  v4 = _InterlockedDecrement((volatile signed __int32 *)Barrier);
  v5 = 1;
  v6 = ~v4 & 0x80000000;
  v7 = ~v4 < 0;
  v8 = v4 & 0x7FFFFFFF;
  if ( !v8 )
  {
    v9 = !v7;
    v10 = Barrier->Reserved3[v9];
    if ( (v10 & 1) != 0 )
    {
      v11 = (void *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
      Barrier->Reserved3[v9] = (ULONG_PTR)v11;
      NtClearEvent(v11);
    }
    v12 = v6 | Barrier->Reserved2;
    if ( (v3 & 0x10000) != 0 )
      Barrier->Reserved2 = 1;
    Barrier->Reserved1 = v12;
    _InterlockedOr(v19, 0);
    v13 = Barrier->Reserved3[v7];
    if ( (v13 & 1) != 0 )
      ZwSetEvent((HANDLE)(v13 & 0xFFFFFFFFFFFFFFFEuLL), 0LL);
    return v5;
  }
  if ( v8 < Barrier->Reserved4 && (Flags & 2) == 0 || (Flags & 1) != 0 )
  {
    v14 = 0;
    if ( Barrier->Reserved5 )
    {
      while ( (Barrier->Reserved1 & 0x80000000) != v6 )
      {
        if ( (Flags & 1) == 0 )
          ++v14;
        _mm_pause();
        if ( v14 >= Barrier->Reserved5 )
          goto LABEL_16;
      }
      Reserved5 = Barrier->Reserved5;
      if ( Reserved5 < 0x1388 )
        Barrier->Reserved5 = Reserved5 + 1;
      goto LABEL_22;
    }
LABEL_16:
    v15 = Barrier->Reserved5;
    if ( v15 > 0x32 )
      Barrier->Reserved5 = v15 - 1;
  }
  v16 = Barrier->Reserved3[v7];
  if ( (v16 & 1) == 0 )
  {
    Barrier->Reserved3[v7] = v16 | 1;
    _InterlockedOr(v19, 0);
  }
  if ( (Barrier->Reserved1 & 0x80000000) != v6 )
    NtWaitForSingleObject((HANDLE)(Barrier->Reserved3[v7] & 0xFFFFFFFFFFFFFFFEuLL), 0, 0LL);
LABEL_22:
  if ( (v3 & 0x10000) != 0 )
    _InterlockedAdd((volatile signed __int32 *)&Barrier->Reserved2, 1u);
  return 0;
}
