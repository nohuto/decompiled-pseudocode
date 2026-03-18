/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x14012E4D0
 * Callers:
 *     GetDCOrgOnScreen @ 0x140040AF8 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 * Callees:
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax

  v6 = 0;
  GreLockVisRgnShared(a1, a2, a3, a4);
  v7 = LookupDC(a1, 1LL);
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v7 + 80)) )
    {
      *(_QWORD *)a2 = 0LL;
LABEL_11:
      v6 = 1;
    }
    else
    {
      v10 = v9;
      while ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 40);
        if ( (*(_BYTE *)(v11 + 27) & 0x20) != 0 )
        {
          v8 = *(_WORD *)(v11 + 42) & 0x2FFF;
          if ( v9 == v10 || (_DWORD)v8 != 669 )
          {
            *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
            v8 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 92LL);
            *(_DWORD *)(a2 + 4) = v8;
            goto LABEL_11;
          }
          break;
        }
        v9 = *(_QWORD *)(v9 + 104);
      }
    }
  }
  GreUnlockVisRgn(v8);
  return v6;
}
