/*
 * XREFs of DrvSetDeviceMonitorPowerState @ 0x1C00BC44C
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 */

void __fastcall DrvSetDeviceMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  wchar_t *i; // rbx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  int InputBuffer; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = (int)a2;
  InputBuffer = a2;
  if ( !gProtocolType )
  {
    v5 = WdLogNewEntry5_WdTrace(a1, a2, a3);
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = v3;
    WdLogEvent5_WdTrace(v5);
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)i + 18) == a1) )
      {
        v10 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)i + 17), 0x23200Fu, &InputBuffer, 4u, 0LL, 0, &v16, 1u);
        v12 = v10;
        if ( v10 < 0 )
        {
          v13 = WdLogNewEntry5_WdError(v7, v6, v8, v11);
          *(_QWORD *)(v13 + 24) = i;
          *(_QWORD *)(v13 + 32) = v12;
          WdLogEvent5_WdError(v13);
        }
      }
    }
    v14 = WdLogNewEntry5_WdTrace(v7, v6, v8);
    WdLogEvent5_WdTrace(v14);
  }
}
