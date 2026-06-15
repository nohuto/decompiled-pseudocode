/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x1800A52B0
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAI666@Z @ 0x1800A5900 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  int v7; // esi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  int v10; // ecx
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]
  int v17; // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  int v19; // [rsp+A8h] [rbp+48h] BYREF

  v13[1] = -2LL;
  v13[0] = 0LL;
  v14 = 65;
  v15 = a4;
  v16 = a3;
  v18 = 0LL;
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
           1LL,
           &v14,
           &v18);
    if ( v7 < 0 )
    {
      v8 = v18;
LABEL_6:
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      goto LABEL_31;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
           1LL,
           &v14,
           &v18);
    if ( v7 < 0 )
    {
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_31;
    }
  }
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v18)(
         v18,
         &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
         v13);
  v8 = v18;
  if ( v7 < 0 )
    goto LABEL_6;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v13[0] + 40LL))(v13[0], &v17);
  if ( v7 >= 0 )
  {
    if ( v17 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v13[0] + 32LL))(v13[0], &v19);
      if ( v7 < 0 )
        goto LABEL_31;
      if ( v19 )
      {
        v12 = 0LL;
        v18 = 0LL;
        v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v13[0])(
               v13[0],
               &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
               &v18);
        if ( v7 >= 0 )
        {
          v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v13[0])(
                 v13[0],
                 &GUID_88db6d4d_9bf4_43e4_93ef_3a623060a0b4,
                 &v12);
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, 0x40000LL);
            if ( v7 >= 0 )
            {
              v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v13[0] + 24LL))(
                     v13[0],
                     a5,
                     0LL);
              if ( (int)(v7 + 0x80000000) < 0 || v7 == -2005139372 )
                v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 32LL))(v12, a6);
            }
          }
        }
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v8 = v12;
        goto LABEL_6;
      }
      v9 = 20000LL;
    }
    else
    {
      v9 = 100000LL;
    }
    v10 = a5;
    if ( a5 < v9 )
      v10 = v9;
    *a6 = (int)((double)*(int *)(a3 + 48) * (double)v10 / 10000000.0 + 0.5);
  }
LABEL_31:
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  return (unsigned int)v7;
}
