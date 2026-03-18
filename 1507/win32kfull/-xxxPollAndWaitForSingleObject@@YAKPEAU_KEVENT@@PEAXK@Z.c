/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E02A8
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C00E00DC (xxxWaitForInputIdle.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C00FA764 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  ULONG v6; // r12d
  __int64 v7; // rax
  unsigned __int64 v9; // r15
  int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  __int64 v14; // rcx
  _QWORD v15[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 2;
  if ( !*(_QWORD *)(gptiCurrent + 768LL) )
  {
    v7 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 768LL) = v7;
    if ( !v7 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v15, UserDereferenceObject);
  if ( Object )
    ObfReferenceObject(Object);
  if ( a2 )
    v6 = 3;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 656LL));
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v10 = a3;
      a3 = 0;
    }
    else
    {
      v10 = 500;
      if ( a3 != -1 )
      {
        v11 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v9;
        LODWORD(v9) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v11 >= a3 )
          a3 = 0;
        else
          a3 -= v11;
      }
    }
    Timeout.QuadPart = -10000LL * v10;
    **(_QWORD **)(gptiCurrent + 768LL) = Object;
    v12 = *(_QWORD *)(gptiCurrent + 768LL);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(gptiCurrent + 656LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 768LL) + 16LL) = a2;
    UserSessionSwitchLeaveCrit(v12, 0xFFFFF78000000004uLL);
    v13 = KeWaitForMultipleObjects(v6, *(PVOID **)(gptiCurrent + 768LL), WaitAny, WrUserRequest, 1, 0, &Timeout, 0LL);
    EnterCrit(1LL);
    if ( v13 < 0 )
      goto LABEL_18;
    if ( v13 == 192 )
    {
      ClientDeliverUserApc();
LABEL_18:
      v13 = -1;
    }
    v14 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( (*(_BYTE *)(v14 + 4) & 0x40) != 0 && (*(_BYTE *)(v14 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 );
    }
    if ( v13 != 258 && v13 != 1 )
      goto LABEL_27;
  }
  while ( a3 );
  if ( v13 == 1 )
    v13 = 258;
LABEL_27:
  PopAndFreeW32ThreadLock((__int64)v15);
  return (unsigned int)v13;
}
