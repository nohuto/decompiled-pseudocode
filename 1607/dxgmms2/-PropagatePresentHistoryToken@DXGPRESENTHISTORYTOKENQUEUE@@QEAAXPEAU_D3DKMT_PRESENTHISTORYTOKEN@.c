/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11@Z @ 0x1C00113C4
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 * Callees:
 *     Template_ppqqx @ 0x1C00229EC (Template_ppqqx.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        char a3,
        char a4,
        bool a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppqqx((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v13 + 24) = 2449LL;
    WdLogEvent5_WdAssertion(v13);
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) ^= (a3 ^ *((_BYTE *)SpinLock
                                                                          + *((unsigned int *)SpinLock + 2)
                                                                          + 16464)) & 1;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) ^= (*((_BYTE *)SpinLock
                                                                     + *((unsigned int *)SpinLock + 2)
                                                                     + 16464) ^ (2 * a4)) & 2;
  v11 = *((unsigned int *)SpinLock + 2);
  *((_BYTE *)SpinLock + v11 + 16464) ^= (*((_BYTE *)SpinLock + v11 + 16464) ^ (4 * a5)) & 4;
  v12 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v12;
  if ( v12 == *((_DWORD *)SpinLock + 3) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v9);
    *(_QWORD *)(v14 + 24) = 2463LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
