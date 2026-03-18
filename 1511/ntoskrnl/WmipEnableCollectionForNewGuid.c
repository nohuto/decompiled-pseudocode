/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x140506FE4
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1403D1930 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14065F670 (WmipUpdateDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x1403D370C (WmipFindGEByGuid.c)
 *     WmipReleaseCollectionEnabled @ 0x14048C508 (WmipReleaseCollectionEnabled.c)
 *     WmipDoDisableRequest @ 0x14048C6CC (WmipDoDisableRequest.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rax
  LARGE_INTEGER *v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rax
  LARGE_INTEGER *v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v15[6]; // [rsp+40h] [rbp-40h] BYREF

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
        memset(v15, 0, sizeof(v15));
        v7 = *(_OWORD *)a1;
        v8 = *(_QWORD *)(a2 + 64);
        v9 = v15;
        v15[0].LowPart = 48;
        *(_OWORD *)&v15[3].LowPart = v7;
        LOBYTE(v9) = 4;
        WmipSendWmiIrp((__int64)v9, *(unsigned int *)(v8 + 56), (__int64)&v15[3], 48, (__int64)v15, &v14);
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
      memset(v15, 0, sizeof(v15));
      v10 = *(_OWORD *)a1;
      v11 = *(_QWORD *)(a2 + 64);
      v12 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v10;
      LOBYTE(v12) = 6;
      WmipSendWmiIrp((__int64)v12, *(unsigned int *)(v11 + 56), (__int64)&v15[3], 48, (__int64)v15, &v14);
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
