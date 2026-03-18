/*
 * XREFs of HmgFreeObjectAttr @ 0x1C005AF54
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v7 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v5, v4, v6);
      v9 = v7 + 208;
      if ( *(_QWORD *)v9 == v9 || (v10 = *(_QWORD **)v9, *(_DWORD *)(*(_QWORD *)v9 + 16LL) == 170) )
      {
        v10 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
        if ( !v10 )
          return GreReleaseHmgrSemaphore(v8);
        v11 = *(_QWORD *)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
          __fastfail(3u);
        *v10 = v11;
        v10[1] = v9;
        *(_QWORD *)(v11 + 8) = v10;
        *(_QWORD *)v9 = v10;
        *((_DWORD *)v10 + 4) = 0;
      }
      v10[(unsigned int)(*((_DWORD *)v10 + 4))++ + 3] = a1;
      *(_QWORD *)(v7 + 48) = a1;
      return GreReleaseHmgrSemaphore(v8);
    }
  }
  return result;
}
