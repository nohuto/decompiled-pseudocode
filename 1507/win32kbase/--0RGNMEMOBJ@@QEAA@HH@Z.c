/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C004BDB0
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0011BD0 (GreCreateRectRgn.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C004A358 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, __int64 a2, int a3)
{
  int v3; // ebp
  unsigned int v5; // esi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int32 v9; // [rsp+40h] [rbp+18h]

  *(_QWORD *)this = 0LL;
  v3 = 1;
  *((_DWORD *)this + 2) = 0;
  if ( a3 == 1 )
  {
    v5 = 216;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
      v5 = 376;
    else
      v3 = 0;
    if ( dword_1C0100A00 >= v5
      && ((int)IsWin32AllocateFromPagedLookasideListImplSupported_0() < 0
        ? (v6 = 0LL)
        : (v6 = Win32AllocateFromPagedLookasideListImpl_0()),
          v6) )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( v3 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v6 - 160), 0LL);
      LOWORD(v9) = *(_WORD *)(v6 + 12);
      HIWORD(v9) = *(_WORD *)(v6 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v6 + 12), v9);
    }
    else
    {
      v6 = PALLOCMEM2(v5);
      if ( v6 )
      {
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        if ( v3 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v6 - 160), 0LL);
      }
      else
      {
        EngSetLastError(8u);
        v6 = 0LL;
      }
    }
    *(_QWORD *)this = v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 24) = 216;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
      v7 = (_QWORD *)(*(_QWORD *)this + 48LL);
      v7[1] = v7;
      *v7 = v7;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
