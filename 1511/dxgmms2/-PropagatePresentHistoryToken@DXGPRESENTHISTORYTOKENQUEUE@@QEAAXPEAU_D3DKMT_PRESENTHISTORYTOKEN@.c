/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11@Z @ 0x1C00030C4
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0002518 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C00031E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     Template_ppqqx @ 0x1C001F9A0 (Template_ppqqx.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        char a3,
        char a4,
        bool a5)
{
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_ppqqx((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    v10 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v10 + 24) = 2305LL;
    WdLogEvent5_WdAssertion(v10);
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) ^= (a3 ^ *((_BYTE *)SpinLock
                                                                          + *((unsigned int *)SpinLock + 2)
                                                                          + 16464)) & 1;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) ^= (*((_BYTE *)SpinLock
                                                                     + *((unsigned int *)SpinLock + 2)
                                                                     + 16464) ^ (2 * a4)) & 2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) ^= (*((_BYTE *)SpinLock
                                                                     + *((unsigned int *)SpinLock + 2)
                                                                     + 16464) ^ (4 * a5)) & 4;
  v9 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v9;
  if ( v9 == *((_DWORD *)SpinLock + 3) )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = 2319LL;
    WdLogEvent5_WdAssertion(v11);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
