/*
 * XREFs of RIMGetPTPClickButtonState @ 0x1C00D02F4
 * Callers:
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D0A88 (RIMGetPTPFrameContactCount.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     rimHidP_GetUsages @ 0x1C00C36E4 (rimHidP_GetUsages.c)
 *     RIMAddToActiveDevices @ 0x1C00C3B84 (RIMAddToActiveDevices.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CC210 (RIMValidatePointerDeviceCurrentState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CD49C (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CD4F0 (ApiSetGetPowerTransitionsState.c)
 *     RIMGetNextFreeCursor @ 0x1C00D1B78 (RIMGetNextFreeCursor.c)
 */

__int64 __fastcall RIMGetPTPClickButtonState(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned int a4,
        char *a5,
        int *a6)
{
  unsigned int v8; // r13d
  __int64 v9; // r12
  int v10; // r15d
  _DWORD *v11; // rdi
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // ax
  int FreeCursor; // eax
  unsigned int v20; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int16 *v21; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-88h]
  unsigned __int64 v23; // [rsp+58h] [rbp-80h]
  int v24[14]; // [rsp+60h] [rbp-78h] BYREF

  v22 = *(_DWORD *)(a2 + 704) - 1;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = (_DWORD *)(*(_QWORD *)(a2 + 680) + 2400LL * v22);
  v20 = *(_DWORD *)(a2 + 296);
  v12 = *(unsigned __int16 **)(a2 + 1400);
  v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v21 = v12;
  if ( rimHidP_GetUsages((__int64)&v20, 9u, 0, v12, &v20, a3, a5, a4) >= 0 && v20 )
  {
    v13 = v21;
    while ( v13[v9] != 1 && (unsigned int)v13[v9] - 2 > 1 )
    {
LABEL_28:
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v20 )
        goto LABEL_29;
    }
    if ( !v11[586] && (v11[598] & 0x20) == 0 && !v8 )
    {
      ++*(_DWORD *)(a1 + 556);
      ApiSetDwmAsyncNotifyDigitizerActiveContacts();
      v13 = v21;
      *(_BYTE *)(a1 + 672) = 1;
    }
    if ( !a6 || (v11[598] & 0x20) != 0 )
    {
LABEL_22:
      v17 = v13[v9];
      v10 |= 2u;
      v8 = 1;
      switch ( v17 )
      {
        case 1u:
          *(_DWORD *)(*(_QWORD *)(a2 + 696) + 4LL) |= 4u;
          break;
        case 2u:
          *(_DWORD *)(*(_QWORD *)(a2 + 696) + 4LL) |= 8u;
          break;
        case 3u:
          *(_DWORD *)(*(_QWORD *)(a2 + 696) + 4LL) |= 0x10u;
          break;
      }
      goto LABEL_28;
    }
    *a6 |= 4u;
    v14 = v13[v9];
    v15 = *a6;
    switch ( v14 )
    {
      case 1u:
        v16 = v15 | 0x10;
        break;
      case 2u:
        v16 = v15 | 0x20;
        break;
      case 3u:
        v16 = v15 | 0x40;
        break;
      default:
        goto LABEL_19;
    }
    *a6 = v16;
LABEL_19:
    if ( v11[586] )
      *a6 |= 0x20000u;
    else
      *a6 |= 0x10000u;
    goto LABEL_22;
  }
LABEL_29:
  if ( (v10 & 2) != 0 )
  {
    if ( v11[584] )
    {
LABEL_34:
      v11[562] = v23;
      if ( (v10 & 2) == 0 && (v11[598] & 4) != 0 )
      {
        if ( a6 )
          *a6 |= 0x40000u;
        if ( (v11[598] & 0x20) == 0 )
        {
          --*(_DWORD *)(a1 + 556);
          ApiSetDwmAsyncNotifyDigitizerActiveContacts();
          *(_BYTE *)(a1 + 672) = 0;
        }
        v11[598] |= 0x400u;
      }
      ApiSetGetPowerTransitionsState(v24);
      if ( (v11[598] & 0x20) != 0 )
      {
        if ( !a6 )
        {
LABEL_49:
          v11[586] = v10;
          return v8;
        }
      }
      else
      {
        LODWORD(v21) = 0;
        if ( a6 )
          LODWORD(v21) = *a6;
        RIMValidatePointerDeviceCurrentState(a1, a2, v22, v10, &v21, v24[0] == 0);
        if ( !a6 || (_DWORD)v21 )
          goto LABEL_49;
      }
      *a6 = 0;
      goto LABEL_49;
    }
    FreeCursor = RIMGetNextFreeCursor(a2);
    v11[598] |= 0x1004u;
    v11[583] = FreeCursor;
    v11[584] = 1;
    ++*(_DWORD *)(a2 + 688);
    if ( a6 )
      RIMAddToActiveDevices((LARGE_INTEGER *)a1, a2);
  }
  if ( v11[584] )
    goto LABEL_34;
  return v8;
}
