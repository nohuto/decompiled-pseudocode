/*
 * XREFs of Controller_WdfEvtTimerFunction @ 0x1C0001EA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 */

void __fastcall Controller_WdfEvtTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rbx
  __int64 **v7; // rdx
  KIRQL v8; // r15
  PDEVICE_OBJECT v9; // rcx
  unsigned int v10; // esi
  __int64 *v11; // r14
  unsigned int v12; // esi
  __int64 *v13; // r14
  __int64 v14; // rdi
  _QWORD *v15; // rax
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // r8
  _QWORD *v22; // rcx
  __int64 *v23; // rax
  __int64 **v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  unsigned int v27; // r8d
  _QWORD *v28; // rax
  __int64 v29; // r9
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 *v34; // rax
  __int64 **v35; // rcx
  unsigned int v36; // eax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0045340);
  v3 = v2;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 32LL);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), 3, 3, 165, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    LOBYTE(v25) = 1;
    Controller_SetControllerGone(v3, v25);
  }
  else if ( (v5 & 4) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), v4, 3, 166, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    Controller_ReportFatalError(v3, 2, 4097, 0, 0LL, 0LL);
  }
  else if ( (v5 & 0x1000) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), v4, 3, 167, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    Controller_ReportFatalError(v3, 2, 4098, 0, 0LL, 0LL);
  }
  else
  {
    if ( ++*(_DWORD *)(v2 + 300) == 60 )
    {
      *(_QWORD *)(v2 + 296) = 0LL;
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), v4, 3, 170, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    }
    v6 = *(_QWORD *)(v3 + 88);
    if ( *(_QWORD *)(v6 + 232) )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 120));
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v26 = *(_DWORD *)(v6 + 164);
        LOBYTE(v26) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
          v26,
          7,
          40,
          (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
          *(_DWORD *)(v6 + 164));
        v9 = WPP_GLOBAL_Control;
      }
      v10 = *(_DWORD *)(v6 + 68);
      v11 = *(__int64 **)(v6 + 184);
      while ( v11 != (__int64 *)(v6 + 184) )
      {
        if ( *(_DWORD *)(v6 + 164) <= v10 )
          break;
        if ( *((_BYTE *)v11 + 16) )
        {
          if ( LOWORD(v9->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_q(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
              (_DWORD)v7,
              7,
              37,
              (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
              (char)v11);
          }
          v27 = 0;
          v28 = v11 + 9;
          do
          {
            v29 = *(v28 - 6);
            v30 = v28 - 6;
            v31 = (_QWORD *)*(v28 - 5);
            if ( *(_QWORD **)(v29 + 8) != v28 - 6 || (_QWORD *)*v31 != v30 )
              __fastfail(3u);
            *v31 = v29;
            *(_QWORD *)(v29 + 8) = v31;
            *(v28 - 5) = v30;
            *v30 = v30;
            v32 = *v28;
            v33 = (_QWORD *)v28[1];
            if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v33 != v28 )
              __fastfail(3u);
            *v33 = v32;
            ++v27;
            *(_QWORD *)(v32 + 8) = v33;
            v28[1] = v28;
            *v28 = v28;
            v28 += 10;
          }
          while ( v27 < 8 );
          *(_DWORD *)(v6 + 164) -= 8;
          *(_DWORD *)(v6 + 160) -= 8;
          v34 = (__int64 *)*v11;
          v35 = (__int64 **)v11[1];
          if ( *(__int64 **)(*v11 + 8) != v11 || *v35 != v11 )
            __fastfail(3u);
          *v35 = v34;
          v34[1] = (__int64)v35;
          v7 = *(__int64 ***)(v6 + 256);
          if ( *v7 != (__int64 *)(v6 + 248) )
            __fastfail(3u);
          *v11 = v6 + 248;
          v11[1] = (__int64)v7;
          *v7 = v11;
          *(_QWORD *)(v6 + 256) = v11;
          v11 = v34;
          ++*(_DWORD *)(v6 + 240);
          v9 = WPP_GLOBAL_Control;
        }
        else
        {
          v36 = 0;
          v7 = (__int64 **)(v11 + 12);
          do
          {
            if ( *v7 )
              break;
            ++v36;
            v7 += 10;
          }
          while ( v36 < 8 );
          if ( v36 == 8 )
          {
            if ( LOWORD(v9->DeviceType) )
            {
              LOBYTE(v7) = 5;
              WPP_RECORDER_SF_q(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
                (_DWORD)v7,
                7,
                38,
                (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
                (char)v11);
            }
            *((_BYTE *)v11 + 16) = 1;
            --*(_DWORD *)(v6 + 20);
            v9 = WPP_GLOBAL_Control;
          }
          v11 = (__int64 *)*v11;
        }
      }
      if ( LOWORD(v9->DeviceType) )
      {
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
          (_DWORD)v7,
          7,
          41,
          (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
          *(_DWORD *)(v6 + 164));
        v9 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v7) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
            (_DWORD)v7,
            7,
            42,
            (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
            *(_DWORD *)(v6 + 116));
          v9 = WPP_GLOBAL_Control;
        }
      }
      v12 = *(_DWORD *)(v6 + 52);
      v13 = *(__int64 **)(v6 + 144);
      while ( v13 != (__int64 *)(v6 + 144) )
      {
        if ( *(_DWORD *)(v6 + 116) <= v12 )
          break;
        if ( *((_BYTE *)v13 + 16) )
        {
          if ( LOWORD(v9->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_q(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
              (_DWORD)v7,
              7,
              37,
              (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
              (char)v13);
          }
          v16 = 0;
          v17 = v13 + 9;
          do
          {
            v18 = *(v17 - 6);
            v19 = v17 - 6;
            v20 = (_QWORD *)*(v17 - 5);
            if ( *(_QWORD **)(v18 + 8) != v17 - 6 || (_QWORD *)*v20 != v19 )
              __fastfail(3u);
            *v20 = v18;
            *(_QWORD *)(v18 + 8) = v20;
            *(v17 - 5) = v19;
            *v19 = v19;
            v21 = *v17;
            v22 = (_QWORD *)v17[1];
            if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v22 != v17 )
              __fastfail(3u);
            *v22 = v21;
            ++v16;
            *(_QWORD *)(v21 + 8) = v22;
            v17[1] = v17;
            *v17 = v17;
            v17 += 10;
          }
          while ( !v16 );
          --*(_DWORD *)(v6 + 116);
          --*(_DWORD *)(v6 + 112);
          v23 = (__int64 *)*v13;
          v24 = (__int64 **)v13[1];
          if ( *(__int64 **)(*v13 + 8) != v13 || *v24 != v13 )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = (__int64)v24;
          v7 = *(__int64 ***)(v6 + 256);
          if ( *v7 != (__int64 *)(v6 + 248) )
            __fastfail(3u);
          *v13 = v6 + 248;
          v13[1] = (__int64)v7;
          *v7 = v13;
          *(_QWORD *)(v6 + 256) = v13;
          v13 = v23;
          ++*(_DWORD *)(v6 + 240);
          v9 = WPP_GLOBAL_Control;
        }
        else
        {
          LODWORD(v7) = 0;
          v15 = v13 + 12;
          do
          {
            if ( *v15 )
              break;
            LODWORD(v7) = (_DWORD)v7 + 1;
            v15 += 10;
          }
          while ( !(_DWORD)v7 );
          if ( (_DWORD)v7 == 1 )
          {
            if ( LOWORD(v9->DeviceType) )
            {
              LOBYTE(v7) = 5;
              WPP_RECORDER_SF_q(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
                (_DWORD)v7,
                7,
                38,
                (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
                (char)v13);
            }
            *((_BYTE *)v13 + 16) = 1;
            --*(_DWORD *)(v6 + 20);
            v9 = WPP_GLOBAL_Control;
          }
          v13 = (__int64 *)*v13;
        }
      }
      if ( LOWORD(v9->DeviceType) )
      {
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
          (_DWORD)v7,
          7,
          43,
          (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
          *(_DWORD *)(v6 + 116));
      }
      v14 = *(_QWORD *)(v6 + 248);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 120), v8);
      if ( v14 != v6 + 248 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + 232));
    }
  }
}
