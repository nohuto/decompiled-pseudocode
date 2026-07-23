/*
 * XREFs of KseQueryDeviceData @ 0x140535190
 * Callers:
 *     KseQueryDeviceFlags @ 0x140535070 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x140127220 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepDbCacheQueryDevice @ 0x140535324 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1405353E8 (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x140535688 (KsepCacheDeviceFree.c)
 *     KsepDbCacheQueryDeviceData @ 0x14057C50C (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x14057DF68 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x14065258C (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  int v6; // esi
  BOOL v9; // eax
  int RegistryDeviceData; // ebx
  int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rcx
  char v15; // al
  void *v16; // [rsp+20h] [rbp-38h]
  int v17[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v17 = 0LL;
  v6 = (int)a3;
  if ( dword_140328F34 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = (*a3 & 0x20000000) != 0;
  *a3 = 0;
  if ( !v9 )
  {
    HIDWORD(v16) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData(SourceString);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache();
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v17);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v12 = v6;
  v13 = *(_QWORD *)v17;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v17[0], a2, v12, (int)a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
    KsepCacheDeviceFree(v13);
LABEL_14:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v15 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v14]) = 0;
    LODWORD(KsepHistoryMessages[v14]) = 591885;
    if ( (v15 & 1) != 0 )
    {
      LODWORD(v16) = RegistryDeviceData;
      KsepDebugPrint(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v16);
    }
    LODWORD(v16) = RegistryDeviceData;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v16);
  }
  return (unsigned int)RegistryDeviceData;
}
