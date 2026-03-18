/*
 * XREFs of Controller_WdfEvtTimerFunction @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_WdfEvtTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rbx
  char v7; // r14
  __int64 **v8; // rdx
  KIRQL v9; // r15
  PDEVICE_OBJECT v10; // rcx
  unsigned int v11; // ebp
  __int64 *v12; // r12
  unsigned int v13; // ebp
  __int64 *v14; // r12
  _QWORD *v15; // rax
  int v16; // r8d
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
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

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2568))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v1,
         off_1C00400B8);
  v3 = v2;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 32LL);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), 3, 3, 160, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    LOBYTE(v25) = 1;
    Controller_SetControllerGone(v3, v25);
  }
  else if ( (v5 & 4) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), v4, 3, 161, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    Controller_ReportFatalError(v3, 2, 4097, 0, 0LL, 0LL);
  }
  else if ( (v5 & 0x1000) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), v4, 3, 162, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    Controller_ReportFatalError(v3, 2, 4098, 0, 0LL, 0LL);
  }
  else
  {
    if ( ++*(_DWORD *)(v2 + 292) == 60 )
    {
      *(_QWORD *)(v2 + 288) = 0LL;
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), v4, 3, 165, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    }
    v6 = *(_QWORD *)(v3 + 88);
    if ( *(_QWORD *)(v6 + 232) )
    {
      v7 = 0;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 120));
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v26 = *(_DWORD *)(v6 + 164);
        LOBYTE(v26) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
          v26,
          7,
          40,
          (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
          *(_DWORD *)(v6 + 164));
        v10 = WPP_GLOBAL_Control;
      }
      v11 = *(_DWORD *)(v6 + 68);
      v12 = *(__int64 **)(v6 + 184);
      while ( v12 != (__int64 *)(v6 + 184) )
      {
        if ( *(_DWORD *)(v6 + 164) <= v11 )
          break;
        if ( *((_BYTE *)v12 + 16) )
        {
          if ( LOWORD(v10->DeviceType) )
          {
            LOBYTE(v8) = 5;
            WPP_RECORDER_SF_q(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
              (_DWORD)v8,
              7,
              37,
              (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
              (char)v12);
          }
          v27 = 0;
          v28 = v12 + 9;
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
          v34 = (__int64 *)*v12;
          v35 = (__int64 **)v12[1];
          if ( *(__int64 **)(*v12 + 8) != v12 || *v35 != v12 )
            __fastfail(3u);
          *v35 = v34;
          v34[1] = (__int64)v35;
          v8 = *(__int64 ***)(v6 + 256);
          *v12 = v6 + 248;
          v12[1] = (__int64)v8;
          if ( *v8 != (__int64 *)(v6 + 248) )
            __fastfail(3u);
          *v8 = v12;
          *(_QWORD *)(v6 + 256) = v12;
          v12 = v34;
          ++*(_DWORD *)(v6 + 240);
          v10 = WPP_GLOBAL_Control;
        }
        else
        {
          v36 = 0;
          v8 = (__int64 **)(v12 + 12);
          do
          {
            if ( *v8 )
              break;
            ++v36;
            v8 += 10;
          }
          while ( v36 < 8 );
          if ( v36 == 8 )
          {
            if ( LOWORD(v10->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_q(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
                (_DWORD)v8,
                7,
                38,
                (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
                (char)v12);
            }
            *((_BYTE *)v12 + 16) = 1;
            --*(_DWORD *)(v6 + 20);
            v10 = WPP_GLOBAL_Control;
          }
          v12 = (__int64 *)*v12;
        }
      }
      if ( LOWORD(v10->DeviceType) )
      {
        LOBYTE(v8) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
          (_DWORD)v8,
          7,
          41,
          (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
          *(_DWORD *)(v6 + 164));
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v8) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
            (_DWORD)v8,
            7,
            42,
            (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
            *(_DWORD *)(v6 + 116));
          v10 = WPP_GLOBAL_Control;
        }
      }
      v13 = *(_DWORD *)(v6 + 52);
      v14 = *(__int64 **)(v6 + 144);
      while ( v14 != (__int64 *)(v6 + 144) )
      {
        if ( *(_DWORD *)(v6 + 116) <= v13 )
          break;
        if ( *((_BYTE *)v14 + 16) )
        {
          if ( LOWORD(v10->DeviceType) )
          {
            LOBYTE(v8) = 5;
            WPP_RECORDER_SF_q(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
              (_DWORD)v8,
              7,
              37,
              (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
              (char)v14);
          }
          v16 = 0;
          v17 = v14 + 9;
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
          v23 = (__int64 *)*v14;
          v24 = (__int64 **)v14[1];
          if ( *(__int64 **)(*v14 + 8) != v14 || *v24 != v14 )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = (__int64)v24;
          v8 = *(__int64 ***)(v6 + 256);
          *v14 = v6 + 248;
          v14[1] = (__int64)v8;
          if ( *v8 != (__int64 *)(v6 + 248) )
            __fastfail(3u);
          *v8 = v14;
          *(_QWORD *)(v6 + 256) = v14;
          v14 = v23;
          ++*(_DWORD *)(v6 + 240);
          v10 = WPP_GLOBAL_Control;
        }
        else
        {
          LODWORD(v8) = 0;
          v15 = v14 + 12;
          do
          {
            if ( *v15 )
              break;
            LODWORD(v8) = (_DWORD)v8 + 1;
            v15 += 10;
          }
          while ( !(_DWORD)v8 );
          if ( (_DWORD)v8 == 1 )
          {
            if ( LOWORD(v10->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_q(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
                (_DWORD)v8,
                7,
                38,
                (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
                (char)v14);
            }
            *((_BYTE *)v14 + 16) = 1;
            --*(_DWORD *)(v6 + 20);
            v10 = WPP_GLOBAL_Control;
          }
          v14 = (__int64 *)*v14;
        }
      }
      if ( LOWORD(v10->DeviceType) )
      {
        LOBYTE(v8) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
          (_DWORD)v8,
          7,
          43,
          (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
          *(_DWORD *)(v6 + 116));
      }
      if ( *(_QWORD *)(v6 + 248) != v6 + 248 )
        v7 = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 120), v9);
      if ( v7 )
        (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 3040))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          *(_QWORD *)(v6 + 232));
    }
  }
}
