/*
 * XREFs of WdipSemWriteSemActionsEvent @ 0x1404C6F2C
 * Callers:
 *     WdipSemDisableScenario @ 0x1404C6A5C (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140541D18 (WdipSemEnableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x1404C70CC (WdipSemFastFree.c)
 *     WdipSemFastAllocate @ 0x1404C70F0 (WdipSemFastAllocate.c)
 *     WdipSemWriteEvent @ 0x1404C7128 (WdipSemWriteEvent.c)
 *     WdipSemGetLoggerDroppedEventCount @ 0x1404C719C (WdipSemGetLoggerDroppedEventCount.c)
 */

__int64 __fastcall WdipSemWriteSemActionsEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  int LoggerDroppedEventCount; // ebx
  __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[255]; // [rsp+48h] [rbp-B8h]
  _QWORD v18[124]; // [rsp+840h] [rbp+740h] BYREF

  v14 = 0;
  v4 = 0LL;
  if ( a1 && a2 )
  {
    LoggerDroppedEventCount = WdipSemGetLoggerDroppedEventCount(
                                (unsigned int)_InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
                                &v14);
    if ( LoggerDroppedEventCount >= 0 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(_DWORD *)(v7 + 48);
      v17[1] = v7 + 16;
      v17[3] = &v14;
      v16 = v7;
      v17[0] = 16LL;
      v17[2] = 2LL;
      v17[4] = 4LL;
      v17[5] = v7 + 48;
      v17[6] = 4LL;
      if ( *(_DWORD *)(v7 + 48) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v7 + 8 * v4 + 56);
          v9 = WdipSemFastAllocate(4LL);
          if ( !v9 )
            break;
          v10 = v15;
          v18[v4] = v9;
          *(_OWORD *)v9 = *(_OWORD *)v10;
          *(_BYTE *)(v9 + 16) = *(_BYTE *)(v10 + 18);
          *(_QWORD *)(v9 + 24) = *(_QWORD *)(v10 + 24);
          *(_DWORD *)(v9 + 32) = *(_DWORD *)(v10 + 36);
          v11 = 2LL * (unsigned int)(v4 + 4);
          v5 = *(unsigned int *)(a2 + 4 * v4 + 48);
          v4 = (unsigned int)(v4 + 1);
          *(_DWORD *)(v9 + 36) = v5;
          HIDWORD(v17[v11]) = 0;
          v17[v11 - 1] = v9;
          LODWORD(v17[v11]) = 40;
          if ( (unsigned int)v4 >= *(_DWORD *)(v7 + 48) )
            goto LABEL_7;
        }
        LoggerDroppedEventCount = -1073741670;
      }
      else
      {
LABEL_7:
        LoggerDroppedEventCount = WdipSemWriteEvent(v5, a1, a2 + 16, (unsigned int)(v8 + 4), &v16);
      }
    }
    if ( (_DWORD)v4 )
    {
      v12 = v18;
      do
      {
        WdipSemFastFree(4LL, *v12++);
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)LoggerDroppedEventCount;
}
