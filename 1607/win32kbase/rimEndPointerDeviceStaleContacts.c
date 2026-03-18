/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C00DC620
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C00DB3D4 (RIMEndAllStaleContacts.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C008E070 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00D2050 (WPP_RECORDER_SF_dDD.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1C00E1204 (RIMCmDeactivateContact.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  int v7; // edi
  int v8; // r15d
  __int64 **v9; // rax
  __int128 v10; // xmm0
  __int64 *v11; // xmm1_8
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 **v14; // rax
  __int64 v15; // r8
  __int128 v16; // xmm0
  __int64 *v17; // xmm1_8
  unsigned int v18; // r11d
  int v19; // ecx
  __int64 v20; // rdx
  PalmTelemetry *v21; // rbx
  __int64 v22; // [rsp+30h] [rbp-41h]
  __int64 v23; // [rsp+38h] [rbp-39h]
  __int64 v24; // [rsp+40h] [rbp-31h]
  __int128 v25; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+58h] [rbp-19h]
  __int128 v27; // [rsp+60h] [rbp-11h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-1h]
  __int128 v29; // [rsp+78h] [rbp+7h] BYREF
  __int64 v30; // [rsp+88h] [rbp+17h]

  v4 = *(_QWORD *)(a2 + 480);
  v7 = 0;
  DWORD2(v29) = 0;
  v8 = 0;
  v30 = *(_QWORD *)(v4 + 1552);
  *(_QWORD *)&v29 = v4 + 1552;
  v9 = ListTableIteratorNext((__int64 **)&v25, (__int64)&v29);
  v10 = *(_OWORD *)v9;
  v11 = v9[2];
  DWORD2(v25) = *(_DWORD *)(v4 + 1560);
  v12 = *(_QWORD *)(v4 + 1552) + 16LL * DWORD2(v25);
  v27 = v10;
  v26 = v12;
  v28 = v11;
  *(_QWORD *)&v25 = v4 + 1552;
  v30 = v12;
  v29 = v25;
  if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v27, (__int64)&v29) )
    goto LABEL_20;
  while ( 1 )
  {
    v13 = v28;
    if ( (v28[2] & 2) == 0 )
      __int2c();
    v14 = ListTableIteratorNext((__int64 **)&v25, (__int64)&v27);
    v16 = *(_OWORD *)v14;
    v17 = v14[2];
    LODWORD(v14) = *(_DWORD *)(v4 + 848) + *((_DWORD *)v13 + 7);
    v28 = v17;
    v27 = v16;
    if ( v18 <= (unsigned int)v14 )
      goto LABEL_15;
    v19 = *(_DWORD *)(v4 + 24);
    v20 = 1LL;
    if ( (unsigned int)(v19 - 5) > 1 )
    {
      if ( (unsigned int)(v19 - 1) <= 3 )
        v7 = 1;
    }
    else
    {
      v7 = 2;
    }
    if ( (*((_DWORD *)v13 + 651) & 2) != 0 )
      break;
    LODWORD(v24) = *((_DWORD *)v13 + 651);
    LODWORD(v23) = *((_DWORD *)v13 - 2);
    LODWORD(v22) = *((_DWORD *)v13 - 4);
    WPP_RECORDER_SF_dDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      1LL,
      v15,
      0x2Au,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
      v22,
      v23,
      v24);
    RIMCmDeactivateContact(v4, v13 - 2);
LABEL_15:
    DWORD2(v25) = *(_DWORD *)(v4 + 1560);
    v26 = *(_QWORD *)(v4 + 1552) + 16LL * DWORD2(v25);
    *(_QWORD *)&v25 = v4 + 1552;
    v30 = v26;
    v29 = v25;
    if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v27, (__int64)&v29) )
      goto LABEL_18;
  }
  if ( v8 )
  {
LABEL_14:
    LODWORD(v24) = *((_DWORD *)v13 + 651);
    LODWORD(v23) = *((_DWORD *)v13 - 2);
    LODWORD(v22) = *((_DWORD *)v13 - 4);
    WPP_RECORDER_SF_dDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      v15,
      0x2Cu,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
      v22,
      v23,
      v24);
    *((_DWORD *)v13 + 576) |= 4u;
    RIMInsertSimulatedContactEndStateInFrame(a1, a2, (_DWORD *)v13 - 4, a3, a4, 0);
    goto LABEL_15;
  }
  RIMAbandonPointerDeviceFrame(a1, a2);
  if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, a3) )
  {
    v8 = 1;
    goto LABEL_14;
  }
  LOBYTE(v20) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v20,
    4,
    43,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
LABEL_18:
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    RIMCompletePointerDeviceFrame(a1, a2);
  }
LABEL_20:
  v21 = *(PalmTelemetry **)(a1 + 960);
  if ( v21 )
  {
    if ( v7 )
    {
      PalmTelemetry::_ResetTelemetryData(v21);
      if ( *(_DWORD *)v21 )
      {
        if ( v7 == 1 )
          *((_DWORD *)v21 + 1) = 1;
        else
          *(_QWORD *)v21 = 0LL;
      }
    }
  }
}
