/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C000D10C
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C00083A8 (rimSetPointerDeviceDisplayConfig.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     RIMResetPointerDevices @ 0x1C000CFF0 (RIMResetPointerDevices.c)
 *     RIMSetTestModeStatus @ 0x1C00CDB10 (RIMSetTestModeStatus.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00CF4C0 (RIMIDERemoveInjectionDevice.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C00D88E8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1C00E1204 (RIMCmDeactivateContact.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r12
  int v9; // r15d
  __int64 *v10; // r13
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  int v20; // edx
  __int128 v22; // [rsp+38h] [rbp-59h]
  __int128 v23; // [rsp+50h] [rbp-41h] BYREF
  __int64 v24; // [rsp+60h] [rbp-31h]
  __int128 v25; // [rsp+68h] [rbp-29h] BYREF
  __int64 v26; // [rsp+78h] [rbp-19h]
  __int64 *v27; // [rsp+80h] [rbp-11h] BYREF
  int v28; // [rsp+88h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp-1h]
  _BYTE v30[24]; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v31[24]; // [rsp+B0h] [rbp+1Fh] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v3);
  v28 = 0;
  v10 = (__int64 *)(a2 + 1552);
  v27 = v10;
  v29 = *v10;
  v11 = ListTableIteratorNext(v30, &v27);
  *(_QWORD *)&v22 = v10;
  v12 = *(_OWORD *)v11;
  v13 = *(_QWORD *)(v11 + 16);
  DWORD2(v22) = *((_DWORD *)v10 + 2);
  v14 = *v10 + 16LL * DWORD2(v22);
  v23 = v12;
  v24 = v13;
  v26 = v14;
  v25 = v22;
  if ( !(unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v23, &v25) )
    goto LABEL_15;
  while ( 1 )
  {
    v16 = v24;
    if ( (*(_DWORD *)(v24 + 16) & 2) == 0 )
      __int2c();
    v17 = ListTableIteratorNext(v31, &v23);
    v18 = *(_OWORD *)v17;
    v19 = *(_QWORD *)(v17 + 16);
    LODWORD(v17) = *(_DWORD *)(v16 + 2604);
    v24 = v19;
    v23 = v18;
    if ( (v17 & 2) != 0 )
      break;
    RIMCmDeactivateContact(a2, v16 - 16);
LABEL_11:
    DWORD2(v22) = *((_DWORD *)v10 + 2);
    *(_QWORD *)&v22 = v10;
    v26 = *v10 + 16LL * DWORD2(v22);
    v25 = v22;
    if ( !(unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v23, &v25) )
      goto LABEL_12;
  }
  if ( v9
    || (v9 = 1,
        (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                        a1,
                        v3,
                        (LARGE_INTEGER)PerformanceCounter.QuadPart)) )
  {
    RIMInsertSimulatedContactEndStateInFrame(a1, v3, v16 - 16, PerformanceCounter.LowPart, v8, 1);
    *(_DWORD *)(v16 + 2304) |= 4u;
    goto LABEL_11;
  }
  LOBYTE(v20) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v20,
    4,
    39,
    (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
  v9 = 0;
LABEL_12:
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v3);
    RIMCompletePointerDeviceFrame(a1, v3);
  }
LABEL_15:
  LOBYTE(v15) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v15,
           4,
           40,
           (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
}
