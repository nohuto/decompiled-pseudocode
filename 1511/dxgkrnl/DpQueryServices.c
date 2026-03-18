/*
 * XREFs of DpQueryServices @ 0x1C00E8890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, unsigned int a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(); // rax
  __int64 (__fastcall *v13)(); // rax
  __int64 (__fastcall *v14)(); // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx

  v4 = 0;
  v5 = (int)a2;
  if ( !a1
    || !a3
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v8 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    v4 = -1073741811;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1);
LABEL_50:
    v16[3] = DpQueryServices;
    v16[4] = 0LL;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return v4;
  }
  if ( KeGetCurrentIrql() )
  {
    v4 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 28LL) >= 0x2003u )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 1LL, v8);
      v15[6] = 0LL;
      v15[3] = 275LL;
      v15[4] = 21LL;
      v15[5] = DpQueryServices;
      v15[7] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    goto LABEL_50;
  }
  v9 = a2;
  if ( !a2 )
  {
    if ( a3[1] != 1 )
      goto LABEL_33;
    if ( *a3 == 56 )
    {
      if ( !*(_QWORD *)(v8 + 680) )
      {
        v4 = -1073741823;
        v17 = WdLogNewEntry5_WdWarning(a2, 1LL, v8, a4);
        *(_QWORD *)(v17 + 24) = DpQueryServices;
        *(_QWORD *)(v17 + 32) = -1073741823LL;
        goto LABEL_37;
      }
      v10 = *(_QWORD *)(v8 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 6) = DpiAgpSetAgpCommand;
      *((_QWORD *)a3 + 4) = &DpiAgpAllocatePool;
      v13 = DpiAgpFreePool;
LABEL_24:
      *((_QWORD *)a3 + 5) = v13;
      goto LABEL_17;
    }
LABEL_34:
    v4 = -1073741811;
    v17 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
    *(_QWORD *)(v17 + 24) = DpQueryServices;
    v18 = *a3;
    goto LABEL_35;
  }
  v9 = a2 - 1;
  if ( a2 == 1 )
  {
    if ( a3[1] != 1 )
      goto LABEL_33;
    if ( *a3 != 56 )
      goto LABEL_34;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = DpiDbgReportCreate;
    *((_QWORD *)a3 + 5) = DpiDbgReportSecondaryData;
    v14 = DpiDbgReportComplete;
    goto LABEL_28;
  }
  v9 = a2 - 2;
  if ( a2 == 2 )
  {
    if ( a3[1] != 1 )
      goto LABEL_33;
    if ( *a3 != 56 )
      goto LABEL_34;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = TdrTimedOperationStart;
    *((_QWORD *)a3 + 5) = TdrTimedOperationDelay;
    v14 = (__int64 (__fastcall *)())TdrTimedOperationWaitForSingleObject;
LABEL_28:
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 6) = v14;
    goto LABEL_18;
  }
  v9 = a2 - 3;
  if ( a2 == 3 )
  {
    if ( a3[1] != 1 )
      goto LABEL_33;
    if ( *a3 == 72 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = &DpOpenSpbResource;
      *((_QWORD *)a3 + 5) = DpCloseSpbResource;
      *((_QWORD *)a3 + 6) = &DpReadSpbResource;
      *((_QWORD *)a3 + 7) = &DpWriteSpbResource;
      v11 = (__int64 (__fastcall *)())&DpSpbResourceIoControl;
      goto LABEL_16;
    }
    goto LABEL_34;
  }
  v9 = a2 - 4;
  if ( a2 != 4 )
  {
    if ( a2 != 5 )
    {
      v4 = -1073741811;
      v17 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
      *(_QWORD *)(v17 + 24) = DpQueryServices;
      *(_QWORD *)(v17 + 32) = v5;
LABEL_37:
      WdLogEvent5_WdWarning(v17);
      return v4;
    }
    if ( a3[1] != 1 )
      goto LABEL_33;
    if ( *a3 == 48 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = &DpiEnumSystemFirmwareTables;
      v13 = (__int64 (__fastcall *)())DpiReadSystemFirmwareTable;
      goto LABEL_24;
    }
    goto LABEL_34;
  }
  if ( !*(_BYTE *)(v8 + 1091) )
  {
    v4 = -1073741816;
    v17 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
    *(_QWORD *)(v17 + 24) = DpQueryServices;
    *(_QWORD *)(v17 + 32) = a1;
    goto LABEL_37;
  }
  if ( *a3 != 72 )
    goto LABEL_34;
  if ( a3[1] != 1 )
  {
LABEL_33:
    v4 = -1073741811;
    v17 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
    *(_QWORD *)(v17 + 24) = DpQueryServices;
    v18 = a3[1];
LABEL_35:
    *(_QWORD *)(v17 + 32) = v18;
    goto LABEL_37;
  }
  v10 = *(_QWORD *)(v8 + 24);
  *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 4) = DxgkSqmOptedIn;
  *((_QWORD *)a3 + 5) = DxgkSqmSetDword;
  *((_QWORD *)a3 + 6) = DxgkSqmCreateDwordStreamEntry;
  *((_QWORD *)a3 + 7) = DxgkSqmAddToStream;
  v11 = DpGetPostDisplayInfoPlusEdid;
LABEL_16:
  *((_QWORD *)a3 + 8) = v11;
LABEL_17:
  *((_QWORD *)a3 + 1) = v10;
LABEL_18:
  WdpInterfaceReferenceNop();
  return v4;
}
