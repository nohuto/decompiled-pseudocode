/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C0083B0C
 * Callers:
 *     PowerUnDimMonitor @ 0x1C000A57C (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C00A5298 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  char v4; // r12
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  int InputBuffer; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v16[3]; // [rsp+44h] [rbp-44h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int i; // [rsp+A8h] [rbp+20h]

  v3 = (unsigned int)a2;
  v4 = a3;
  v5 = a1;
  v6 = -1073741823;
  if ( !gProtocolType )
  {
    v7 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v7 + 24) = v5;
    *(_QWORD *)(v7 + 32) = v3;
    WdLogEvent5_WdEvent(v7);
    UpdateMonitorDevices();
    v8 = 0;
    for ( i = 0; v8 < *(_DWORD *)(v5 + 20); i = v8 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(32 * (v8 + 1LL) + v5) + 2600LL);
      if ( *(_DWORD *)(v10 + 224) )
      {
        do
        {
          a2 = *(_QWORD *)(v10 + 232);
          if ( (*(_DWORD *)(a2 + 20LL * v9) & 1) != 0
            && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, _DWORD *))qword_1C01014A8)(
                      a2 + 4 * (5LL * v9 + 2),
                      *(unsigned int *)(a2 + 20LL * v9 + 4),
                      Object,
                      &v16[1]) >= 0 )
          {
            InputBuffer = v3;
            AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)&v16[1]);
            GreDeviceIoControlEx(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, v16, 1u);
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(Object[0]);
            v12 = *(_QWORD *)(v10 + 232);
            if ( *(_BYTE *)(v12 + 20LL * v9 + 16) || *(_DWORD *)(v12 + 20LL * v9 + 4) == 272 )
            {
              if ( *(_QWORD *)(v10 + 144) )
              {
                if ( (*(_DWORD *)(v10 + 160) & 0x800000) != 0 )
                {
                  a1 = *(_QWORD *)(v10 + 256);
                  if ( a1 )
                  {
                    if ( *(_DWORD *)(v5 + 20) == 1 && *(_DWORD *)(v10 + 224) == 1 || !v4 )
                    {
                      LOBYTE(a2) = v4;
                      ((void (__fastcall *)(__int64, __int64))qword_1C0101518)(a1, a2);
                    }
                  }
                }
              }
            }
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v10 + 224) );
        v8 = i;
      }
      ++v8;
    }
    v6 = 0;
  }
  v13 = WdLogNewEntry5_WdTrace(a1, a2, a3);
  *(_QWORD *)(v13 + 24) = v6;
  WdLogEvent5_WdTrace(v13);
  return (unsigned int)v6;
}
