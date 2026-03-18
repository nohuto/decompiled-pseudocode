/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C005FD54
 * Callers:
 *     PowerUnDimMonitor @ 0x1C000AB34 (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C00A9BD0 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0061AA0 (UpdateMonitorDevices.c)
 *     GreDeviceIoControlEx @ 0x1C0061C70 (GreDeviceIoControlEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int InputBuffer; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v20[3]; // [rsp+44h] [rbp-44h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int i; // [rsp+A8h] [rbp+20h]

  v3 = (unsigned int)a2;
  v5 = a1;
  v6 = -1073741823;
  if ( !gProtocolType )
  {
    v7 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v7 + 24) = v5;
    *(_QWORD *)(v7 + 32) = v3;
    WdLogEvent5_WdEvent(v7);
    UpdateMonitorDevices(v9, v8);
    v10 = 0;
    for ( i = 0; v10 < *(_DWORD *)(v5 + 20); i = v10 )
    {
      v11 = 0;
      v12 = *(_QWORD *)(*(_QWORD *)(32 * (v10 + 1LL) + v5) + 2600LL);
      if ( *(_DWORD *)(v12 + 224) )
      {
        do
        {
          v13 = *(_QWORD *)(v12 + 232);
          if ( (*(_DWORD *)(v13 + 20LL * v11) & 1) != 0
            && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, _DWORD *))qword_1C01042C8)(
                      v13 + 4 * (5LL * v11 + 2),
                      *(unsigned int *)(v13 + 20LL * v11 + 4),
                      Object,
                      &v20[1]) >= 0 )
          {
            InputBuffer = v3;
            AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)&v20[1]);
            GreDeviceIoControlEx(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, (__int64)v20, 1u);
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(Object[0]);
            v16 = *(_QWORD *)(v12 + 232);
            if ( *(_BYTE *)(v16 + 20LL * v11 + 16) || *(_DWORD *)(v16 + 20LL * v11 + 4) == 272 )
            {
              if ( *(_QWORD *)(v12 + 144) )
              {
                if ( (*(_DWORD *)(v12 + 160) & 0x800000) != 0 )
                {
                  a1 = *(_QWORD *)(v12 + 256);
                  if ( a1 )
                  {
                    if ( *(_DWORD *)(v5 + 20) == 1 && *(_DWORD *)(v12 + 224) == 1 || !a3 )
                    {
                      LOBYTE(v15) = a3;
                      ((void (__fastcall *)(__int64, __int64))qword_1C0104338)(a1, v15);
                    }
                  }
                }
              }
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v12 + 224) );
        v10 = i;
      }
      ++v10;
    }
    v6 = 0;
  }
  v17 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v17 + 24) = v6;
  WdLogEvent5_WdTrace(v17);
  return (unsigned int)v6;
}
