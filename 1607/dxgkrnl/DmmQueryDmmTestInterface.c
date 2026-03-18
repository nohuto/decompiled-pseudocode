/*
 * XREFs of DmmQueryDmmTestInterface @ 0x1C01A79B8
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C00D6AA0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DmmQueryDmmTestInterface(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD *v7; // rax
  _QWORD v8[14]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+C0h] [rbp+67h] BYREF

  if ( *a1 == 56 && a1[1] == 1 )
  {
    v9 = 0;
    memset(v8, 0, sizeof(v8));
    v8[0] = 0LL;
    v8[5] = 0LL;
    v8[2] = L"ExposeDmmTestInterface";
    LODWORD(v8[1]) = 288;
    v8[3] = &v9;
    LODWORD(v8[4]) = 0x4000000;
    LODWORD(v8[6]) = 4;
    RtlQueryRegistryValuesEx(1LL, L"dxgkrnl", v8, 0LL, 0LL);
    if ( v9 == 1 )
    {
      *((_QWORD *)a1 + 1) = 0LL;
      *((_QWORD *)a1 + 2) = DxgkCddInterfaceDereference;
      *((_QWORD *)a1 + 3) = DxgkCddInterfaceDereference;
      *((_QWORD *)a1 + 4) = DXGDMMTEST_INTERFACE_IMPL::CreateVidPn;
      *((_QWORD *)a1 + 5) = DXGDMMTEST_INTERFACE_IMPL::CreateVidPnFromActive;
      *((_QWORD *)a1 + 6) = DXGDMMTEST_INTERFACE_IMPL::ReleaseVidPn;
      result = 0LL;
      *a2 = 56;
    }
    else
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v4);
      WdLogEvent5_WdDmmEvent(v5);
      return 3221225659LL;
    }
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7[3] = *a1;
    v7[4] = 56LL;
    v7[5] = a1[1];
    v7[6] = 1LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  return result;
}
