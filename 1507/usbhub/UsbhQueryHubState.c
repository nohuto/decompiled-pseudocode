/*
 * XREFs of UsbhQueryHubState @ 0x1C00201D8
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhGetHubPowerStatus @ 0x1C002010C (UsbhGetHubPowerStatus.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryHubState(__int64 a1, __int64 a2, _DWORD *a3)
{
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax
  int v8; // eax
  __int64 v9; // r15
  int v10; // edi
  unsigned __int16 *v11; // r8
  unsigned __int16 v12; // ax
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+48h] [rbp-18h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v19[2]; // [rsp+58h] [rbp-8h] BYREF
  int v20; // [rsp+5Ah] [rbp-6h]
  __int16 v21; // [rsp+5Eh] [rbp-2h]
  int v22; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
  P = PoolWithTag;
  if ( PoolWithTag && (*(_QWORD *)PoolWithTag = 0LL, PoolWithTag[4] = 0, P) )
  {
    *((_WORD *)P + 2) = 4;
    v7 = P;
    *(_DWORD *)a2 = 0;
    v7[3] = 0;
    *((_WORD *)P + 1) = 0;
    *(_WORD *)P = 0;
    v19[0] = -96;
    *((_BYTE *)P + 8) = 0;
    v19[1] = 0;
    v20 = 0;
    v21 = *((_WORD *)P + 2);
    v8 = UsbhSyncSendCommand(a1, (__int64)v19, (__int64)P, (_WORD *)P + 2, v16, &v22);
    v9 = v22;
    v10 = v8;
    Log(a1, 4, 1365799796, v8, v22);
    v11 = (unsigned __int16 *)P;
    if ( v10 < 0 || (v12 = *((_WORD *)P + 2), v12 == 4) )
    {
      if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v10) )
      {
        Log(a1, 4, 1366324018, v11[2], v9);
        LOBYTE(v17) = 0;
        UsbhException(a1, 0, 8, (int)&P, 10, v10, v9, usbfile_bus_c, 1758, v17);
        v11 = (unsigned __int16 *)P;
      }
      if ( v10 >= 0 )
      {
        v14 = v11[1];
        *(_WORD *)(a2 + 2) = v14;
        v15 = *v11;
        *(_WORD *)a2 = v15;
        Log(a1, 4, 1215329140, v14, v15);
        v11 = (unsigned __int16 *)P;
      }
      if ( a3 )
        *a3 = v9;
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      return (unsigned int)v10;
    }
    else
    {
      Log(a1, 4, 1366324017, v12, v9);
      LOBYTE(v17) = 0;
      UsbhException(a1, 0, 9, (int)&P, 10, v10, v9, usbfile_bus_c, 1745, v17);
      if ( a3 )
        *a3 = v9;
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225473LL;
    }
  }
  else
  {
    Log(a1, 4, 1365795180, 0LL, 0LL);
    if ( a3 )
      *a3 = -1073737728;
    return 3221225626LL;
  }
}
