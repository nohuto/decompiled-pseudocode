/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C00CE800
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00CBE20 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00CDD24 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiFdoHandleStartDevice @ 0x1C00D7A80 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00DF580 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C0160CD4 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C01649EC (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C0167244 (DpiQueryAdapterRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00B45D0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, int a5)
{
  __int64 v8; // rcx
  unsigned int *PoolWithTag; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
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
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 0x20019u, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
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
        v14 = (_QWORD *)WdLogNewEntry5_WdEvent(0x80000000LL, v11, v12, v13);
        v14[3] = DpiReadPnpRegistryValue;
        v14[5] = a5;
        v14[4] = a1;
        v14[6] = 0LL;
        v14[7] = 0LL;
        WdLogEvent5_WdEvent(v14);
      }
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    LODWORD(a1) = -1073741801;
    v18[3] = DpiReadPnpRegistryValue;
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
