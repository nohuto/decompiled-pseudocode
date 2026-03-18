/*
 * XREFs of HmgFreeObjectAttr @ 0x1C0074420
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005D500 (NtGdiCreateRectRgn.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v5);
    v9 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v7, v6, v8);
      v12 = v9 + 208;
      if ( *(_QWORD *)v12 == v12 || (v13 = *(_QWORD **)v12, *(_DWORD *)(*(_QWORD *)v12 + 16LL) == 170) )
      {
        v13 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
        if ( !v13 )
          return GreReleaseHmgrSemaphore(v10, (__int64)v13, v11);
        v14 = *(_QWORD **)v12;
        *v13 = *(_QWORD *)v12;
        v13[1] = v12;
        if ( v14[1] != v12 )
          __fastfail(3u);
        v14[1] = v13;
        *(_QWORD *)v12 = v13;
        *((_DWORD *)v13 + 4) = 0;
      }
      v13[(unsigned int)(*((_DWORD *)v13 + 4))++ + 3] = a1;
      *(_QWORD *)(v9 + 48) = a1;
      return GreReleaseHmgrSemaphore(v10, (__int64)v13, v11);
    }
  }
  return result;
}
