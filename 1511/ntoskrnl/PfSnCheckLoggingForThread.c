/*
 * XREFs of PfSnCheckLoggingForThread @ 0x140077A24
 * Callers:
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     PfSnLogPageFault @ 0x1400A7010 (PfSnLogPageFault.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 */

__int64 __fastcall PfSnCheckLoggingForThread(__int64 a1, __int64 a2, __int64 a3)
{
  int BaseIoPriorityThread; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // ecx
  int v7; // edx
  __int64 v8; // rax

  if ( (((a3 & 2) == 0) & (*(_BYTE *)(a1 + 1732) >> 6)) != 0 )
  {
    return 0;
  }
  else
  {
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(a1, a2, a3);
    v6 = 0;
    v7 = BaseIoPriorityThread;
    if ( BaseIoPriorityThread >= 2 )
      goto LABEL_3;
    if ( (struct _KTHREAD *)v4 == KeGetCurrentThread() && *(_DWORD *)(v4 + 1788) )
      v7 = 2;
    if ( v7 >= 2 )
    {
LABEL_3:
      v8 = *(_QWORD *)(v5 + 432);
      if ( !v8 || v8 == v4 && *(_QWORD *)(v5 + 440) == *(_QWORD *)(v4 + 1584) )
        return 1;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 336));
    }
  }
  return v6;
}
