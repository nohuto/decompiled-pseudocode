/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C0099308
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfAliasChange @ 0x1C00207CC (ndisIfAliasChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     Template_qzz @ 0x1C00496A8 (Template_qzz.c)
 *     WPP_SF_sZZ @ 0x1C0049A80 (WPP_SF_sZZ.c)
 *     ndisHandleBindNotification @ 0x1C00B3678 (ndisHandleBindNotification.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CD6EC (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 *     ndisHandleOrphanDevice @ 0x1C00F21DC (ndisHandleOrphanDevice.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // r8d
  const char *v12; // r8
  const EVENT_DESCRIPTOR *v13; // rdx
  const char *v14; // r8

  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 4);
  ndisPnPMutexOwner = 69077;
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
    {
      v12 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v12 = "TDI ";
      WPP_SF_sZZ(0x1Bu, v2, v12, (__int64 *)(a1 + 40), (unsigned __int16 *)(a1 + 24));
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000LL) != 0 )
    {
      v13 = (const EVENT_DESCRIPTOR *)&ProtocolBind;
LABEL_33:
      Template_qzz(v3, v13, v4, *(_DWORD *)a1, *(const wchar_t **)(a1 + 48), *(const wchar_t **)(a1 + 32));
    }
  }
  else if ( v5 == 2 )
  {
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
    {
      v14 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v14 = "TDI ";
      WPP_SF_sZZ(0x1Cu, v2, v14, (__int64 *)(a1 + 40), (unsigned __int16 *)(a1 + 24));
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000LL) != 0 )
    {
      v13 = (const EVENT_DESCRIPTOR *)&ProtocolUnbind;
      goto LABEL_33;
    }
  }
  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      if ( !ndisTdiPnPHandler )
      {
        v7 = -1073741823;
        goto LABEL_8;
      }
      v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD, _DWORD))ndisTdiPnPHandler)(
             a1 + 40,
             a1 + 24,
             a1 + 56,
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)(a1 + 16),
             *(_DWORD *)(a1 + 4));
      goto LABEL_7;
    }
LABEL_23:
    v7 = -1073741811;
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 > 9 )
  {
    if ( v9 > 0xB )
    {
      if ( v9 == 14 )
      {
        v6 = ndisIfAliasChange(a1 + 24, a1 + 40);
        goto LABEL_7;
      }
      if ( v9 != 15 )
        goto LABEL_23;
    }
    goto LABEL_16;
  }
  if ( v9 == 9 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_DWORD *)(a1 + 16) >> 1;
    if ( v11 >= 2 && (*(_WORD *)(v10 + 2LL * (v11 - 1)) || *(_WORD *)(v10 + 2LL * (v11 - 2))) )
      goto LABEL_23;
    goto LABEL_22;
  }
  if ( !v9 )
    goto LABEL_23;
  if ( v9 <= 2 )
  {
    ndisHandleLegacyBindIoctl((PCUNICODE_STRING)(a1 + 24), v9, (const struct _UNICODE_STRING *)(a1 + 40));
LABEL_16:
    v6 = ndisHandleBindNotification((PCUNICODE_STRING)(a1 + 24));
    goto LABEL_7;
  }
  switch ( v9 )
  {
    case 3u:
LABEL_22:
      v6 = ndisHandleProtocolReconfigNotification((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(a1 + 40), v9);
      break;
    case 5u:
      v6 = ndisHandleProtocolUnloadNotification((PCUNICODE_STRING)(a1 + 40));
      break;
    case 6u:
      v6 = ndisHandleOrphanDevice((PCUNICODE_STRING)(a1 + 24));
      break;
    default:
      goto LABEL_23;
  }
LABEL_7:
  v7 = v6;
LABEL_8:
  ndisPnPMutexOwner = 0;
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v7;
}
