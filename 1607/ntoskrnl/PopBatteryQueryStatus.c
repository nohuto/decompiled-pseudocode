/*
 * XREFs of PopBatteryQueryStatus @ 0x14066F208
 * Callers:
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     IoSynchronousCallDriver @ 0x1400AAB98 (IoSynchronousCallDriver.c)
 *     PopPrepareIoctl @ 0x140574888 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryQueryStatus(__int64 a1, char a2)
{
  struct _IRP *v2; // rdi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r10d
  unsigned int v11; // r11d
  int v12; // ebp
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rcx
  NTSTATUS result; // eax

  v2 = (struct _IRP *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 108);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 172) = -1;
    v5 = *(_DWORD *)(a1 + 152);
    v6 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 148);
    if ( v5 <= v6 )
    {
      v8 = *(_DWORD *)(a1 + 132);
      if ( v5 <= v8 )
      {
        v7 = 0;
        v6 = v8;
      }
      else
      {
        v7 = v8 + 1;
      }
    }
    else
    {
      v7 = v6 + 1;
      v6 = -1;
    }
    v9 = *(_DWORD *)(a1 + 128);
    v10 = 100;
    v11 = 199 * v9;
    v12 = 2 * v9;
    while ( 1 )
    {
      v13 = v11 / 0xC8;
      v14 = v11 / 0xC8 - 1;
      if ( v14 >= v5 && v14 < v6 )
        v6 = v11 / 0xC8 - 1;
      if ( v13 <= v5 )
        break;
      v11 -= v12;
      if ( !--v10 )
        goto LABEL_16;
    }
    if ( v13 > v7 )
      v7 = v11 / 0xC8;
LABEL_16:
    *(_DWORD *)(a1 + 184) = v6;
    *(_DWORD *)(a1 + 180) = v7;
    DbgPrintEx(0x92u, 2u, "\nBattery Triggers [%p]\n|- High = %u\n|- Low  = %u\n", (const void *)a1, v6, v7);
  }
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x29404Cu, 0, v2, 0x14u, 0x10u);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
    if ( result < 0 )
      return result;
    *(_OWORD *)(a1 + 148) = *(_OWORD *)&v2->Type;
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
    *(_QWORD *)(v15 - 16) = PopBatteryIrpComplete;
    *(_QWORD *)(v15 - 8) = a1;
    *(_BYTE *)(v15 - 69) = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
  }
  return 0;
}
