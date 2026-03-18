/*
 * XREFs of KiStartDpcThread @ 0x140521A80
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x1403B1090 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1404D211C (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall KiStartDpcThread(__int64 a1)
{
  NTSTATUS v2; // ebx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  *((_QWORD *)&v4 + 1) = 0LL;
  WORD4(v4) = *(unsigned __int8 *)(a1 + 1616);
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 1608);
  v2 = PsCreateSystemThreadEx(
         (__int64)&Handle,
         0x1FFFFF,
         0LL,
         0LL,
         0LL,
         (__int64)KiExecuteDpc,
         a1,
         &v4,
         (_DWORD *)(a1 + 36));
  if ( v2 < 0 )
  {
    if ( KeDpcWatchdogPeriod )
      KeCancelTimer((PKTIMER)(a1 + 24384));
  }
  else
  {
    ZwClose(Handle);
  }
  return (unsigned int)v2;
}
