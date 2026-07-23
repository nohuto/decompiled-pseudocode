/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x140532884
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140537C90 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x140549C18 (WmipSendWmiIrp.c)
 *     WmipDoDisableRequest @ 0x140549CFC (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14054D464 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  _QWORD *GEByGuid; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rax
  LARGE_INTEGER *v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v15[6]; // [rsp+40h] [rbp-40h] BYREF

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
      memset(v15, 0, sizeof(v15));
      v6 = *(_OWORD *)a1;
      v7 = *(_QWORD *)(a2 + 64);
      v8 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v6;
      LOBYTE(v8) = 5;
      WmipSendWmiIrp(v8, *(unsigned int *)(v7 + 56), &v15[3], 48LL, v15, v14);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 22) )
      {
        *((_DWORD *)v5 + 4) &= ~2u;
      }
      else
      {
        LOBYTE(v9) = 1;
        WmipDoDisableRequest(v5, v9);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v15, 0, sizeof(v15));
      v10 = *(_OWORD *)a1;
      v11 = *(_QWORD *)(a2 + 64);
      v12 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v10;
      LOBYTE(v12) = 7;
      WmipSendWmiIrp(v12, *(unsigned int *)(v11 + 56), &v15[3], 48LL, v15, v14);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
