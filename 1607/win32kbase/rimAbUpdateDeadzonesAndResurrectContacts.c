/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C00D0990 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C00D0A88 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00D0BC8 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00D2050 (WPP_RECORDER_SF_dDD.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00E1334 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C00E134C (RIMCmRemoveContactSuppressionReasons.c)
 */

_BOOL8 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v4; // rdx
  __int64 **v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // xmm1_8
  __int128 v9; // xmm0
  __int64 v10; // rax
  _BOOL8 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rbx
  __int64 v15; // r14
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r8
  int v19; // edx
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  __int128 v23; // [rsp+48h] [rbp-79h] BYREF
  __int64 *v24; // [rsp+58h] [rbp-69h]
  __int128 v25; // [rsp+60h] [rbp-61h]
  __int64 v26; // [rsp+70h] [rbp-51h]
  __int64 v27; // [rsp+78h] [rbp-49h] BYREF
  int v28; // [rsp+80h] [rbp-41h]
  __int64 v29; // [rsp+88h] [rbp-39h]
  __int128 v30; // [rsp+98h] [rbp-29h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-9h]
  __int128 v33; // [rsp+C8h] [rbp+7h]
  char v34; // [rsp+D8h] [rbp+17h] BYREF
  char v35; // [rsp+F0h] [rbp+2Fh] BYREF

  v2 = *(_QWORD *)(a2 + 480);
  v28 = 0;
  v4 = &v27;
  v6 = (__int64 **)&v34;
  v29 = *(_QWORD *)(v2 + 1552);
  v27 = v2 + 1552;
  while ( 1 )
  {
    v7 = ListTableIteratorNext(v6, (__int64)v4);
    *(_QWORD *)&v25 = v2 + 1552;
    v8 = v7[2];
    v9 = *(_OWORD *)v7;
    DWORD2(v25) = *(_DWORD *)(v2 + 1560);
    v10 = *(_QWORD *)(v2 + 1552) + 16LL * DWORD2(v25);
    v23 = v9;
    v26 = v10;
    v24 = v8;
    v32 = v10;
    v31 = v25;
    result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v23, (__int64)&v31);
    if ( !result )
      return result;
    v14 = v24;
    v15 = (__int64)(v24 + 297);
    if ( (v24[288] & 1) == 0 )
      goto LABEL_23;
    v16 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v16 - 5) > 1 )
    {
      if ( (unsigned int)(v16 - 1) <= 3 )
      {
        v18 = v24[7];
        v30 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 156LL);
        if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v30, v18) )
        {
          LOBYTE(v19) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            5,
            22,
            (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
          *(_DWORD *)(a1 + 632) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                + 250;
        }
      }
    }
    else if ( (*((_DWORD *)v24 + 597) & 2) != 0 )
    {
      if ( *(_DWORD *)(a1 + 620) )
      {
        *(_DWORD *)(a1 + 620) = 0;
        *(_DWORD *)(a1 + 632) = 0;
        *(_QWORD *)(a1 + 624) = 0LL;
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 5, 21, v13);
      }
    }
    else
    {
      v17 = v24[7];
      v33 = *(_OWORD *)(v2 + 156);
      rimAbCreateGlobalPenDeadzone(a1, v12, v17);
    }
    if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v14 - 2) )
    {
      v22 = *(_DWORD *)(v15 + 12);
      if ( (v22 & 2) != 0 && (unsigned int)(*(_DWORD *)(v2 + 24) - 5) <= 1 )
      {
        if ( (v22 & 4) != 0 )
          goto LABEL_18;
        if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v2, v15) )
        {
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            5,
            23,
            (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
LABEL_18:
          RIMCmRemoveContactSuppressionReasons(v2, v14 - 2, 1LL);
          goto LABEL_23;
        }
      }
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        v21,
        24,
        (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
        *((_DWORD *)v14 - 4),
        *((_DWORD *)v14 - 2),
        *((_DWORD *)v14 + 651));
LABEL_22:
      *((_DWORD *)v14 + 576) &= ~1u;
      goto LABEL_23;
    }
    if ( *((_DWORD *)v14 - 2) && (*((_DWORD *)v14 + 651) & 2) == 0 )
      goto LABEL_22;
LABEL_23:
    v4 = (__int64 *)&v23;
    v6 = (__int64 **)&v35;
  }
}
