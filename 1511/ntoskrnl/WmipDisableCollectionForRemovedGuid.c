/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x1404C1BE4
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

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rax
  LARGE_INTEGER *v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v14[6]; // [rsp+40h] [rbp-40h] BYREF

  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      *((_DWORD *)v5 + 4) |= 2u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v14, 0, sizeof(v14));
      v6 = *(_OWORD *)a1;
      v7 = *(_QWORD *)(a2 + 64);
      v8 = v14;
      v14[0].LowPart = 48;
      *(_OWORD *)&v14[3].LowPart = v6;
      LOBYTE(v8) = 5;
      WmipSendWmiIrp((__int64)v8, *(unsigned int *)(v7 + 56), (__int64)&v14[3], 48, (__int64)v14, &v13);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 22) )
        *((_DWORD *)v5 + 4) &= ~2u;
      else
        WmipDoDisableRequest(v5, 1, 2);
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v14, 0, sizeof(v14));
      v9 = *(_OWORD *)a1;
      v10 = *(_QWORD *)(a2 + 64);
      v11 = v14;
      v14[0].LowPart = 48;
      *(_OWORD *)&v14[3].LowPart = v9;
      LOBYTE(v11) = 7;
      WmipSendWmiIrp((__int64)v11, *(unsigned int *)(v10 + 56), (__int64)&v14[3], 48, (__int64)v14, &v13);
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
