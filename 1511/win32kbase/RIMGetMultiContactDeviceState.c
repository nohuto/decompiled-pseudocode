/*
 * XREFs of RIMGetMultiContactDeviceState @ 0x1C00CBCA4
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 * Callees:
 *     IsApplyPTPTranslationSupported_0 @ 0x1C0002D20 (IsApplyPTPTranslationSupported_0.c)
 *     ApplyPTPTranslation_0 @ 0x1C0002D28 (ApplyPTPTranslation_0.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceContactIds @ 0x1C00ABEE0 (EtwTracePointerDeviceContactIds.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 *     RIMAddToActiveDevices @ 0x1C00C49C4 (RIMAddToActiveDevices.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C4F70 (RIMIsFrameReportingPointerDevice.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00CA994 (WPP_RECORDER_SF_qd.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     ApiSetApplyTransforms @ 0x1C00CE724 (ApiSetApplyTransforms.c)
 *     ApiSetDoPrediction @ 0x1C00CE774 (ApiSetDoPrediction.c)
 *     ApiSetPostPointerDeviceArrival @ 0x1C00CE878 (ApiSetPostPointerDeviceArrival.c)
 *     RIMApplyTransforms @ 0x1C00CEB84 (RIMApplyTransforms.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 *     RIMGetNextFreeCursor @ 0x1C00D39A0 (RIMGetNextFreeCursor.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 *     RIMICComputeMechanics @ 0x1C00D4AEC (RIMICComputeMechanics.c)
 */

__int64 __fastcall RIMGetMultiContactDeviceState(
        LARGE_INTEGER *a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 *a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v8; // rdi
  unsigned int v9; // ebp
  int v10; // r12d
  unsigned __int16 *v11; // r14
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // ebp
  int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // esi
  __int64 **v26; // rdx
  __int64 *i; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-68h]

  v8 = *(_QWORD *)(a2 + 416);
  v9 = 0;
  v10 = 0;
  v11 = a5;
  LODWORD(a5) = 0;
  v13 = *(_DWORD *)(v8 + 720);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x21u,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  if ( *(_DWORD *)(v8 + 24) == 8 )
    --v13;
  v15 = (__int64)a8;
  v16 = 0;
  if ( v13 )
  {
    v17 = *(_QWORD *)(v8 + 696);
    do
    {
      v14 = 2400LL * v16;
      if ( *(_DWORD *)(v14 + v17) == *a8 && *(_DWORD *)(v14 + v17 + 2336) )
      {
        v19 = 2400LL * v16;
        v20 = *(_DWORD *)(v17 + v19 + 2392);
        if ( (v20 & 2) != 0 )
          *(_DWORD *)(v17 + v19 + 2392) = v20 | 4;
        v21 = 1;
        v22 = (int)a1;
        *v11 = *(_WORD *)(v19 + *(_QWORD *)(v8 + 696) + 2332);
        goto LABEL_24;
      }
      if ( !*(_DWORD *)(v14 + v17 + 2336) && !v10 )
      {
        v10 = 1;
        v9 = v16;
      }
      ++v16;
    }
    while ( v16 < v13 );
    if ( !v10 )
      goto LABEL_38;
    v18 = *(_DWORD *)(v8 + 704) + 1;
    *(_DWORD *)(v8 + 704) = v18;
    if ( v18 > v13 )
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        4u,
        0x22u,
        (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
        v13,
        v18);
    if ( (*(_DWORD *)(v8 + 252) & 0x80u) != 0 && *(_DWORD *)(v8 + 704) > 1u )
    {
      v23 = 2400LL * v9;
      *(_DWORD *)(v23 + *(_QWORD *)(v8 + 696) + 2392) |= 0x20u;
      *(_DWORD *)(v23 + *(_QWORD *)(v8 + 696) + 2392) &= ~0x100u;
      LODWORD(v32) = v9;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        5u,
        0x23u,
        (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
        v32);
    }
    v24 = 2400LL * v9;
    *(_DWORD *)(v24 + *(_QWORD *)(v8 + 696) + 2392) &= ~4u;
    *(_DWORD *)(v24 + *(_QWORD *)(v8 + 696)) = *(_DWORD *)v15;
    *(_DWORD *)(v24 + *(_QWORD *)(v8 + 696) + 2336) = 1;
    *(_DWORD *)(v24 + *(_QWORD *)(v8 + 696) + 2332) = RIMGetNextFreeCursor(v8);
    *v11 = *(_WORD *)(v24 + *(_QWORD *)(v8 + 696) + 2332);
    *(_DWORD *)(v24 + *(_QWORD *)(v8 + 696) + 2348) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)(v8 + 704) == 1 )
    {
      ApiSetPostPointerDeviceArrival(v8);
      v22 = (int)a1;
      RIMABArbitratePrimaryStatus(a1, v8, v9);
      RIMAddToActiveDevices(a1, v8);
    }
    else
    {
      v22 = (int)a1;
    }
    v16 = v9;
    v21 = 0;
LABEL_24:
    if ( *(_DWORD *)(v8 + 24) == 8 )
    {
      if ( (int)IsApplyPTPTranslationSupported_0() >= 0 )
        ApplyPTPTranslation_0();
      v25 = RIMGetPTPContactState(v22, a2, a3, a4, (__int64)v11, v16, a6, a7, v15);
      EtwTracePointerDeviceContactIds(v21 == 0, *(_DWORD *)v15, *v11, *((_QWORD *)v11 + 7));
      v30 = 2400LL * v16;
      *(_QWORD *)(v30 + *(_QWORD *)(v8 + 696) + 2260) = *((_QWORD *)v11 + 6);
      *(_QWORD *)(v30 + *(_QWORD *)(v8 + 696) + 2276) = *((_QWORD *)v11 + 8);
      *(_QWORD *)(v30 + *(_QWORD *)(v8 + 696) + 2284) = *(_QWORD *)(v15 + 12);
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 176) & 0x200000) != 0 )
      {
        ApiSetApplyTransforms(v8, v11, v16, v15);
      }
      else
      {
        v25 = RIMApplyTransforms(v8, v11, v16, v15);
        if ( v25 < 0 )
        {
          LODWORD(v34) = *(_DWORD *)(v8 + 24);
          WPP_RECORDER_SF_qd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v28,
            v29,
            0x24u,
            (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
            *(_QWORD *)(v8 + 16),
            v34);
          DbgPrintRIMAlways(
            "rimfram0:RIMGetMultiContactDeviceState: RIMApplyTransforms failed for pRimDev:%p HPD_TYPE:%d\n",
            *(const void **)(v8 + 16),
            *(_DWORD *)(v8 + 24));
          goto LABEL_44;
        }
      }
      *(_QWORD *)(2400LL * v16 + *(_QWORD *)(v8 + 696) + 2292) = *((_QWORD *)v11 + 8);
      RIMICComputeMechanics(v8, v16);
      v25 = RIMGetPointerDeviceContactState(v22, a2, a3, a4, (__int64)v11, v16, a6, a7, v15, (__int64)&a5);
      if ( !(_DWORD)a5 )
        ApiSetDoPrediction(v8, (_DWORD)v11 + 8, (_DWORD)v11, v21, v16, v15);
    }
  }
  else
  {
LABEL_38:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      4u,
      0x25u,
      (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
      v13,
      *(_DWORD *)(v8 + 704));
    v25 = -1073741668;
  }
  if ( (unsigned int)RIMIsFrameReportingPointerDevice(v8) && (v25 == -1073741668 || !*((_DWORD *)v11 + 5)) )
  {
    v26 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(v8 + 712) + 48LL)
                     + 8LL * (unsigned int)(*(_DWORD *)v15 % *(_DWORD *)(v8 + 720)));
    for ( i = *v26; i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 2) == *(_DWORD *)v15 )
      {
        *v26 = (__int64 *)*i;
        Win32FreePool();
        break;
      }
      v26 = (__int64 **)i;
    }
  }
LABEL_44:
  LODWORD(v33) = v25;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x26u,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
    v33);
  return (unsigned int)v25;
}
