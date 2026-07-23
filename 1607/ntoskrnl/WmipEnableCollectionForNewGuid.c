/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x140537E28
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

int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  _QWORD *GEByGuid; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rax
  LARGE_INTEGER *v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // rax
  LARGE_INTEGER *v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v16[6]; // [rsp+40h] [rbp-40h] BYREF

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
        memset(v16, 0, sizeof(v16));
        v7 = *(_OWORD *)a1;
        v8 = *(_QWORD *)(a2 + 64);
        v9 = v16;
        v16[0].LowPart = 48;
        *(_OWORD *)&v16[3].LowPart = v7;
        LOBYTE(v9) = 4;
        WmipSendWmiIrp(v9, *(unsigned int *)(v8 + 56), &v16[3], 48LL, v16, v15);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *((_DWORD *)v5 + 22) )
        {
          *((_DWORD *)v5 + 4) &= ~2u;
        }
        else
        {
          LOBYTE(v10) = 1;
          WmipDoDisableRequest(v5, v10);
        }
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v16, 0, sizeof(v16));
      v11 = *(_OWORD *)a1;
      v12 = *(_QWORD *)(a2 + 64);
      v13 = v16;
      v16[0].LowPart = 48;
      *(_OWORD *)&v16[3].LowPart = v11;
      LOBYTE(v13) = 6;
      WmipSendWmiIrp(v13, *(unsigned int *)(v12 + 56), &v16[3], 48LL, v16, v15);
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
