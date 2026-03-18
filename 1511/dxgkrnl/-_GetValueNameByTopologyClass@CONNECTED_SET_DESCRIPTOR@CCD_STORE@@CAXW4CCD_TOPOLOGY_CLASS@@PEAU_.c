/*
 * XREFs of ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C005E054
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E4E4 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E568 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  const wchar_t *v4; // rax
  __int16 v5; // ax
  __int16 result; // ax
  const wchar_t *v7; // rax
  __int64 v8; // rax

  v3 = (int)a1;
  if ( (_DWORD)a1 == 1 )
  {
    v7 = L"Internal";
    goto LABEL_11;
  }
  if ( (_DWORD)a1 == 2 )
  {
    *(_QWORD *)(a2 + 8) = L"Clone";
    v5 = 12;
    goto LABEL_9;
  }
  if ( (_DWORD)a1 != 4 )
  {
    if ( (_DWORD)a1 != 8 )
    {
      if ( (_DWORD)a1 != 15 )
      {
        v8 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v8 + 24) = v3;
        WdLogEvent5_WdAssertion(v8);
      }
      v4 = L"Recent";
      goto LABEL_8;
    }
    v7 = L"External";
LABEL_11:
    *(_QWORD *)(a2 + 8) = v7;
    v5 = 18;
    goto LABEL_9;
  }
  v4 = L"eXtend";
LABEL_8:
  *(_QWORD *)(a2 + 8) = v4;
  v5 = 14;
LABEL_9:
  *(_WORD *)(a2 + 2) = v5;
  result = v5 - 2;
  *(_WORD *)a2 = result;
  return result;
}
