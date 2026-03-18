/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x14057D87C
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1404A97C0 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     WmipFindGEByGuid @ 0x1404A9D94 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x1404D735C (WmipSendWmiIrp.c)
 *     WmipDoDisableRequest @ 0x140556DB4 (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140556E2C (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v13[6]; // [rsp+40h] [rbp-40h] BYREF

  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        *((_DWORD *)v5 + 4) |= 2u;
        KeReleaseMutex(&WmipSMMutex, 0);
        memset(v13, 0, sizeof(v13));
        v7 = *(_OWORD *)a1;
        v8 = *(_QWORD *)(a2 + 64);
        v13[0].LowPart = 48;
        *(_OWORD *)&v13[3].LowPart = v7;
        WmipSendWmiIrp(4u, *(_DWORD *)(v8 + 56), (UNICODE_STRING *)&v13[3], 0x30u, (__int64)v13, &v12);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *((_DWORD *)v5 + 22) )
          *((_DWORD *)v5 + 4) &= ~2u;
        else
          WmipDoDisableRequest(v5, 1, 2);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v13, 0, sizeof(v13));
      v9 = *(_OWORD *)a1;
      v10 = *(_QWORD *)(a2 + 64);
      v13[0].LowPart = 48;
      *(_OWORD *)&v13[3].LowPart = v9;
      WmipSendWmiIrp(6u, *(_DWORD *)(v10 + 56), (UNICODE_STRING *)&v13[3], 0x30u, (__int64)v13, &v12);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled((__int64)v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0, 4);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
