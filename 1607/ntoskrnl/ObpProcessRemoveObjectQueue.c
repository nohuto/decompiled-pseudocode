/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1404A541C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400313E0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x14041A5F0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404A5760 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x1404D3590 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rax
  ULONG_PTR NextSession; // rax
  __int64 v3; // rbx
  int v4; // r8d
  __int128 **v5; // r11
  int v6; // r10d
  unsigned int v7; // esi
  __int64 v8; // rdi
  unsigned int v9; // ebp
  int v10; // r9d
  int *v11; // r14
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  signed __int64 v17; // rax
  signed __int32 v19[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v20; // [rsp+28h] [rbp-70h]
  __int128 *v21; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_1402F9D90 )
  {
    v0 = __rdtsc();
    LODWORD(v0) = 41929663 * ((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4);
    qword_1402F9D90 = (unsigned int)v0;
    if ( !(_DWORD)v0 )
      qword_1402F9D90 = 1LL;
    v1 = __rdtsc();
    qword_1402F9D98 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0xBFDLL;
    qword_1402F9DA0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_1402F9DA0 )
  {
    v20 = &xmmword_1403AA820;
    v21 = &xmmword_1403AA7A0;
    NextSession = MmGetNextSession(0LL);
    v3 = NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession) >= 0 )
      {
        if ( !qword_1402F9DA8 )
          qword_1402F9DA8 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_1403AA7B0 && (_BYTE)KdDebuggerNotPresent )
        {
          v4 = 0;
          v5 = &v21;
          v6 = 2;
          do
          {
            v7 = 0;
            v8 = *(_QWORD *)*v5;
            v9 = *((_DWORD *)*v5 + 4);
            v10 = v4 + v8 + (unsigned int)*v5;
            if ( v9 )
            {
              v11 = *(int **)*v5;
              do
              {
                v12 = *v11;
                ++v7;
                v13 = *v11++;
                v10 = v7 * ((v12 + *(_DWORD *)((v13 >> 4) + v8)) ^ v10);
              }
              while ( v7 < v9 );
            }
            --v5;
            v4 += 2 * v10;
            --v6;
          }
          while ( v6 );
          if ( v4 != qword_1402F9DA8 && !qword_1402F9D60 )
          {
            v19[8] = -2071986176;
            qword_1402F9D60 = (unsigned int)__ROL4__(-2071986176, 233);
            qword_1402F9D68 = 0LL;
            qword_1402F9D70 = 0LL;
            qword_1402F9D78 = 266LL;
            qword_1402F9D80 = v8;
          }
          MmDetachSession(v3, (__int64)v22);
        }
        else
        {
          MmDetachSession(v3, (__int64)v22);
        }
      }
      MmQuitNextSession(v3);
    }
    if ( qword_1402F9D60 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiSchedulerDpc )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiSchedulerDpc,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_1402F9D88 = 3805560LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_1402F9DA0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  while ( 1 )
  {
    v14 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v15 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v14);
      if ( v15 )
        ObpHandleRevocationBlockRemoveObject(v15);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v14);
      v16 = *(_QWORD *)(v14 + 8);
      ObpRemoveObjectRoutine(v14, 1);
      v14 = v16;
    }
    while ( v16 > 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v17 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v17 == 1 )
        break;
    }
  }
  _InterlockedOr(v19, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v17) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v17;
}
