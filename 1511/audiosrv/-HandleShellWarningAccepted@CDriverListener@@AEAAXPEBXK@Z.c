/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800A8B80
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800A8F10 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     Template_dsdp @ 0x1800A8880 (Template_dsdp.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // [rsp+20h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v17[20]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+90h] [rbp+20h] BYREF
  int v21; // [rsp+A8h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16[0] = 0LL;
  memset(v17, 0, sizeof(v17));
  v6 = 0;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        LOBYTE(v6) = *a2 == 1;
        v21 = v6;
        v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
               *(_QWORD *)&g_DeviceEnumerator,
               (char *)this + 12,
               &v15);
        v9 = v7;
        if ( v7 >= 0 )
        {
          v14 = v16;
          v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(
                  v15,
                  &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                  1LL);
          v9 = v10;
          if ( v10 >= 0 )
          {
            memset_0(v17, 0, 0x20uLL);
            *(GUID *)v17 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000;
            *(_DWORD *)&v17[16] = 57;
            LODWORD(v18) = 2;
            HIDWORD(v18) = *((unsigned __int16 *)this + 246);
            v20 = 0;
            LODWORD(v14) = 4;
            v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, int *, _QWORD *, int *))(*(_QWORD *)v16[0] + 24LL))(
                    v16[0],
                    v17,
                    32LL,
                    &v21,
                    v14,
                    &v20);
            v9 = v12;
            if ( v12 >= 0 )
            {
LABEL_18:
              v5 = v16[0];
              v4 = v15;
              goto LABEL_19;
            }
            if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
              Template_dsdp(
                v13,
                &EUVolumePolicy_Error_Propagation,
                v12,
                "CDriverListener::HandleShellWarningAccepted",
                116,
                (char)this);
          }
          else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
          {
            Template_dsdp(
              v11,
              &EUVolumePolicy_Error_Propagation,
              v10,
              "CDriverListener::HandleShellWarningAccepted",
              103,
              (char)this);
          }
        }
        else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        {
          Template_dsdp(
            v8,
            &EUVolumePolicy_Error_Propagation,
            v7,
            "CDriverListener::HandleShellWarningAccepted",
            101,
            (char)this);
        }
        if ( v9 < 0
          && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xBu,
            (__int64)&WPP_285b9717bd5038fe9ea54162e61ed701_Traceguids,
            v9);
        }
        goto LABEL_18;
      }
    }
  }
LABEL_19:
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 16LL))(v5, a2);
    v4 = v15;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 16LL))(v4, a2);
}
