/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009EE60
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00B0F90 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C009EBEC (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C009EFF8 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C009F958 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  int v13; // eax
  __int64 v14; // r8
  CCD_SET_STRING_ID *v15; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  struct _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  v4 = (int)a3;
  if ( (unsigned int)a3 <= 8 && (v7 = 278, _bittest(&v7, a3)) )
  {
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(15LL, &ValueName);
    v8 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v11 = v8;
    if ( v8 < 0 )
      goto LABEL_10;
    LOBYTE(v10) = 1;
    TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                                  a1,
                                                  15LL,
                                                  v10);
    if ( TopologySetIdByClass )
      CCD_SET_STRING_ID::operator=(TopologySetIdByClass, a2);
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass((unsigned int)v4, &ValueName);
    v13 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v11 = v13;
    if ( v13 < 0 )
    {
LABEL_10:
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v17[3] = v11;
      v17[4] = a2;
      v17[5] = v4;
      v17[6] = a1;
      v17[7] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdError(v17);
    }
    else
    {
      LOBYTE(v14) = 1;
      v15 = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                   a1,
                                   (unsigned int)v4,
                                   v14);
      if ( v15 )
        CCD_SET_STRING_ID::operator=(v15, a2);
    }
    return (unsigned int)v11;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v18[3] = a2;
    v18[4] = v4;
    v18[5] = a1;
    v18[6] = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdAssertion(v18);
    return 3221225485LL;
  }
}
