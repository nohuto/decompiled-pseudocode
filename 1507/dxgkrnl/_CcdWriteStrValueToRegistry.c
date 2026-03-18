/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1C009F958
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C009DB4C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C009EA88 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009EE60 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        PCANSI_STRING AnsiString,
        __int64 a4)
{
  struct _STRING *v5; // rdi
  unsigned __int16 v7; // bx
  wchar_t *v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v5 = AnsiString;
  if ( (_BYTE)NlsMbCodePageTag )
    v7 = RtlxAnsiStringToUnicodeSize(AnsiString);
  else
    v7 = 2 * (AnsiString->Length + 1);
  if ( v7 )
  {
    v8 = (wchar_t *)operator new[](v7 + 2LL, 0x63644356u, PagedPool);
    v10 = v8;
    if ( v8 )
    {
      memset(v8, 0, v7 + 2LL);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v7;
      DestinationString.Buffer = v10;
      LODWORD(v5) = RtlAnsiStringToUnicodeString(&DestinationString, v5, 0);
      if ( (int)v5 >= 0 )
      {
        v11 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v7 + 2);
        v5 = (struct _STRING *)v11;
        if ( v11 < 0 )
        {
          v16 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v16 + 24) = v5;
          WdLogEvent5_WdError(v16);
        }
      }
      operator delete(v10);
      return (unsigned int)v5;
    }
    else
    {
      v15 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v15 + 24) = v7;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(1LL, ValueName, AnsiString, a4);
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
}
