/*
 * XREFs of SmpExecuteCommand @ 0x140001FB4
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140001B30 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140001D10 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x140003620 (SmpStartCsr.c)
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x140012700 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmscpLoadSubSystem @ 0x140001E6C (SmscpLoadSubSystem.c)
 *     SmpParseCommandLine @ 0x1400020D0 (SmpParseCommandLine.c)
 *     SmpExecuteImage @ 0x140002660 (SmpExecuteImage.c)
 *     SmpInvokeAutoChk @ 0x140004ED8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400127B4 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(__int64 a1, unsigned int a2, __int64 a3, int a4, PRTL_USER_PROCESS_INFORMATION a5)
{
  struct _UNICODE_STRING *v7; // rdi
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v12; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF

  v14 = a4;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v7 = &v13;
  if ( (a4 & 0x400) != 0 )
    v7 = 0LL;
  result = SmpParseCommandLine(a1, &v14, &UnicodeString, v7);
  if ( (int)result >= 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      v9 = SmpInvokeAutoChk(&UnicodeString);
    }
    else if ( (v14 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        v9 = SmpLoadSubSystem(&UnicodeString, (int)&v12, v14);
      else
        v9 = SmscpLoadSubSystem(&UnicodeString, (__int64)v7, a1, a2, v14);
    }
    else
    {
      if ( (v14 & 0x10) != 0 )
      {
        v10 = -1073741772;
        goto LABEL_10;
      }
      v9 = SmpExecuteImage(&UnicodeString, v14, a5);
    }
    v10 = v9;
LABEL_10:
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v12);
    if ( v7 )
      RtlFreeUnicodeString(&v13);
    return v10;
  }
  return result;
}
