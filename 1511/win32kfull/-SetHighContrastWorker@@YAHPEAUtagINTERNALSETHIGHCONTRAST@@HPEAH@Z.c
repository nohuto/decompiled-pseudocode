/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6C88
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00F51E0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C011FF84 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     __report_rangecheckfailure @ 0x1C01C3198 (__report_rangecheckfailure.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3)
{
  unsigned __int16 v6; // bx
  const void *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 ProfileUserName; // rbx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 v13; // rbx
  int v14; // r10d
  __int64 v15; // rbx
  _BYTE v16[24]; // [rsp+38h] [rbp-1A0h] BYREF
  wchar_t Dest[40]; // [rsp+50h] [rbp-188h] BYREF
  char v18[256]; // [rsp+A0h] [rbp-138h] BYREF

  v6 = *((_WORD *)a1 + 4);
  if ( v6 >= 0x100u )
    return 0LL;
  v8 = (const void *)*((_QWORD *)a1 + 2);
  if ( v8 )
    memmove(v18, v8, v6);
  v9 = 2 * ((unsigned __int64)v6 >> 1);
  if ( v9 >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)&v18[v9] = 0;
  if ( a2 )
  {
    ProfileUserName = CreateProfileUserName(v16);
    RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a1 + 1));
    v11 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", Dest);
    *a3 = v11;
    if ( *((_QWORD *)a1 + 2) )
      v11 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", v18);
    FreeProfileUserName(ProfileUserName, v16);
  }
  else
  {
    *a3 = 1;
    v11 = 0;
  }
  if ( *a3 )
  {
    v12 = gHighContrast[1];
    v13 = a2 == 0 ? 4 : 0;
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW((char *)gHighContrastDefaultScheme, 128LL, v18);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v14 = *((_DWORD *)a1 + 1);
    if ( (v14 & 0x1000) == 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        if ( (v12 & 1) != 0 )
          v15 = v13 | 0xA;
        else
          v15 = v13 | 8;
      }
      else
      {
        v15 = v13 | 9;
      }
      PostWinlogonMessage(1026LL, v15);
    }
  }
  return v11;
}
