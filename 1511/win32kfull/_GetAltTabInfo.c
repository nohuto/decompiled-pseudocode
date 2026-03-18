/*
 * XREFs of _GetAltTabInfo @ 0x1C0201210
 * Callers:
 *     NtUserGetAltTabInfo @ 0x1C0219830 (NtUserGetAltTabInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     TextCopy @ 0x1C00E5268 (TextCopy.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF7BC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall GetAltTabInfo(int a1, __int64 a2, CHAR *a3, ULONG a4, int a5)
{
  __int64 v8; // rsi
  struct tagSwitchWndInfo *v9; // rax
  __int64 v10; // rax
  ULONG BytesInMultiByteString[6]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a1;
  if ( gspwndAltTab && (v9 = Getpswi(gspwndAltTab)) != 0LL )
  {
    *(_DWORD *)(a2 + 4) = *((_DWORD *)v9 + 10);
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 14);
    *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 15);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 17);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v9 + 18);
    *(_DWORD *)(a2 + 24) = 43;
    *(_DWORD *)(a2 + 28) = 43;
    *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)v9 + 84);
    if ( a4 && (int)v8 >= 0 )
    {
      if ( (int)v8 < *((_DWORD *)v9 + 10)
        && (_mm_lfence(), (v10 = HMValidateHandleNoSecure(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8 * v8 + 32), 1)) != 0) )
      {
        if ( a5 )
        {
          RtlUnicodeToMultiByteN(a3, a4 - 1, BytesInMultiByteString, *(PCWCH *)(v10 + 224), *(_DWORD *)(v10 + 216));
          if ( BytesInMultiByteString[0] >= a4 )
          {
            *a3 = 0;
            return 0LL;
          }
          a3[BytesInMultiByteString[0]] = 0;
        }
        else
        {
          TextCopy(v10 + 216, a3, a4);
        }
      }
      else if ( a5 )
      {
        *a3 = 0;
      }
      else
      {
        *(_WORD *)a3 = 0;
      }
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(1168);
    return 0LL;
  }
}
