/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1C00B9078
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00B73F8 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00B8330 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B8708 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING AnsiString)
{
  struct _STRING *v4; // rdi
  unsigned __int16 v6; // bx
  wchar_t *v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v4 = AnsiString;
  if ( (_BYTE)NlsMbCodePageTag )
    v6 = RtlxAnsiStringToUnicodeSize(AnsiString);
  else
    v6 = 2 * (AnsiString->Length + 1);
  if ( v6 )
  {
    v7 = (wchar_t *)operator new(v6 + 2LL, 0x63644356u, PagedPool);
    v9 = v7;
    if ( v7 )
    {
      memset(v7, 0, v6 + 2LL);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v6;
      DestinationString.Buffer = v9;
      LODWORD(v4) = RtlAnsiStringToUnicodeString(&DestinationString, v4, 0);
      if ( (int)v4 >= 0 )
      {
        v10 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v6 + 2);
        v4 = (struct _STRING *)v10;
        if ( v10 < 0 )
        {
          v15 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v15 + 24) = v4;
          WdLogEvent5_WdError(v15);
        }
      }
      operator delete(v9);
      return (unsigned int)v4;
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v14 + 24) = v6;
      WdLogEvent5_WdLowResource(v14);
      return 3221225495LL;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(1LL);
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
}
