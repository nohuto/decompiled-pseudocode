/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C00D0A1C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C00D0A88 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00D0BC8 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00D0F30 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00D2050 (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_dDdd @ 0x1C00D2134 (WPP_RECORDER_SF_dDdd.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00D4B8C (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C00DB6BC (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C00DB6D8 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C00E11D4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C00E12F8 (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r13
  __int64 active; // rax
  __int128 v7; // xmm0
  __int64 *v8; // xmm1_8
  __int64 v9; // rax
  __int64 *v10; // rbx
  int v11; // eax
  _DWORD *v12; // rsi
  int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // ecx
  __int64 **v22; // rax
  __int128 v23; // xmm0
  __int64 *v24; // xmm1_8
  __int64 v25; // rax
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v28; // ebx
  __int64 v29; // rcx
  int v30; // edx
  int v31; // [rsp+20h] [rbp-99h]
  __int128 v32; // [rsp+50h] [rbp-69h]
  __int128 v33; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v34; // [rsp+78h] [rbp-41h]
  __int128 v35; // [rsp+80h] [rbp-39h] BYREF
  __int64 v36; // [rsp+90h] [rbp-29h]
  __int128 v37; // [rsp+A0h] [rbp-19h] BYREF
  char v38[24]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 *v39; // [rsp+C8h] [rbp+Fh] BYREF
  int v40; // [rsp+128h] [rbp+6Fh]
  int v41; // [rsp+130h] [rbp+77h]

  v3 = *(_QWORD *)(a2 + 1432);
  v40 = *(_DWORD *)(a2 + 1404);
  v41 = v3;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  active = RIMCmActiveContactsBeginNoButton(v38, a2);
  *(_QWORD *)&v32 = a2 + 1552;
  v7 = *(_OWORD *)active;
  v8 = *(__int64 **)(active + 16);
  DWORD2(v32) = *(_DWORD *)(a2 + 1560);
  v9 = *(_QWORD *)(a2 + 1552) + 16LL * DWORD2(v32);
  v33 = v7;
  v34 = v8;
  v36 = v9;
  v35 = v32;
  if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v33, (__int64)&v35) )
    goto LABEL_24;
  do
  {
    v10 = v34 - 2;
    v11 = *((_DWORD *)v34 + 4);
    v12 = v34 + 297;
    if ( (v11 & 2) == 0 )
      __int2c();
    if ( (v11 & 4) != 0 )
      __int2c();
    if ( (v10[290] & 1) != 0 && (*((_DWORD *)v34 + 597) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v13 = *((_DWORD *)v10 + 13), (unsigned int)v5 <= v13 + 500)
        || !v13 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3
          && (v14 = v34[302], v37 = *(_OWORD *)(a2 + 156), (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v37, v14)) )
        {
          WPP_RECORDER_SF_dDdd(WPP_GLOBAL_Control->DeviceExtension, v15, v16, v17, v31, *v12, v12[3], v12[10], v12[11]);
        }
        else if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, (__int64)v12)
               && !(unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v10) )
        {
          goto LABEL_22;
        }
        RIMCmAddContactSuppressionReasons(a2, v10, 1LL);
        v20 = *((_DWORD *)v10 + 655);
        if ( (v20 & 2) != 0 )
        {
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            25,
            (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
            *(_DWORD *)v10,
            *((_DWORD *)v10 + 2),
            v20);
          RIMSetContactEndState(v21, (_DWORD)v10, v41, v40, 1);
        }
        else
        {
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            26,
            (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
            *(_DWORD *)v10,
            *((_DWORD *)v10 + 2),
            v20);
          *((_DWORD *)v10 + 580) &= ~1u;
          if ( (v10[4] & 8) != 0 )
          {
            RIMResetPointerDevicePrimaryContact(a2);
            if ( (*(_DWORD *)(a2 + 252) & 4) != 0 )
              RIMUpdatePrimaryDevice(a1, 0LL);
          }
        }
      }
    }
LABEL_22:
    v22 = ListTableIteratorNext(&v39, (__int64)&v33);
    *(_QWORD *)&v32 = a2 + 1552;
    v23 = *(_OWORD *)v22;
    v24 = v22[2];
    DWORD2(v32) = *(_DWORD *)(a2 + 1560);
    v25 = *(_QWORD *)(a2 + 1552) + 16LL * DWORD2(v32);
    v33 = v23;
    v34 = v24;
    v36 = v25;
    v35 = v32;
  }
  while ( tagLIST_TABLE_ITERATOR::operator!=((__int64)&v33, (__int64)&v35) );
  LODWORD(v3) = v41;
LABEL_24:
  result = rimAbShouldButtonContactBeSuppressed(a1, a2);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v28 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v29, ButtonContact, 1LL);
    LOBYTE(v30) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v30,
      5,
      27,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v28, v3, v40, 1);
  }
  return result;
}
