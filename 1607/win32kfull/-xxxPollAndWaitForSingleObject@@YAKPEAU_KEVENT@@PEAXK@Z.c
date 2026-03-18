/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0104BCC
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C01046AC (xxxWaitForInputIdle.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C0125DA4 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3, __int64 a4)
{
  ULONG v7; // r12d
  unsigned __int64 v8; // r13
  int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  v7 = 2;
  if ( !*(_QWORD *)(gptiCurrent + 768LL) )
  {
    v18 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 768LL) = v18;
    if ( !v18 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v19, UserDereferenceObject, a4);
  if ( Object )
    ObfReferenceObject(Object);
  if ( a2 )
    v7 = 3;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v9 = a3;
      a3 = 0;
    }
    else
    {
      v9 = 500;
      if ( a3 != -1 )
      {
        v10 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
        LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v10 >= a3 )
          a3 = 0;
        else
          a3 -= v10;
      }
    }
    Timeout.QuadPart = -10000LL * v9;
    **(_QWORD **)(gptiCurrent + 768LL) = Object;
    v11 = *(_QWORD *)(gptiCurrent + 768LL);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(gptiCurrent + 648LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 768LL) + 16LL) = a2;
    if ( gdwInAtomicOperation )
    {
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v11, gdwInAtomicOperation);
    v12 = KeWaitForMultipleObjects(v7, *(PVOID **)(gptiCurrent + 768LL), WaitAny, WrUserRequest, 1, 0, &Timeout, 0LL);
    EnterCrit(0LL, 1LL);
    if ( v12 < 0 )
      goto LABEL_33;
    if ( v12 == 192 )
    {
      ClientDeliverUserApc();
LABEL_33:
      v12 = -1;
    }
    v16 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( (*(_BYTE *)(v16 + 4) & 0x40) != 0 && (*(_BYTE *)(v16 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
    }
    if ( v12 != 258 && v12 != 1 )
      goto LABEL_21;
    v14 = 0LL;
  }
  while ( a3 );
  if ( v12 == 1 )
    v12 = 258;
LABEL_21:
  PopAndFreeW32ThreadLock((__int64)v19, v13, v14, v15);
  return (unsigned int)v12;
}
