/*
 * XREFs of SpbCheckDce @ 0x1C0072680
 * Callers:
 *     SpbCheck @ 0x1C000E53C (SpbCheck.c)
 *     RevalidateDCE @ 0x1C00750C0 (RevalidateDCE.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

char __fastcall SpbCheckDce(__int64 a1)
{
  int Bounds; // eax
  __int64 v3; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  LONG left; // edi
  LONG right; // esi
  LONG bottom; // r14d
  LONG top; // r15d
  unsigned int v11; // r12d
  __int64 StyleWindow; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rbx
  struct tagRECT v17; // [rsp+20h] [rbp-20h] BYREF

  Bounds = GreGetBounds(*(_QWORD *)(a1 + 8), &v17, 0LL);
  if ( Bounds )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( !v3 || (v4 = *(_DWORD *)(a1 + 64), (v4 & 0x4000) != 0) || v4 < 0 )
    {
      bottom = v17.bottom;
      right = v17.right;
      top = v17.top;
      left = v17.left;
    }
    else
    {
      v5 = *(_DWORD *)(v3 + 32);
      v6 = *(_DWORD *)(v3 + 28);
      left = v6 + v17.left;
      right = v6 + v17.right;
      bottom = v5 + v17.bottom;
      top = v5 + v17.top;
      v17.left += v6;
      v17.top += v5;
      v17.right += v6;
      v17.bottom += v5;
    }
    v11 = *(_DWORD *)(a1 + 64);
    if ( (v11 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848LL);
      if ( StyleWindow )
      {
        v13 = *(_DWORD *)(StyleWindow + 116);
        v14 = *(_DWORD *)(StyleWindow + 112);
        v17.left = v14 + left;
        v17.right = v14 + right;
        v17.top = v13 + top;
        v17.bottom = v13 + bottom;
      }
    }
    v15 = *(_QWORD *)(a1 + 16);
    Bounds = IntersectRect(&v17, &v17.left, (int *)(v15 + 112));
    if ( Bounds )
      LOBYTE(Bounds) = SpbCheckRect((struct tagWND *)v15, &v17, v11);
  }
  return Bounds;
}
