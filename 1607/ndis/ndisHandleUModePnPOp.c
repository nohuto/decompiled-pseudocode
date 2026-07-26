/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C00AD7C4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisIfAliasChange @ 0x1C00432A8 (ndisIfAliasChange.c)
 *     Template_qzz @ 0x1C004E8B8 (Template_qzz.c)
 *     WPP_SF_sZZ @ 0x1C004ECC8 (WPP_SF_sZZ.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CBE70 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00CC5AC (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CC6C0 (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleOrphanDevice @ 0x1C00F2A14 (ndisHandleOrphanDevice.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00F2BA8 (ndisHandleProtocolReconfigNotification.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  const char *v9; // r8
  const EVENT_DESCRIPTOR *v10; // rdx
  const char *v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // r8d

  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    {
      v9 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v9 = "TDI ";
      WPP_SF_sZZ(0x1Bu, v2, v9, (unsigned __int16 *)(a1 + 40), (unsigned __int16 *)(a1 + 24));
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000LL) != 0 )
    {
      v10 = (const EVENT_DESCRIPTOR *)&ProtocolBind;
LABEL_23:
      Template_qzz(v3, v10, v4, *(_DWORD *)a1, *(const wchar_t **)(a1 + 48), *(const wchar_t **)(a1 + 32));
    }
  }
  else if ( v5 == 2 )
  {
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    {
      v11 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v11 = "TDI ";
      WPP_SF_sZZ(0x1Cu, v2, v11, (unsigned __int16 *)(a1 + 40), (unsigned __int16 *)(a1 + 24));
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000LL) != 0 )
    {
      v10 = (const EVENT_DESCRIPTOR *)&ProtocolUnbind;
      goto LABEL_23;
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    if ( v12 > 9 )
    {
      if ( v12 > 0xB )
      {
        if ( v12 == 14 )
        {
          v6 = ndisIfAliasChange(a1 + 24, a1 + 40);
          goto LABEL_7;
        }
        if ( v12 != 15 )
          goto LABEL_10;
      }
    }
    else
    {
      if ( v12 == 9 )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = *(_DWORD *)(a1 + 16) >> 1;
        if ( v14 >= 2 && (*(_WORD *)(v13 + 2LL * (v14 - 1)) || *(_WORD *)(v13 + 2LL * (v14 - 2))) )
          goto LABEL_10;
        goto LABEL_38;
      }
      if ( !v12 )
        goto LABEL_10;
      if ( v12 > 2 )
      {
        if ( v12 != 3 )
        {
          if ( v12 == 5 )
          {
            v6 = ndisHandleProtocolUnloadNotification((PCUNICODE_STRING)(a1 + 40));
            goto LABEL_7;
          }
          if ( v12 == 6 )
          {
            v6 = ndisHandleOrphanDevice((PCUNICODE_STRING)(a1 + 24));
            goto LABEL_7;
          }
LABEL_10:
          v7 = -1073741811;
          goto LABEL_8;
        }
LABEL_38:
        v6 = ndisHandleProtocolReconfigNotification(
               a1 + 24,
               a1 + 40,
               *(_QWORD *)(a1 + 8),
               *(unsigned int *)(a1 + 16),
               v12);
        goto LABEL_7;
      }
      ndisHandleLegacyBindIoctl((PCUNICODE_STRING)(a1 + 24), v12, (const struct _UNICODE_STRING *)(a1 + 40));
    }
    v6 = ndisHandleBindNotification((PCUNICODE_STRING)(a1 + 24));
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != 2 )
    goto LABEL_10;
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
LABEL_7:
  v7 = v6;
LABEL_8:
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v7;
}
