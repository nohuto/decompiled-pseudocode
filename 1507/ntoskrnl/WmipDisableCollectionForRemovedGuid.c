/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x1404A9688
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

int __fastcall WmipDisableCollectionForRemovedGuid(__int128 *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rax
  LARGE_INTEGER *v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v15[6]; // [rsp+40h] [rbp-40h] BYREF

  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v5 = (_DWORD *)GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v5[22] && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      v5[4] |= 2u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v15, 0, sizeof(v15));
      v6 = *a1;
      v7 = *(_QWORD *)(a2 + 64);
      v8 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v6;
      LOBYTE(v8) = 5;
      WmipSendWmiIrp(v8, *(unsigned int *)(v7 + 56), &v15[3], 48LL, v15, v14);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[22] )
      {
        v5[4] &= ~2u;
      }
      else
      {
        LOBYTE(v9) = 1;
        WmipDoDisableRequest(v5, v9, 2LL);
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v15, 0, sizeof(v15));
      v10 = *a1;
      v11 = *(_QWORD *)(a2 + 64);
      v12 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v10;
      LOBYTE(v12) = 7;
      WmipSendWmiIrp(v12, *(unsigned int *)(v11 + 56), &v15[3], 48LL, v15, v14);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL, 4LL);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return GEByGuid;
}
