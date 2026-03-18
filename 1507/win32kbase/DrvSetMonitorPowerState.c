/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C006AB94
 * Callers:
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // ebx
  wchar_t *j; // rbx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rax
  int InputBuffer; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = (int)a2;
  v4 = -1073741823;
  InputBuffer = a2;
  if ( !gProtocolType )
  {
    v5 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = v2;
    WdLogEvent5_WdEvent(v5);
    for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(32 * (i + 1LL) + a1) + 2600LL);
      if ( (*(_DWORD *)(v7 + 160) & 0x2800000) == 0 )
      {
        v4 = GreDeviceIoControlEx(*(PDEVICE_OBJECT *)(v7 + 136), 0x23200Fu, &InputBuffer, 4u, 0LL, 0, &v17, 1u);
        if ( v4 < 0 )
          break;
      }
    }
    for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
    {
      if ( (*((_DWORD *)j + 40) & 0x800000) != 0 )
      {
        v11 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, &InputBuffer, 4u, 0LL, 0, &v17, 1u);
        v12 = v11;
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v7);
          *(_QWORD *)(v15 + 24) = j;
          *(_QWORD *)(v15 + 32) = v12;
          WdLogEvent5_WdWarning(v15);
        }
      }
    }
    v13 = WdLogNewEntry5_WdTrace(v7, v6, v8);
    *(_QWORD *)(v13 + 24) = v4;
    WdLogEvent5_WdTrace(v13);
  }
  return (unsigned int)v4;
}
