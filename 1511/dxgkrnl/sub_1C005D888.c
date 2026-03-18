/*
 * XREFs of sub_1C005D888 @ 0x1C005D888
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E190 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E568 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E674 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall sub_1C005D888(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING AnsiString)
{
  struct _STRING *v4; // rdi
  unsigned __int16 v6; // bx
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  wchar_t *v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v4 = AnsiString;
  if ( (_BYTE)NlsMbCodePageTag )
    v6 = RtlxAnsiStringToUnicodeSize(AnsiString);
  else
    v6 = 2 * (AnsiString->Length + 1);
  if ( v6 )
  {
    v7 = (wchar_t *)operator new[](v6 + 2LL, 0x63644356u, PagedPool);
    v12 = v7;
    if ( v7 )
    {
      memset(v7, 0, v6 + 2LL);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v6;
      DestinationString.Buffer = v12;
      LODWORD(v4) = RtlAnsiStringToUnicodeString(&DestinationString, v4, 0);
      if ( (int)v4 >= 0 )
      {
        v13 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v6 + 2);
        v4 = (struct _STRING *)v13;
        if ( v13 < 0 )
        {
          v18 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v18 + 24) = v4;
          WdLogEvent5_WdError(v18);
        }
      }
      operator delete(v12);
      return (unsigned int)v4;
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(1LL);
    WdLogEvent5_WdAssertion(v16);
    return 3221225485LL;
  }
}
