/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180087C68
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800883A0 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CheckConnectorSupportForPeriodicity(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  int v7; // ebx
  void (*v8)(void); // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ecx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v15; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  int v18; // [rsp+88h] [rbp+28h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  int v20; // [rsp+98h] [rbp+38h] BYREF

  v14[1] = -2LL;
  v14[0] = 0LL;
  v15 = 65;
  v16 = a4;
  v17 = a3;
  v19 = 0LL;
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
           1LL,
           &v15,
           &v19);
    if ( v7 < 0 )
    {
      v9 = v19;
      goto LABEL_7;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
           1LL,
           &v15,
           &v19);
    if ( v7 < 0 )
    {
      if ( !v19 )
        goto LABEL_32;
      v8 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
      goto LABEL_5;
    }
  }
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v19)(
         v19,
         &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
         v14);
  v9 = v19;
  if ( v7 < 0 )
    goto LABEL_7;
  if ( v19 )
    (*(void (**)(void))(*(_QWORD *)v19 + 16LL))();
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v14[0] + 40LL))(v14[0], &v18);
  if ( v7 < 0 )
    goto LABEL_32;
  if ( !v18 )
  {
    v10 = 100000LL;
LABEL_29:
    v11 = a5;
    if ( a5 < v10 )
      v11 = v10;
    *a6 = (int)((double)*(int *)(a3 + 48) * (double)v11 / 10000000.0 + 0.5);
    goto LABEL_32;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v14[0] + 32LL))(v14[0], &v20);
  if ( v7 < 0 )
    goto LABEL_32;
  if ( !v20 )
  {
    v10 = 20000LL;
    goto LABEL_29;
  }
  v13 = 0LL;
  v19 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v14[0])(
         v14[0],
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v19);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v14[0])(
           v14[0],
           &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
           &v13);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 0x40000LL);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v14[0] + 24LL))(v14[0], a5, 0LL);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -2005139372 )
          v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v13 + 32LL))(v13, a6);
      }
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v9 = v13;
LABEL_7:
  if ( v9 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
LABEL_5:
    v8();
  }
LABEL_32:
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  return (unsigned int)v7;
}
