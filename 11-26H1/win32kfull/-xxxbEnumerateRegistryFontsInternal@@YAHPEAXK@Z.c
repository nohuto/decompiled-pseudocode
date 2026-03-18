/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140006DC8
 * Callers:
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1400CC45C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x140004EB8 (ExchangeW32ThreadLock.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x140007000 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     xxxAddFontResourceW @ 0x140007100 (xxxAddFontResourceW.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x14028CDD0 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle)
{
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rax
  ULONG v6; // esi
  NTSTATUS v7; // eax
  unsigned __int64 v8; // rax
  __int16 v9; // bx
  WCHAR *v10; // rbx
  __int64 v11; // rax
  void *v12; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v15[4]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v16[4]; // [rsp+A0h] [rbp+17h] BYREF
  wchar_t v17; // [rsp+A8h] [rbp+1Fh]

  memset_0(v15, 0, 0x48uLL);
  v2 = 1074;
  *(_QWORD *)v16 = *(_QWORD *)L".FON";
  v17 = aFon[4];
  ResultLength = 0;
  result = Win32AllocPoolZInit(1074LL, 1919972181LL);
  v4 = result;
  if ( result )
  {
    v5 = PtiCurrent();
    v6 = 0;
    v14[0] = *((_QWORD *)v5 + 47);
    *((_QWORD *)v5 + 47) = v14;
    v14[2] = Win32FreePool;
    v14[1] = v4;
    while ( 1 )
    {
      v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, (PVOID)v4, v2 - 10, &ResultLength);
      if ( v7 != -2147483643 && v7 != -1073741789
        || (ResultLength += 10, v11 = Win32AllocPoolZInit(ResultLength, 1919972181LL), (v12 = (void *)v11) != 0LL)
        && (ExchangeW32ThreadLock(v11, (__int64)v14),
            v2 = ResultLength,
            v4 = (__int64)v12,
            v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, v12, ResultLength - 10, &ResultLength),
            v7 != -2147483643)
        && v7 != -1073741789 )
      {
        if ( v7 < 0 )
        {
          PopAndFreeW32ThreadLock(v14);
          return 1LL;
        }
        if ( *(_DWORD *)(v4 + 4) == 1 )
        {
          v8 = (unsigned __int64)*(unsigned int *)(v4 + 16) >> 1;
          v9 = *(_WORD *)(v4 + 2 * v8 + 20);
          *(_WORD *)(v4 + 2 * v8 + 20) = 0;
          vCheckMMInstance((wchar_t *)(v4 + 20), (struct tagDESIGNVECTOR *)v15);
          *(_WORD *)(v4 + 2 * ((unsigned __int64)*(unsigned int *)(v4 + 16) >> 1) + 20) = v9;
          v10 = (WCHAR *)(v4 + *(unsigned int *)(v4 + 8));
          if ( wcschr(v10, 0x2Eu) )
            xxxAddFontResourceW(v10);
          else
            RtlStringCchCatW(v10, (unsigned __int64)(v2 - *(_DWORD *)(v4 + 8)) >> 1, v16);
        }
      }
      ++v6;
    }
  }
  return result;
}
