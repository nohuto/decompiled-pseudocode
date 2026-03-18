/*
 * XREFs of TransformPhysicalPointToScreen @ 0x1C01C37E4
 * Callers:
 *     SetContactBoundary @ 0x1C01C3580 (SetContactBoundary.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ConvertPointCoordinates @ 0x1C01C32DC (ConvertPointCoordinates.c)
 */

__int64 __fastcall TransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF
  int v23[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2, a3, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9, v10) + 408)
      ? (v8 = 0LL)
      : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9, v10)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v8) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
        ? (v18 = 0)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v15,
                                                       v16,
                                                       v17)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v18) )
    {
      v11 = (__int128 *)(*(_QWORD *)(a1 + 280) + 60LL);
    }
    else
    {
      v11 = (__int128 *)(*(_QWORD *)(a1 + 280) + 28LL);
    }
  }
  else
  {
    v11 = (__int128 *)(*(_QWORD *)(a1 + 280) + 44LL);
  }
  v19 = *a2;
  v20 = *(_OWORD *)(a1 + 140);
  v22 = *v11;
  *(_OWORD *)v23 = v20;
  if ( !(unsigned int)ConvertPointCoordinates(v19, v23, (int *)&v22, (_QWORD *)a3) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return TransformForInputMagnification(a1, a2, (unsigned __int64 *)a3);
}
