/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C003B4F8
 * Callers:
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0004BA0 (VidSchiGetSchedulerStatus.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C003DEB4 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C003DF4C (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        PVOID *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  struct VIDMM_PAGING_QUEUE_PACKET *NewPacket; // rbx
  __int64 v10; // rdi
  char v11; // di
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  bool v17; // si
  struct _VIDSCH_SYNC_OBJECT *v19; // [rsp+40h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+38h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0;
  NewPacket = VIDMM_PAGING_QUEUE::GetNewPacket((VIDMM_PAGING_QUEUE *)a3);
  if ( !a4
    || *(_DWORD *)a2 == 118
    || (v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL), VidSchIsTDRPending(v10))
    || (unsigned int)VidSchiGetSchedulerStatus(v10) == 3 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( !NewPacket )
    {
      Object = a3[12];
      v19 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v19, (char *)&Object, 1u, 0LL);
      NewPacket = VIDMM_PAGING_QUEUE::GetNewPacket((VIDMM_PAGING_QUEUE *)a3);
    }
  }
  v12 = *(_OWORD *)a2;
  v13 = *((_OWORD *)a2 + 1);
  *((_BYTE *)NewPacket + 24) = 0;
  *((_BYTE *)NewPacket + 25) = v11;
  *((_OWORD *)NewPacket + 3) = v12;
  v14 = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPacket + 4) = v13;
  v15 = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPacket + 5) = v14;
  v16 = *((_OWORD *)a2 + 4);
  *((_OWORD *)NewPacket + 6) = v15;
  *((_OWORD *)NewPacket + 7) = v16;
  if ( !v11 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)NewPacket + 7) = &Event;
  }
  v17 = a5;
  if ( a5 )
  {
    v21 = -1073741776;
    *((_QWORD *)NewPacket + 10) = &v21;
  }
  VIDMM_PAGING_QUEUE::AppendReadyPacket((VIDMM_PAGING_QUEUE *)a3, NewPacket, (unsigned __int64 *)&Object);
  if ( v17 )
  {
    if ( v11 )
    {
      v19 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v19, (char *)&Object, 1u, 0LL);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  return v21;
}
