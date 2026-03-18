/*
 * XREFs of ?RecordPnpNotification@@YAXW4tagPNP_NOTIFICATION_TYPE@@PEAUDEVICEINFO@@_K@Z @ 0x1C00A9190
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

int __fastcall RecordPnpNotification(int a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // r14
  void *v9; // rax
  unsigned __int32 v10; // r9d
  __int64 v11; // r8
  unsigned __int16 *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r10
  char v15; // cl

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  if ( gpPnpNotificationRecord )
    goto LABEL_5;
  v9 = Win32AllocPoolZInit(200LL * gdwPnpNotificationRecSize);
  if ( v9 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpPnpNotificationRecord, (signed __int64)v9, 0LL) )
      Win32FreePool();
LABEL_5:
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)&giPnpSeq, 1u);
    *((_DWORD *)gpPnpNotificationRecord + 50 * (v10 % gdwPnpNotificationRecSize)) = v10 + 1;
    v11 = 200LL * (v10 % gdwPnpNotificationRecSize);
    *(_DWORD *)((char *)gpPnpNotificationRecord + v11 + 128) = (MEMORY[0xFFFFF78000000320]
                                                              * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_QWORD *)((char *)gpPnpNotificationRecord + v11 + 8) = KeGetCurrentThread();
    *(_DWORD *)((char *)gpPnpNotificationRecord + v11 + 4) = a1;
    if ( a1 )
    {
      if ( ((a1 - 8) & 0xFFFFFFEF) == 0 || !a2 )
      {
LABEL_15:
        *((_BYTE *)gpPnpNotificationRecord + v11 + v3 + 32) = 0;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v11 + 16) = a2;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v11 + 24) = v4;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v11 + 112) = a3;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v11 + 120) = v5;
        LODWORD(v9) = RtlWalkFrameChain((PVOID *)((char *)gpPnpNotificationRecord + v11 + 136), 8u, 0);
        return (int)v9;
      }
      v4 = *(_QWORD *)a2;
      v12 = a2 + 100;
      v5 = a2[32];
    }
    else
    {
      v12 = a2;
      a2 = 0LL;
    }
    if ( v12 && *((_QWORD *)v12 + 1) )
    {
      v13 = v11;
      v14 = 0LL;
      do
      {
        if ( v3 >= *v12 >> 1 )
          break;
        ++v3;
        v15 = *(_BYTE *)(v14 + *((_QWORD *)v12 + 1));
        v14 += 2LL;
        *((_BYTE *)gpPnpNotificationRecord + v13 + 32) = v15;
        ++v13;
      }
      while ( v3 < 0x4F );
    }
    goto LABEL_15;
  }
  return (int)v9;
}
