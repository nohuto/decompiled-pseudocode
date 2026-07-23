/*
 * XREFs of TtmpSessionWorker @ 0x140679130
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x140677C10 (TtmiSessionTerminalListWorker.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 *     TtmpActivateSessionWorker @ 0x140678F64 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x140679004 (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14067907C (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogSessionWorkerPass @ 0x14067C0E0 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x14067C1A0 (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x14067C230 (TtmiLogSessionWorkerStop.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  char v2; // r13
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ecx
  ULONG_PTR SessionById; // rax
  unsigned int v9; // esi
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int i; // r12d
  __int64 v16; // rdx
  char v17; // bl
  unsigned int v18; // ebx
  char v19; // bp
  char v20; // bl
  bool v21; // bp
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char v27; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v28[7]; // [rsp+21h] [rbp-67h] BYREF
  _BYTE v29[48]; // [rsp+28h] [rbp-60h] BYREF

  v2 = 0;
  v3 = 0LL;
  TtmpAcquireSessionLock();
  v4 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v7 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v7;
  *((_QWORD *)a1 + 20) = KeGetCurrentThread();
  if ( (v7 & 4) == 0 )
  {
    SessionById = MmGetSessionById(v4, v5, v6);
    v3 = SessionById;
    if ( !SessionById )
    {
      v9 = -1073740715;
      v10 = -1;
      v11 = -1073740715;
      v12 = 1875;
LABEL_4:
      TtmiLogError("TtmpSessionWorker", v12, v10, v11);
      goto LABEL_25;
    }
    v13 = MmAttachSession(SessionById);
    v9 = v13;
    if ( v13 < 0 )
    {
      v11 = v13;
      v10 = v13;
      v12 = 1884;
      goto LABEL_4;
    }
    v2 = 1;
  }
  v14 = a1[38];
  v9 = 0;
  a1[38] = 0;
  for ( i = 1; ; ++i )
  {
    v18 = v14 & 7;
    if ( !v18 )
      break;
    TtmiLogSessionWorkerPass(v4, v18, i);
    if ( (v18 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v27, v28);
      v17 = (v18 & 0xFD ^ (v18 & 0xFD | (4 * v27))) & 4 ^ v18 & 0xFD;
      LOBYTE(v18) = (v17 ^ (v17 | v28[0])) & 1 ^ v17;
    }
    v19 = v18;
    v20 = v18 & 0xFB;
    v21 = (v19 & 4) != 0;
    if ( v21 && (a1[1] & 0x10) != 0 )
    {
      v9 = TtmpActivateSessionWorker((__int64)a1, v16);
      if ( v9 != 259 )
      {
        v22 = a1[1];
        if ( (v22 & 0x1000) != 0 )
        {
          a1[1] = v22 & 0xFFFFEFFF;
          v20 |= 1u;
        }
      }
    }
    if ( (v20 & 1) != 0 )
      TtmiSessionDeviceListWorker((__int64)a1);
    if ( v21 && (a1[1] & 0x20) != 0 )
      v9 = TtmpDeactivateSessionWorker((__int64)a1, v16);
    v14 = a1[38];
    a1[38] = 0;
  }
  if ( v2 )
    MmDetachSession(v3, (__int64)v29);
LABEL_25:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 20) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v4, v9);
}
