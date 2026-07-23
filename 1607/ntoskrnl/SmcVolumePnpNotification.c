/*
 * XREFs of SmcVolumePnpNotification @ 0x14069B1D4
 * Callers:
 *     <none>
 * Callees:
 *     SmcCacheDelete @ 0x140699F98 (SmcCacheDelete.c)
 *     SmcCacheDereference @ 0x140699FE8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14069A1EC (SmcCacheReference.c)
 */

__int64 __fastcall SmcVolumePnpNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned int i; // esi
  int v7; // ebx
  struct _EX_RUNDOWN_REF v8; // rax
  unsigned __int64 Count; // r15

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
LABEL_7:
    v5 = &unk_1403BF1A0;
    for ( i = 0; i < 0x10; ++i )
    {
      v7 = i | (16 * (*v5 & 0xFFF));
      v8.Count = SmcCacheReference((__int64)&unk_1403BF188, v7).Count;
      Count = v8.Count;
      if ( v8.Count )
      {
        if ( *(_QWORD *)(v8.Count + 48) != NotificationStructure[3] )
          Count = 0LL;
        SmcCacheDereference((__int64)&unk_1403BF188, v7);
        if ( Count )
          SmcCacheDelete((__int64)&unk_1403BF188);
      }
      v5 += 8;
    }
  }
  return 0LL;
}
