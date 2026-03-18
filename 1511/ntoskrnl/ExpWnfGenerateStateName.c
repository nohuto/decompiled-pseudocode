/*
 * XREFs of ExpWnfGenerateStateName @ 0x1403E295C
 * Callers:
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(unsigned __int64 *a1, int a2, int a3, char a4)
{
  char v4; // bp
  _QWORD *CurrentServerSilo; // rdi
  __int64 v9; // rax
  signed __int64 v10; // rbx
  bool v11; // zf
  unsigned __int64 v12; // rbx
  int NextPersistentNameSequence; // ebx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  if ( a3 == 4 )
    CurrentServerSilo = 0LL;
  else
    CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    NextPersistentNameSequence = ExpWnfAllocateNextPersistentNameSequence(CurrentServerSilo, v16);
    if ( NextPersistentNameSequence < 0 )
      goto LABEL_9;
    v12 = v16[0];
  }
  else
  {
    PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, CurrentServerSilo, &v15);
    v9 = v15;
    do
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), 1uLL);
      v11 = v10 == -1;
      v12 = v10 + 1;
      v16[0] = v12;
    }
    while ( v11 );
    PsDereferenceMonitorContextServerSilo(v15);
  }
  if ( (v12 & 0xFFE0000000000000uLL) != 0 )
  {
    NextPersistentNameSequence = -1073741823;
  }
  else
  {
    *a1 = *a1 & 1 | (16 * (a2 & 3 | (unsigned __int16)(4 * (v4 & 0xF)))) & 0x3FF | 1 | (((2 * v12) | (a4 != 0)) << 10);
    NextPersistentNameSequence = 0;
  }
LABEL_9:
  if ( CurrentServerSilo )
    ObfDereferenceObject(CurrentServerSilo);
  return (unsigned int)NextPersistentNameSequence;
}
