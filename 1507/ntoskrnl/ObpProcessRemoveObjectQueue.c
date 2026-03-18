/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140474070
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     MmQuitNextSession @ 0x14051C278 (MmQuitNextSession.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rdi
  _KPROCESS *NextSession; // rax
  __int64 v10; // rbx
  int v11; // r8d
  unsigned int v12; // r9d
  int *v13; // r10
  int v14; // edx
  __int64 v15; // rax
  signed __int32 v17[10]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v18[48]; // [rsp+28h] [rbp-60h] BYREF

  if ( !qword_140323B28 )
    qword_140323B28 = (unsigned int)KiTableInformation;
  if ( !qword_140323B10 )
  {
    v5 = __rdtsc();
    LODWORD(v5) = 41929663 * ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 4);
    qword_140323B10 = (unsigned int)v5;
    if ( !(_DWORD)v5 )
      qword_140323B10 = 1LL;
    v6 = __rdtsc();
    qword_140323B18 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4)) ^ 0xB71LL;
    qword_140323B20 = MEMORY[0xFFFFF78000000008]
                    + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                    - MEMORY[0xFFFFF780000003B0]
                    + 288000000000LL;
  }
  v0 = MEMORY[0xFFFFF780000003B0];
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140323B20 )
  {
    v7 = xmmword_1403D17B0;
    v8 = xmmword_1403D17A0;
    if ( (_DWORD)xmmword_1403D17B0 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        NextSession = (_KPROCESS *)MmGetNextSession(0LL);
        v10 = (__int64)NextSession;
        if ( NextSession )
        {
          if ( !qword_140323B28 )
            qword_140323B28 = (unsigned int)KiTableInformation;
          if ( (int)MmAttachSession(NextSession, (__int64)v18) >= 0 )
          {
            v11 = v8 + (unsigned int)&xmmword_1403D17A0;
            v12 = 0;
            if ( v7 )
            {
              v13 = (int *)v8;
              do
              {
                v14 = *v13;
                ++v12;
                v15 = *v13++;
                v11 = v12 * ((v14 + *(_DWORD *)((v15 >> 4) + v8)) ^ v11);
              }
              while ( v12 < v7 );
            }
            if ( 2 * v11 != qword_140323B28 && !qword_140323AE0 )
            {
              v17[8] = 555745280;
              qword_140323AE0 = (unsigned int)__ROL4__(555745280, 203);
              qword_140323AE8 = 0LL;
              qword_140323AF0 = 0LL;
              qword_140323AF8 = 266LL;
              qword_140323B00 = v8;
            }
            MmDetachSession(v10, (struct _KTHREAD *)v18);
          }
          MmQuitNextSession(v10);
        }
      }
    }
    if ( qword_140323AE0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != DeferredRoutine )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)DeferredRoutine,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140323B08 = 3544090LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    v0 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
       - MEMORY[0xFFFFF780000003B0]
       + 288000000000LL
       + MEMORY[0xFFFFF78000000008];
    qword_140323B20 = v0;
  }
  while ( 1 )
  {
    v1 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      if ( (*(_BYTE *)(v1 + 26) & 0x40) != 0 )
        v2 = v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 0x7F];
      else
        v2 = 0LL;
      if ( v2 )
        ObpHandleRevocationBlockRemoveObject(v2);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v1);
      v3 = *(_QWORD *)(v1 + 8);
      LOBYTE(v0) = 1;
      ObpRemoveObjectRoutine(v1, v0);
      v1 = v3;
    }
    while ( v3 && v3 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v4 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v4 == 1 )
        break;
    }
  }
  _InterlockedOr(v17, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v4) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v4;
}
