/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800232E0
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180023610 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     Template_dsdp @ 0x180022E10 (Template_dsdp.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _QWORD *v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v17[20]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+74h] [rbp-Ch]
  int v20; // [rsp+90h] [rbp+10h] BYREF
  int v21; // [rsp+A8h] [rbp+28h] BYREF

  v16[1] = -2LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16[0] = 0LL;
  memset(v17, 0, sizeof(v17));
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
        LOBYTE(v5) = *a2 == 1;
        v21 = v5;
        v6 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v15);
        v8 = v6;
        if ( v6 >= 0 )
        {
          v13 = v16;
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(
                 v15,
                 &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                 1LL);
          v8 = v9;
          if ( v9 >= 0 )
          {
            memset_0(v17, 0, 0x20uLL);
            *(GUID *)v17 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000;
            *(_DWORD *)&v17[16] = 57;
            LODWORD(v18) = 2;
            HIDWORD(v18) = *((unsigned __int16 *)this + 246);
            v20 = 0;
            LODWORD(v13) = 4;
            v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, int *, _QWORD *, int *))(*(_QWORD *)v16[0] + 24LL))(
                    v16[0],
                    v17,
                    32LL,
                    &v21,
                    v13,
                    &v20);
            v8 = v11;
            if ( v11 >= 0 )
            {
LABEL_18:
              v5 = v16[0];
              v4 = v15;
              goto LABEL_19;
            }
            if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
            {
              LODWORD(v14) = 116;
              Template_dsdp(
                v12,
                &EUVolumePolicy_Error_Propagation,
                v11,
                "CDriverListener::HandleShellWarningAccepted",
                v14,
                this);
            }
          }
          else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
          {
            LODWORD(v13) = 103;
            Template_dsdp(
              v10,
              &EUVolumePolicy_Error_Propagation,
              v9,
              "CDriverListener::HandleShellWarningAccepted",
              v13,
              this);
          }
        }
        else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        {
          Template_dsdp(
            v7,
            &EUVolumePolicy_Error_Propagation,
            v6,
            "CDriverListener::HandleShellWarningAccepted",
            101,
            this);
        }
        if ( v8 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_92b9b890caad320d1476e881fb77b9be_Traceguids, v8);
        }
        goto LABEL_18;
      }
    }
  }
LABEL_19:
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = v15;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 16LL))(v4, a2);
}
