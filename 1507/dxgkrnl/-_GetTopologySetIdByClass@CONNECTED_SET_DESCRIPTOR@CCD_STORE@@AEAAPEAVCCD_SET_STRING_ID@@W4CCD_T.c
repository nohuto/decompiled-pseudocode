/*
 * XREFs of ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C009EBEC
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009EDDC (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009EE60 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // bp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax

  v3 = (int)a2;
  v4 = a3;
  switch ( (_DWORD)a2 )
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
    case 0xF:
      v6 = a1 + 88;
      break;
    default:
      v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, (unsigned int)(a2 - 8));
      *(_QWORD *)(v10 + 24) = v3;
      WdLogEvent5_WdAssertion(v10);
      v6 = a1 + 88;
      break;
  }
  if ( !*(_QWORD *)v6 && v4 )
  {
    v7 = operator new[](0x38uLL, 0x63644356u, PagedPool);
    if ( v7 )
    {
      v8 = 0LL;
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
      v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
      v11[3] = 56LL;
      v11[4] = v3;
      v11[5] = a1;
      v11[6] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdLowResource(v11);
    }
  }
  return *(_QWORD *)v6;
}
