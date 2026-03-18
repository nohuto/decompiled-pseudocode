/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C004C4D0
 * Callers:
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C004C618 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0067AF4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C003AFF4 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C003B0B0 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0051B80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        PVOID *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        unsigned int a5)
{
  struct VIDMM_PAGING_QUEUE_PACKET *NewPacket; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *v10; // rbx
  char v11; // di
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+38h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v20; // [rsp+A8h] [rbp+48h] BYREF

  a5 = 0;
  NewPacket = VIDMM_PAGING_QUEUE::GetNewPacket((VIDMM_PAGING_QUEUE *)a3);
  v10 = NewPacket;
  if ( !a4 || *(_DWORD *)a2 == 118 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( !NewPacket )
    {
      Object = a3[12];
      v20 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v20, (const unsigned __int64 *)&Object, 1u, 0LL);
      v10 = VIDMM_PAGING_QUEUE::GetNewPacket((VIDMM_PAGING_QUEUE *)a3);
    }
  }
  v12 = *(_OWORD *)a2;
  v13 = *((_OWORD *)a2 + 1);
  *((_BYTE *)v10 + 24) = 0;
  *((_BYTE *)v10 + 25) = v11;
  *((_OWORD *)v10 + 3) = v12;
  v14 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v10 + 4) = v13;
  v15 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v10 + 5) = v14;
  v16 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v10 + 6) = v15;
  *((_OWORD *)v10 + 7) = v16;
  if ( !v11 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)v10 + 7) = &Event;
  }
  a5 = -1073741776;
  *((_QWORD *)v10 + 10) = &a5;
  VIDMM_PAGING_QUEUE::AppendReadyPacket((VIDMM_PAGING_QUEUE *)a3, v10, (unsigned __int64 *)&Object);
  if ( v11 )
  {
    v20 = a4;
    VIDMM_GLOBAL::WaitForFences(this, &v20, (const unsigned __int64 *)&Object, 1u, 0LL);
  }
  else
  {
    Object = &Event;
    KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
  }
  return a5;
}
