/*
 * XREFs of KseQueryDeviceData @ 0x1405720AC
 * Callers:
 *     KseQueryDeviceFlags @ 0x140571F8C (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepShimDbChanged @ 0x1401537EC (KsepShimDbChanged.c)
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepDbCacheQueryDevice @ 0x140572240 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140578D3C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x140578E70 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x140578FDC (KsepCacheDeviceFree.c)
 *     KsepDbCacheQueryDeviceData @ 0x1405C68B4 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x1405C6A60 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x14069BD6C (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  int v6; // esi
  __int64 v9; // rdx
  _BOOL8 v10; // rcx
  int RegistryDeviceData; // ebx
  int v13; // r8d
  __int64 v14; // rsi
  __int64 v15; // rcx
  char v16; // al
  void *v17; // [rsp+20h] [rbp-38h]
  int v18[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v18 = 0LL;
  v6 = (int)a3;
  if ( dword_140353C94 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = 1LL;
  v10 = (*a3 & 0x20000000) != 0;
  *a3 = 0;
  if ( !v10 )
  {
    HIDWORD(v17) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData(SourceString, a2);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)KsepShimDbChanged(v10, v9, (__int64)a3, (__int64)a4) )
  {
    KseResetDeviceCache();
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v18);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v13 = v6;
  v14 = *(_QWORD *)v18;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v18[0], a2, v13, (int)a4, a5);
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
