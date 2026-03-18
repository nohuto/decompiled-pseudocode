/*
 * XREFs of KseQueryDeviceData @ 0x1404FA6D4
 * Callers:
 *     KseQueryDeviceFlags @ 0x1404FA480 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x14066ABBC (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x140002940 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x14011BA00 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     KsepCacheDeviceFree @ 0x1404FA2C0 (KsepCacheDeviceFree.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1404FA5A0 (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x1404FA868 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x14054EAB0 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x14054EF0C (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x14061D1B4 (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(WCHAR *SourceString, const WCHAR *a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  int v6; // esi
  BOOL v9; // ecx
  int RegistryDeviceData; // ebx
  __int64 v11; // rcx
  int v13; // r8d
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  char v16; // al
  void *v17; // [rsp+20h] [rbp-38h]
  int v18[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v18 = 0LL;
  v6 = (int)a3;
  if ( dword_140305F14 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = (*a3 & 0x20000000) != 0;
  *a3 = 0;
  if ( !v9 )
  {
    HIDWORD(v17) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData((__int64)SourceString, a2, a3, a4);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache(v11);
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, (int)a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v18);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v13 = v6;
  v14 = *(_QWORD **)v18;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v18[0], (int)a2, v13, (int)a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
    KsepCacheDeviceFree(v14);
LABEL_14:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v16 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v15]) = 0;
    LODWORD(KsepHistoryMessages[v15]) = 591885;
    if ( (v16 & 1) != 0 )
    {
      LODWORD(v17) = RegistryDeviceData;
      KsepDebugPrint(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v17);
    }
    LODWORD(v17) = RegistryDeviceData;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v17);
  }
  return (unsigned int)RegistryDeviceData;
}
