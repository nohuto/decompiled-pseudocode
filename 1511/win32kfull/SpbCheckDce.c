/*
 * XREFs of SpbCheckDce @ 0x1C004C480
 * Callers:
 *     SpbCheck @ 0x1C000C7D8 (SpbCheck.c)
 *     RevalidateDCE @ 0x1C004EEA0 (RevalidateDCE.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbCheckDce(__int64 a1)
{
  __int64 result; // rax
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
  struct tagWND *v15; // rbx
  struct tagRECT v16; // [rsp+20h] [rbp-20h] BYREF

  result = GreGetBounds(*(_QWORD *)(a1 + 8), &v16, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( !v3 || (v4 = *(_DWORD *)(a1 + 64), (v4 & 0x4000) != 0) || v4 < 0 )
    {
      bottom = v16.bottom;
      right = v16.right;
      top = v16.top;
      left = v16.left;
    }
    else
    {
      v5 = *(_DWORD *)(v3 + 32);
      v6 = *(_DWORD *)(v3 + 28);
      left = v6 + v16.left;
      right = v6 + v16.right;
      bottom = v5 + v16.bottom;
      top = v5 + v16.top;
      v16.left += v6;
      v16.top += v5;
      v16.right += v6;
      v16.bottom += v5;
    }
    v11 = *(_DWORD *)(a1 + 64);
    if ( (v11 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848LL);
      if ( StyleWindow )
      {
        v13 = *(_DWORD *)(StyleWindow + 116);
        v14 = *(_DWORD *)(StyleWindow + 112);
        v16.left = v14 + left;
        v16.right = v14 + right;
        v16.top = v13 + top;
        v16.bottom = v13 + bottom;
      }
    }
    v15 = *(struct tagWND **)(a1 + 16);
    result = IntersectRect(&v16, &v16, (char *)v15 + 112);
    if ( (_DWORD)result )
      return SpbCheckRect(v15, &v16, v11);
  }
  return result;
}
