/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00D0C3C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00D0F30 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00D2050 (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C00E11D4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C00E12F8 (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  int v6; // r12d
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r13
  int v9; // edi
  __int64 active; // rax
  __int128 v11; // xmm0
  __int64 *v12; // xmm1_8
  __int64 i; // rax
  __int64 *v14; // rdi
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  __int64 **v18; // rax
  __int64 ButtonContact; // rdi
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  __int128 v25; // [rsp+40h] [rbp-59h]
  __int128 v26; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v27; // [rsp+68h] [rbp-31h]
  __int128 v28; // [rsp+70h] [rbp-29h] BYREF
  __int64 v29; // [rsp+80h] [rbp-19h]
  char v30[24]; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v31; // [rsp+A0h] [rbp+7h] BYREF
  int v32; // [rsp+108h] [rbp+6Fh]
  __int64 v34; // [rsp+118h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v34 = *(_QWORD *)(a2 + 1432) + 1LL;
  v32 = *(_DWORD *)(a2 + 1404) + 1;
  v9 = RIMGetPointerInputType(a2);
  if ( v9 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(v30, a2);
    *(_QWORD *)&v25 = a2 + 1552;
    v11 = *(_OWORD *)active;
    v12 = *(__int64 **)(active + 16);
    DWORD2(v25) = *(_DWORD *)(a2 + 1560);
    for ( i = *(_QWORD *)(a2 + 1552) + 16LL * DWORD2(v25); ; i = *(_QWORD *)(a2 + 1552) + 16LL * DWORD2(v25) )
    {
      v26 = v11;
      v27 = v12;
      v28 = v25;
      v29 = i;
      if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v26, (__int64)&v28) )
        break;
      v14 = v27;
      if ( (v27[2] & 2) == 0 )
        __int2c();
      if ( (*((_DWORD *)v27 + 651) & 2) != 0 )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v15 = *((_DWORD *)v27 + 9), (unsigned int)v8 <= v15 + 500)
          || !v15 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts((_DWORD *)v27 + 648, a3, 0) )
          {
            if ( !v6 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v6 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v14 - 2, 1LL);
            WPP_RECORDER_SF_dDD(
              WPP_GLOBAL_Control->DeviceExtension,
              v16,
              v17,
              16,
              (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
              *((_DWORD *)v14 - 4),
              *((_DWORD *)v14 - 2),
              *((_DWORD *)v14 + 651));
            RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), (_DWORD)v14 - 16, v34, v32, 1);
          }
        }
      }
      v18 = ListTableIteratorNext(&v31, (__int64)&v26);
      *(_QWORD *)&v25 = a2 + 1552;
      v11 = *(_OWORD *)v18;
      v12 = v18[2];
      DWORD2(v25) = *(_DWORD *)(a2 + 1560);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed(a1, a2) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v20, ButtonContact, 1LL);
      if ( !v6 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v22,
            5,
            17,
            (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
          return 0;
        }
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          5,
          18,
          (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
        RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), ButtonContact, v34, v32, 1);
        goto LABEL_25;
      }
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        5,
        19,
        (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
    }
    if ( v6 )
    {
LABEL_25:
      v5 = RIMCompletePointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v23,
        5,
        20,
        (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
        v5);
    }
  }
  return v5;
}
