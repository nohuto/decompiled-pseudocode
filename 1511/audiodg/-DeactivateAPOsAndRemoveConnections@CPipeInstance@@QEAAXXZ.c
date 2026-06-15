/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D620
 * Callers:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006F20 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000FFE0 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x1400335E0 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rdi
  struct IAudioProcessor *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct IAudioProcessor *v6; // r12
  __int64 v7; // rbp
  struct IAudioProcessor *v8; // r14
  unsigned __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h]
  unsigned __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, this, -2LL);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = this[18];
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(this[18], &v21) >= 0 )
      {
        v3 = this[3];
        while ( v3 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v3 = (struct IAudioProcessor *)*((_QWORD *)v3 + 1);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
            v19 = v5;
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)this[18] + 64LL))(
              this[18],
              v21,
              v5);
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        v6 = this[8];
        while ( v6 )
        {
          v7 = *((_QWORD *)v6 + 2);
          v6 = *(struct IAudioProcessor **)v6;
          v8 = this[18];
          v9 = v21;
          *(_DWORD *)(v7 + 4) = 0;
          v10 = *(_DWORD *)(v7 + 16);
          if ( v10 )
          {
            if ( v10 == 1 )
              CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v7, v8, v9);
            continue;
          }
          v20 = 0LL;
          v19 = 0LL;
          v11 = *(_QWORD *)(v7 + 32);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 40);
            if ( v12 == 2 )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 40LL);
              v20 = v13;
              if ( v13 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)v8 + 80LL))(
                v8,
                v9,
                v13,
                *(_QWORD *)(v7 + 8));
              v14 = v13;
              if ( v13 )
              {
                v20 = 0LL;
LABEL_28:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
              }
            }
            else if ( v12 == 1 || v12 == 3 )
            {
              if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v11 + 32))(
                     **(_QWORD **)(v11 + 32),
                     &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                     &v19) < 0 )
                goto LABEL_41;
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)v8 + 136LL))(
                v8,
                v9,
                v19);
              v14 = v19;
              if ( v19 )
              {
                v19 = 0LL;
                goto LABEL_28;
              }
            }
          }
          v15 = *(_QWORD *)(v7 + 24);
          if ( v15 )
          {
            v16 = *(_DWORD *)(v15 + 40);
            if ( v16 == 2 )
            {
              v17 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 40LL);
              v20 = v17;
              if ( v17 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)v8 + 104LL))(
                v8,
                v9,
                v17,
                *(_QWORD *)(v7 + 8));
              v18 = v17;
              if ( !v17 )
                goto LABEL_41;
              v20 = 0LL;
            }
            else
            {
              if ( v16 != 1 && v16 != 3 )
                goto LABEL_41;
              if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v15 + 32))(
                     **(_QWORD **)(v15 + 32),
                     &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                     &v19) < 0 )
                goto LABEL_41;
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)v8 + 136LL))(
                v8,
                v9,
                v19);
              v18 = v19;
              if ( !v19 )
                goto LABEL_41;
              v19 = 0LL;
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
LABEL_41:
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64))(*(_QWORD *)this[18] + 40LL))(
               this[18],
               v21) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
