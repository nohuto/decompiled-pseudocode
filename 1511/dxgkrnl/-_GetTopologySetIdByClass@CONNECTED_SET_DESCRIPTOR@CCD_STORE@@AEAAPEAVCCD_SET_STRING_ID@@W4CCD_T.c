/*
 * XREFs of ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C005E2F4
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E4E4 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E568 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax

  v3 = a2;
  switch ( a2 )
  {
    case 1:
      v6 = a1 + 56;
      break;
    case 2:
      v6 = a1 + 64;
      break;
    case 4:
      v6 = a1 + 72;
      break;
    case 8:
      v6 = a1 + 80;
      break;
    case 15:
      v6 = a1 + 88;
      break;
    default:
      v13 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v13 + 24) = v3;
      WdLogEvent5_WdAssertion(v13);
      v6 = a1 + 88;
      break;
  }
  if ( !*(_QWORD *)v6 && a3 )
  {
    v7 = operator new[](0x38uLL, 0x63644356u, PagedPool);
    if ( v7 )
    {
      v9 = 0LL;
      *(_DWORD *)v7 = 0;
      v7[1] = 0LL;
      v7[2] = 0LL;
      v7[3] = 0LL;
      *((_WORD *)v7 + 16) = 0;
      v7[5] = 0LL;
      v7[6] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    *(_QWORD *)v6 = v7;
    if ( !v7 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      v14[3] = 56LL;
      v14[4] = v3;
      v14[5] = a1;
      v14[6] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdLowResource(v14);
    }
  }
  return *(_QWORD *)v6;
}
