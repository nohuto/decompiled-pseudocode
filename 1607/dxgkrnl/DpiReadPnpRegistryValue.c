/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C00D90C0
 * Callers:
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00800A8 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00F3DE4 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00F5468 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00F66C0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     DpiFdoHandleStartDevice @ 0x1C00F8A00 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00FCA80 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C018CF40 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C0190DE0 (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01935A0 (DpiQueryAdapterRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00D91F0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rcx
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v10; // eax
  _QWORD *v11; // rax
  size_t v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Length = a4 + 16;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v13 = a4;
        if ( a4 > PoolWithTag[2] )
          v13 = PoolWithTag[2];
        memmove(a3, PoolWithTag + 3, v13);
        v14 = PoolWithTag[2];
        if ( a4 > (unsigned int)v14 )
          memset(&a3[v14], 0, a4 - (unsigned int)v14);
        LODWORD(a1) = 0;
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdEvent(0x80000000LL);
        v11[4] = (int)a5;
        v11[3] = a1;
        v11[5] = 0LL;
        v11[6] = 0LL;
        WdLogEvent5_WdEvent(v11);
      }
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v8);
    LODWORD(a1) = -1073741801;
    *(_QWORD *)(v15 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v15);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
