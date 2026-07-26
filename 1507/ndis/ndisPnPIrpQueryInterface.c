/*
 * XREFs of ndisPnPIrpQueryInterface @ 0x1C009F92C
 * Callers:
 *     ndisPnPDispatch @ 0x1C009FAA0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisPnPQuerySriovInterface @ 0x1C00DBAA4 (ndisPnPQuerySriovInterface.c)
 */

__int64 __fastcall ndisPnPIrpQueryInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  __int64 v8; // rax

  v6 = 0;
  v7 = *(_QWORD **)(*(_QWORD *)(a3 + 184) + 8LL);
  v8 = *v7 - *(_QWORD *)&GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data1;
  if ( *v7 == *(_QWORD *)&GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data1 )
    v8 = v7[1] - *(_QWORD *)GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data4;
  if ( v8 )
  {
    *a5 = 1;
  }
  else
  {
    v6 = ndisPnPQuerySriovInterface(a2, a3);
    *(_DWORD *)(a3 + 48) = v6;
    *a5 = 0;
  }
  return v6;
}
