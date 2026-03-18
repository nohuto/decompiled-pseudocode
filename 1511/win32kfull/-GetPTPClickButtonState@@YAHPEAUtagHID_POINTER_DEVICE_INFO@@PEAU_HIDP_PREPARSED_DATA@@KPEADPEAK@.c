/*
 * XREFs of ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CFE08
 * Callers:
 *     ?xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z @ 0x1C01D0560 (-xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z.c)
 *     GetPTPContactState @ 0x1C01D0F54 (GetPTPContactState.c)
 * Callees:
 *     AddToActiveDevices @ 0x1C01C8E7C (AddToActiveDevices.c)
 *     DecActiveContacts @ 0x1C01C9FD0 (DecActiveContacts.c)
 *     GetNextFreeCursor @ 0x1C01CCB44 (GetNextFreeCursor.c)
 *     IncActiveContacts @ 0x1C01CD96C (IncActiveContacts.c)
 *     ValidatePointerDeviceCurrentState @ 0x1C01CEE88 (ValidatePointerDeviceCurrentState.c)
 */

__int64 __fastcall GetPTPClickButtonState(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        PHIDP_PREPARSED_DATA PreparsedData,
        ULONG ReportLength,
        PCHAR Report,
        unsigned int *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  unsigned int v8; // r14d
  USHORT *v9; // r13
  _DWORD *v10; // rdi
  NTSTATUS Usages; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int *v14; // rbx
  __int64 v15; // r8
  USHORT v16; // cx
  unsigned int v17; // eax
  int v18; // eax
  USHORT v19; // ax
  int NextFreeCursor; // eax
  unsigned __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-30h]
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF

  v23 = *((_DWORD *)a1 + 180) - 1;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (USHORT *)*((_QWORD *)a1 + 177);
  v10 = (_DWORD *)(*((_QWORD *)a1 + 87) + 2400LL * v23);
  UsageLength = *((_DWORD *)a1 + 78);
  v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  Usages = HidP_GetUsages(HidP_Input, 9u, 0, v9, &UsageLength, PreparsedData, Report, ReportLength);
  v14 = a5;
  v15 = 2LL;
  if ( Usages >= 0 && UsageLength )
  {
    v12 = 1LL;
    while ( v9[v7] != 1 && (unsigned int)v9[v7] - 2 > 1 )
    {
LABEL_28:
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= UsageLength )
        goto LABEL_29;
    }
    if ( !v10[586] && (v10[598] & 0x20) == 0 && !v6 )
    {
      IncActiveContacts((__int64)&gActivePointerDeviceList, 1LL, 2LL, v13);
      v12 = 1LL;
      gIsPTPButtonDown = 1;
      v15 = 2LL;
    }
    if ( !v14 || (v10[598] & 0x20) != 0 )
    {
LABEL_22:
      v19 = v9[v7];
      v8 |= 2u;
      v6 = 1;
      switch ( v19 )
      {
        case 1u:
          *(_DWORD *)(*((_QWORD *)a1 + 89) + 4LL) |= 4u;
          break;
        case 2u:
          *(_DWORD *)(*((_QWORD *)a1 + 89) + 4LL) |= 8u;
          break;
        case 3u:
          *(_DWORD *)(*((_QWORD *)a1 + 89) + 4LL) |= 0x10u;
          break;
      }
      goto LABEL_28;
    }
    *v14 |= 4u;
    v16 = v9[v7];
    v17 = *v14;
    switch ( v16 )
    {
      case 1u:
        v18 = v17 | 0x10;
        break;
      case 2u:
        v18 = v17 | 0x20;
        break;
      case 3u:
        v18 = v17 | 0x40;
        break;
      default:
        goto LABEL_19;
    }
    *v14 = v18;
LABEL_19:
    if ( v10[586] )
      *v14 |= 0x20000u;
    else
      *v14 |= 0x10000u;
    goto LABEL_22;
  }
LABEL_29:
  if ( (v8 & 2) != 0 && !v10[584] )
  {
    NextFreeCursor = GetNextFreeCursor((__int64)a1);
    v10[598] |= 0x1004u;
    v10[584] = 1;
    v10[583] = NextFreeCursor;
    ++*((_DWORD *)a1 + 176);
    if ( v14 )
      AddToActiveDevices((struct _LIST_ENTRY *)a1);
  }
  if ( v10[584] )
  {
    v10[562] = v22;
    if ( (v8 & 2) == 0 && (v10[598] & 4) != 0 )
    {
      if ( v14 )
        *v14 |= 0x40000u;
      if ( (v10[598] & 0x20) == 0 )
      {
        DecActiveContacts((__int64)&gActivePointerDeviceList, v12, v15, v13);
        gIsPTPButtonDown = 0;
      }
      v10[598] |= 0x400u;
    }
    if ( (v10[598] & 0x20) != 0 )
    {
      if ( !v14 )
      {
LABEL_49:
        v10[586] = v8;
        return v6;
      }
    }
    else
    {
      LODWORD(v22) = 0;
      if ( v14 )
        LODWORD(v22) = *v14;
      ValidatePointerDeviceCurrentState((struct _LIST_ENTRY *)a1, v23, v8, &v22, gPowerTransitionsState[0] == 0);
      if ( !v14 || (_DWORD)v22 )
        goto LABEL_49;
    }
    *v14 = 0;
    goto LABEL_49;
  }
  return v6;
}
