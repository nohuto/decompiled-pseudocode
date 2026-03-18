/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x14049BD74
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400D5460 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmGetNextSession @ 0x1400E6E28 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x14042F540 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x14049BF20 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x1404C34D0 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x14062F65C (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  signed __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rdi
  ULONG_PTR NextSession; // rax
  __int64 v9; // rbx
  int v10; // r8d
  unsigned int v11; // r9d
  int *v12; // r10
  int v13; // edx
  __int64 v14; // rax
  signed __int32 v16[10]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-60h] BYREF

  if ( !qword_1402D49E8 )
    qword_1402D49E8 = (unsigned int)KiTableInformation;
  if ( !qword_1402D49D0 )
  {
    v4 = __rdtsc();
    LODWORD(v4) = 41929663 * ((((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) >> 4);
    qword_1402D49D0 = (unsigned int)v4;
    if ( !(_DWORD)v4 )
      qword_1402D49D0 = 1LL;
    v5 = __rdtsc();
    qword_1402D49D8 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 4)) ^ 0xBC6LL;
    qword_1402D49E0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_1402D49E0 )
  {
    v6 = xmmword_140382770;
    v7 = xmmword_140382760;
    if ( (_DWORD)xmmword_140382770 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        NextSession = MmGetNextSession(0LL);
        v9 = NextSession;
        if ( NextSession )
        {
          if ( !qword_1402D49E8 )
            qword_1402D49E8 = (unsigned int)KiTableInformation;
          if ( (int)MmAttachSession(NextSession) >= 0 )
          {
            v10 = v7 + (unsigned int)&xmmword_140382760;
            v11 = 0;
            if ( v6 )
            {
              v12 = (int *)v7;
              do
              {
                v13 = *v12;
                ++v11;
                v14 = *v12++;
                v10 = v11 * ((v13 + *(_DWORD *)((v14 >> 4) + v7)) ^ v10);
              }
              while ( v11 < v6 );
            }
            if ( 2 * v10 != qword_1402D49E8 && !qword_1402D49A0 )
            {
              v16[8] = 555745280;
              qword_1402D49A0 = (unsigned int)__ROL4__(555745280, 203);
              qword_1402D49A8 = 0LL;
              qword_1402D49B0 = 0LL;
              qword_1402D49B8 = 266LL;
              qword_1402D49C0 = v7;
            }
            MmDetachSession(v9, (__int64)v17);
          }
          MmQuitNextSession(v9);
        }
      }
    }
    if ( qword_1402D49A0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != sub_140218690 )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)sub_140218690,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_1402D49C8 = 3646940LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_1402D49E0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  while ( 1 )
  {
    v0 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v1 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v0);
      if ( v1 )
        ObpHandleRevocationBlockRemoveObject(v1);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v0);
      v2 = *(_QWORD *)(v0 + 8);
      ObpRemoveObjectRoutine(v0, 1);
      v0 = v2;
    }
    while ( v2 && v2 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v3 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v3 == 1 )
        break;
    }
  }
  _InterlockedOr(v16, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v3) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v3;
}
