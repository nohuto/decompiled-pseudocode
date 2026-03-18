/*
 * XREFs of _GetAltTabInfo @ 0x1C01F8510
 * Callers:
 *     NtUserGetAltTabInfo @ 0x1C02125F0 (NtUserGetAltTabInfo.c)
 * Callees:
 *     TextCopy @ 0x1C0067E84 (TextCopy.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall GetAltTabInfo(int a1, __int64 a2, CHAR *a3, ULONG a4, int a5)
{
  __int64 v8; // rdi
  struct tagSwitchWndInfo *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG BytesInMultiByteString[6]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a1;
  if ( gspwndAltTab && (v9 = Getpswi(gspwndAltTab)) != 0LL )
  {
    v11 = *((unsigned int *)v9 + 10);
    *(_DWORD *)(a2 + 4) = v11;
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 14);
    *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 15);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 17);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v9 + 18);
    *(_DWORD *)(a2 + 24) = *((_DWORD *)v9 + 29);
    *(_DWORD *)(a2 + 28) = *((_DWORD *)v9 + 29);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)v9 + 84);
    if ( a4 && (int)v8 >= 0 )
    {
      if ( (int)v8 < *((_DWORD *)v9 + 10)
        && (_mm_lfence(),
            LOBYTE(v11) = 1,
            (v12 = HMValidateHandleNoSecure(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8 * v8 + 32), v11, (__int64)v9, v10)) != 0) )
      {
        if ( a5 )
        {
          RtlUnicodeToMultiByteN(a3, a4 - 1, BytesInMultiByteString, *(PCWCH *)(v12 + 224), *(_DWORD *)(v12 + 216));
          if ( BytesInMultiByteString[0] >= a4 )
          {
            *a3 = 0;
            return 0LL;
          }
          a3[BytesInMultiByteString[0]] = 0;
        }
        else
        {
          TextCopy(v12 + 216, a3, a4);
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
    UserSetLastError(1168LL);
    return 0LL;
  }
}
