/*
 * XREFs of WmipGenerateRegistrationNotification @ 0x1403D1930
 * Callers:
 *     WmipRemoveDS @ 0x1404B31E4 (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipCachePtrs @ 0x1403D1A08 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1403D1AC8 (WmipSendGuidUpdateNotifications.c)
 *     WmipReferenceEntry @ 0x1403D39DC (WmipReferenceEntry.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404C1BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140506FE4 (WmipEnableCollectionForNewGuid.c)
 */

__int64 __fastcall WmipGenerateRegistrationNotification(ULONG_PTR a1, unsigned int a2)
{
  __int64 v4; // rdx
  void *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  WmipReferenceEntry(a1);
  v4 = 0LL;
  v11 = 0;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 40);
  v10 = 0;
  v12 = 0LL;
  if ( v6 != (_QWORD *)(a1 + 40) )
  {
    do
    {
      v7 = v6 - 5;
      if ( (*(_DWORD *)(v6 - 3) & 8) == 0 )
      {
        v8 = v7[7] + 72LL;
        WmipCachePtrs(*((_DWORD *)v7 + 14) + 72, (_DWORD)v6 - 40, (unsigned int)&v10, (unsigned int)&v11, (__int64)&v12);
        if ( a2 == 1 )
        {
          WmipEnableCollectionForNewGuid(v8, v6 - 5);
        }
        else if ( a2 == 2 )
        {
          WmipDisableCollectionForRemovedGuid(v8, v6 - 5);
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(a1 + 40) );
    v4 = v10;
    v5 = v12;
  }
  WmipSendGuidUpdateNotifications(a2, v4, v5);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return WmipUnreferenceEntry(&WmipDSChunkInfo, a1);
}
