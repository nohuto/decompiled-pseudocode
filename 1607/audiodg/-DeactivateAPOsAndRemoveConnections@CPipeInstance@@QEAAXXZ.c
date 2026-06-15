/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140008F20
 * Callers:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006600 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140030518 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(CPipeInstance *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  struct IAudioProcessor *v8; // r14
  unsigned __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  void *v13; // rbx
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  void *v17; // rbx
  void (*v18)(void); // rax
  void *v19; // rcx
  void *v20; // [rsp+80h] [rbp+8h] BYREF
  void *v21; // [rsp+88h] [rbp+10h]
  unsigned __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = *((_QWORD *)this + 18);
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v22) >= 0 )
      {
        v3 = *((_QWORD *)this + 3);
        while ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 16);
          v3 = *(_QWORD *)(v3 + 8);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(void **)(*(_QWORD *)(v4 + 32) + 40LL);
            v20 = v5;
            if ( v5 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
            (*(void (__fastcall **)(_QWORD, unsigned __int64, void *))(**((_QWORD **)this + 18) + 64LL))(
              *((_QWORD *)this + 18),
              v22,
              v5);
            if ( v5 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        v6 = (_QWORD *)*((_QWORD *)this + 8);
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = v6[2];
            v6 = (_QWORD *)*v6;
            v8 = (struct IAudioProcessor *)*((_QWORD *)this + 18);
            v9 = v22;
            *(_DWORD *)(v7 + 4) = 0;
            v10 = *(_DWORD *)(v7 + 16);
            if ( v10 )
            {
              if ( v10 == 1 )
                CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v7, v8, v9);
              goto LABEL_33;
            }
            v21 = 0LL;
            v20 = 0LL;
            v11 = *(_QWORD *)(v7 + 32);
            if ( !v11 )
              goto LABEL_24;
            v12 = *(_DWORD *)(v11 + 40);
            if ( v12 == 2 )
              break;
            if ( v12 == 1 || v12 == 3 )
            {
              if ( (****(int (__fastcall *****)(_QWORD, GUID *, void **))(v11 + 32))(
                     **(_QWORD **)(v11 + 32),
                     &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                     &v20) < 0 )
                goto LABEL_31;
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *))(*(_QWORD *)v8 + 136LL))(
                v8,
                v9,
                v20);
              v14 = v20;
              if ( v20 )
              {
                v20 = 0LL;
LABEL_23:
                (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
              }
            }
LABEL_24:
            v15 = *(_QWORD *)(v7 + 24);
            if ( !v15 )
              goto LABEL_31;
            v16 = *(_DWORD *)(v15 + 40);
            if ( v16 == 2 )
            {
              v17 = *(void **)(*(_QWORD *)(v15 + 32) + 40LL);
              v21 = v17;
              if ( v17 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *, _QWORD))(*(_QWORD *)v8 + 104LL))(
                v8,
                v9,
                v17,
                *(_QWORD *)(v7 + 8));
              if ( !v17 )
                goto LABEL_31;
              v21 = 0LL;
              v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
LABEL_30:
              v18();
              goto LABEL_31;
            }
            if ( v16 != 3 && v16 != 1 )
              goto LABEL_31;
            if ( (****(int (__fastcall *****)(_QWORD, GUID *, void **))(v15 + 32))(
                   **(_QWORD **)(v15 + 32),
                   &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                   &v20) < 0 )
              goto LABEL_31;
            (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *))(*(_QWORD *)v8 + 136LL))(
              v8,
              v9,
              v20);
            v19 = v20;
            if ( !v20 )
              goto LABEL_31;
            v20 = 0LL;
            v18 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
            if ( (char *)v18 != (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
              goto LABEL_30;
            ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v19);
LABEL_31:
            if ( v20 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_33:
            if ( !v6 )
              goto LABEL_34;
          }
          v13 = *(void **)(*(_QWORD *)(v11 + 32) + 40LL);
          v21 = v13;
          if ( v13 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
          (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *, _QWORD))(*(_QWORD *)v8 + 80LL))(
            v8,
            v9,
            v13,
            *(_QWORD *)(v7 + 8));
          v14 = v13;
          if ( !v13 )
            goto LABEL_24;
          v21 = 0LL;
          goto LABEL_23;
        }
LABEL_34:
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 40LL))(
               *((_QWORD *)this + 18),
               v22) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
