/*
 * XREFs of TransformPhysicalPointToScreen @ 0x1C01C4558
 * Callers:
 *     ApplyTransforms @ 0x1C01C3A80 (ApplyTransforms.c)
 *     SetContactBoundary @ 0x1C01C4000 (SetContactBoundary.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ConvertPointCoordinates @ 0x1C01C3BD8 (ConvertPointCoordinates.c)
 */

__int64 __fastcall TransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int128 *v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v6 = 0LL)
      : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v6) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v8 = 0)
        : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          v8) )
    {
      v7 = (__int128 *)(*(_QWORD *)(a1 + 280) + 60LL);
    }
    else
    {
      v7 = (__int128 *)(*(_QWORD *)(a1 + 280) + 28LL);
    }
  }
  else
  {
    v7 = (__int128 *)(*(_QWORD *)(a1 + 280) + 44LL);
  }
  v9 = *a2;
  v10 = *(_OWORD *)(a1 + 140);
  v12 = *v7;
  *(_OWORD *)v13 = v10;
  if ( !(unsigned int)ConvertPointCoordinates(v9, v13, (int *)&v12, (_QWORD *)a3) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return TransformForInputMagnification(a1, a2, (unsigned __int64 *)a3);
}
