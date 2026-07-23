/*
 * XREFs of WmipProcessEvent @ 0x140538080
 * Callers:
 *     WmipEventNotification @ 0x1405372F8 (WmipEventNotification.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537F5C (WmipSendGuidUpdateNotifications.c)
 *     WmipGenerateMofResourceNotification @ 0x140577218 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F174 (WmipGenerateBinaryMofNotification.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     WmipWriteWnodeToObject @ 0x14012C9E4 (WmipWriteWnodeToObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 */

__int64 __fastcall WmipProcessEvent(_DWORD *Src, char a2, char a3)
{
  char v3; // bp
  void *v4; // rsi
  void *v5; // rdi
  void *v6; // rbx
  volatile signed __int64 *GEByGuid; // r13
  unsigned int v8; // r15d
  volatile signed __int64 *v10; // r12
  __int64 v11; // rbp
  void (__fastcall *v12)(void *, _QWORD); // rax
  __int64 v13; // rax
  void *v17; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = Src;
  if ( (Src[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = Src;
    v17 = 0LL;
LABEL_3:
    if ( (*((_DWORD *)v6 + 11) & 0x80u) != 0 )
      v6 = (void *)WmipIncludeStaticNames(v6);
    GEByGuid = WmipFindGEByGuid((_QWORD *)v6 + 3, 1);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v10 = (volatile signed __int64 *)*((_QWORD *)GEByGuid + 5);
      if ( v10 != GEByGuid + 5 )
      {
        do
        {
          v11 = (__int64)(v10 - 5);
          v10 = (volatile signed __int64 *)*v10;
          if ( ObReferenceObjectSafe(v11) )
          {
            if ( (*(_DWORD *)(v11 + 164) & 2) != 0 )
            {
              v12 = *(void (__fastcall **)(void *, _QWORD))(v11 + 72);
              if ( v12 )
                v12(v6, *(_QWORD *)(v11 + 80));
            }
            else if ( (int)WmipWriteWnodeToObject(v11, (unsigned int *)v6, a2) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v11);
          }
        }
        while ( v10 != GEByGuid + 5 );
        v5 = v17;
        v4 = Src;
        v3 = a3;
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v13 = WmipDereferenceEvent();
  v17 = (void *)v13;
  v5 = (void *)v13;
  if ( v13 )
  {
    v6 = (void *)v13;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
