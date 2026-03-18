/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C002B060
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C002ADD0 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0073650 (HmgShareLockCheckIgnoreStockBit.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::AcquireEntryLock(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v4; // edx
  unsigned int v6; // r8d
  __int64 v7; // rsi
  char v8; // bl
  unsigned __int64 v10; // r12
  __int64 v11; // r13

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) - 1) << 16) )
    return 0;
  if ( a2 >= v4 )
  {
    v6 = ((a2 - v4) >> 16) + 1;
    if ( (a2 - v4) >> 16 != -2 )
      goto LABEL_4;
    return 0;
  }
  v6 = 0;
LABEL_4:
  v7 = *((_QWORD *)this + (int)v6 + 1);
  if ( v6 )
    a2 = a2 - ((v6 - 1) << 16) - v4;
  v8 = 0;
  if ( a2 < *(_DWORD *)(v7 + 20) )
  {
    v10 = 8 * ((unsigned __int64)a2 >> 8);
    v11 = *(_QWORD *)(**(_QWORD **)(v7 + 24) + v10) + 16LL * (unsigned __int8)a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    if ( a3
      || a2 < *(_DWORD *)(v7 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + v10) + 16LL * (unsigned __int8)a2 + 8) )
    {
      v8 = 1;
      *(_DWORD *)(*(_QWORD *)v7 + 24LL * a2 + 8) |= 1u;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
