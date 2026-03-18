/*
 * XREFs of RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90
 * Callers:
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 * Callees:
 *     IsSqmPenDownCountSupported_0 @ 0x1C0002D60 (IsSqmPenDownCountSupported_0.c)
 *     SqmPenDownCount_0 @ 0x1C0002D68 (SqmPenDownCount_0.c)
 *     DbgPrintRIM @ 0x1C000FB48 (DbgPrintRIM.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00C47F4 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMProcessPointerEvent @ 0x1C00C9674 (RIMProcessPointerEvent.c)
 *     RIMSimulatedPointerDeviceScanTime @ 0x1C00CD218 (RIMSimulatedPointerDeviceScanTime.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 */

__int64 __fastcall RIMMarkEndPointerMessageDelivery(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        int a7)
{
  __int64 v7; // r14
  __int64 v9; // r13
  char *v11; // r12
  __int64 v12; // r15
  unsigned int v13; // edi
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edi
  __int64 result; // rax
  __int64 v27; // [rsp+28h] [rbp-D8h]
  unsigned int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  unsigned int v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  char *v33; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v34[10]; // [rsp+90h] [rbp-70h] BYREF

  v7 = *(_QWORD *)(a2 + 696);
  v9 = *(_QWORD *)(a2 + 16);
  v29 = 0;
  v11 = 0LL;
  v30 = 0;
  v12 = 2400LL * a3;
  v13 = a4;
  v31 = a4;
  v33 = 0LL;
  v32 = *(_DWORD *)(v12 + v7 + 2340);
  memset(v34, 0, sizeof(v34));
  v14 = DWORD1(v34[1]);
  if ( (*(_DWORD *)(v12 + v7 + 2392) & 1) != 0 )
  {
    v14 = DWORD1(v34[1]) | 0x2000;
    DWORD1(v34[1]) |= 0x2000u;
  }
  if ( a7 )
  {
    v14 |= 0x8000u;
    DWORD1(v34[1]) = v14;
  }
  if ( (*(_DWORD *)(a2 + 252) & 0x10) != 0 )
    DWORD1(v34[1]) = v14 | 0x4000;
  v15 = *(unsigned int *)(a2 + 24);
  *((_QWORD *)&v34[2] + 1) = *(_QWORD *)(v12 + v7 + 2252);
  v34[3] = *(_OWORD *)(v12 + v7 + 2260);
  v16 = *(_QWORD *)(v12 + v7 + 2276);
  HIDWORD(v34[6]) = 0;
  *(_QWORD *)&v34[4] = v16;
  if ( (unsigned int)(v15 - 1) > 4 )
  {
    v17 = DWORD2(v34[0]);
    if ( (_DWORD)v15 == 8 )
      v17 = 5;
    DWORD2(v34[0]) = v17;
  }
  else
  {
    DWORD2(v34[0]) = 2;
  }
  if ( (*(_DWORD *)(v12 + v7 + 2392) & 0x1000) != 0 )
  {
    *(_BYTE *)(a1 + 704) = 0;
    v30 = 1;
  }
  else
  {
    v18 = RIMAddSimulatedPointerDeviceData(v15, a2, a3, (int)v34, &v33, &v29);
    if ( v18 < 0 )
    {
      LODWORD(v27) = v18;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Bu,
        (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
        v27);
    }
    v11 = v33;
  }
  v19 = (*(_DWORD *)(a2 + 252) & 0x200) == 0;
  v34[7] = v34[8];
  if ( v19 )
  {
    RIMSimulatedPointerDeviceScanTime(a1, a2, a5, &v31);
    v13 = v31;
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 1436);
    if ( v20 >= v13 )
    {
      v21 = *(_DWORD *)(a2 + 1452);
      if ( v21 )
        v13 = v20 + (v21 >> 3);
      else
        v13 = v20 + 8;
    }
  }
  DWORD2(v34[4]) = v13;
  *((_QWORD *)&v34[5] + 1) = a5;
  if ( (*(_DWORD *)(v9 + 176) & 0x800) != 0 )
    v22 = *(_QWORD *)(v9 + 24);
  else
    v22 = *(_QWORD *)(v9 + 16);
  *((_QWORD *)&v34[1] + 1) = v22;
  LOWORD(v34[0]) = a6;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 6) <= 1 )
  {
    HIDWORD(v34[6]) = 0;
    DWORD2(v34[0]) = 3;
  }
  v23 = *(_QWORD *)(a2 + 696);
  v24 = *(_DWORD *)(v12 + v23 + 2392);
  v25 = -__CFSHR__(v24, 11);
  if ( (v24 & 0x20) != 0 )
  {
    *(_DWORD *)(v12 + v23 + 2392) = v24 & 0xFFFFFFBF;
    DbgPrintRIM("setting bSendLast to FALSE on %d", a3);
  }
  else
  {
    RIMRemoveContactFromActiveList(a1, a2, a3, 0LL);
  }
  if ( (v32 & 2) != 0 )
  {
    DWORD1(v34[1]) |= 0x40000u;
    if ( !v25 )
      ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)--*(_DWORD *)(a1 + 588));
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 6) <= 1 && (int)IsSqmPenDownCountSupported_0() >= 0 )
      SqmPenDownCount_0();
  }
  else
  {
    DWORD1(v34[1]) |= 0x20000u;
  }
  *(_DWORD *)(v12 + *(_QWORD *)(a2 + 696) + 2340) = 0;
  result = RIMProcessPointerEvent(a1, v9, 1, 0, (__int64)v34, v29, (__int64)v11);
  if ( v11 )
    return Win32FreePool();
  return result;
}
