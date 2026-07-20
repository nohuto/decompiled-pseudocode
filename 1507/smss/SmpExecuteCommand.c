/*
 * XREFs of SmpExecuteCommand @ 0x14000350C
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140003090 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140003280 (SmscpExecuteInitialCommand.c)
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     SmpLoadDeferredSubsystem @ 0x1400122F0 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmpInvokeAutoChk @ 0x140002888 (SmpInvokeAutoChk.c)
 *     SmscpLoadSubSystem @ 0x1400033EC (SmscpLoadSubSystem.c)
 *     SmpParseCommandLine @ 0x140003620 (SmpParseCommandLine.c)
 *     SmpExecuteImage @ 0x140003C84 (SmpExecuteImage.c)
 *     SmpLoadSubSystem @ 0x1400123A4 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(__int64 a1, __int64 a2, __int64 a3, int a4, PRTL_USER_PROCESS_INFORMATION a5)
{
  struct _UNICODE_STRING *v6; // rdi
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-40h]
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v14; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF

  v15 = a4;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v6 = &v14;
  if ( (a4 & 0x400) != 0 )
    v6 = 0LL;
  result = SmpParseCommandLine(a1, &v15, &UnicodeString, v6, &v13);
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) != 0 )
    {
      v9 = SmpInvokeAutoChk(&UnicodeString, (__int64)v6, &v13, v15);
    }
    else if ( (v15 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        v9 = SmpLoadSubSystem(&UnicodeString, v11, v15);
      else
        v9 = SmscpLoadSubSystem(&UnicodeString, (__int64)v6, a1, v8, v15);
    }
    else
    {
      if ( (v15 & 0x10) != 0 )
      {
        v10 = -1073741772;
        goto LABEL_10;
      }
      v9 = SmpExecuteImage(&UnicodeString, v15, a5);
    }
    v10 = v9;
LABEL_10:
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v13);
    if ( v6 )
      RtlFreeUnicodeString(&v14);
    return v10;
  }
  return result;
}
