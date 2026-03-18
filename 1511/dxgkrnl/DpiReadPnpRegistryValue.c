/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C005CD60
 * Callers:
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C0090C08 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiFdoHandleStartDevice @ 0x1C00CDD30 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00CE9F0 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00DB25C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00DCAC8 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C01650AC (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C0168F1C (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C016B814 (DpiQueryAdapterRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C005D7E0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *PoolWithTag; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  _QWORD *v14; // rax
  size_t v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  if ( a4 < 4 )
    return 3221225507LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Length = a4 + 16;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v13;
      if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
      {
        v16 = a4;
        if ( a4 > PoolWithTag[2] )
          v16 = PoolWithTag[2];
        memmove(a3, PoolWithTag + 3, v16);
        v17 = PoolWithTag[2];
        if ( a4 > (unsigned int)v17 )
          memset(&a3[v17], 0, a4 - (unsigned int)v17);
        LODWORD(a1) = 0;
      }
      else
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v14[3] = &DpiReadPnpRegistryValue;
        v14[5] = (int)a5;
        v14[4] = a1;
        v14[6] = 0LL;
        v14[7] = 0LL;
        WdLogEvent5_WdEvent(v14);
      }
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
    LODWORD(a1) = -1073741801;
    v18[3] = &DpiReadPnpRegistryValue;
    v18[4] = ExAllocatePoolWithTag;
    v18[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
