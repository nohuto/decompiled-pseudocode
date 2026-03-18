/*
 * XREFs of ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x180173D50
 * Callers:
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@0II2@Z @ 0x180175630 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureVideoProcessor(
        CD3DDeviceLevel1 *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // rsi
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  int v9; // edi
  _QWORD *v10; // r14
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v27; // [rsp+30h] [rbp-48h]
  _DWORD v28[10]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+E0h] [rbp+68h]

  v5 = (_QWORD *)((char *)this + 608);
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !*((_QWORD *)this + 76)
    || a2 < *((_DWORD *)this + 154)
    || a3 < *((_DWORD *)this + 155)
    || a4 < *((_DWORD *)this + 156)
    || a5 < *((_DWORD *)this + 157) )
  {
    memset_0(v28, 0, sizeof(v28));
    v10 = (_QWORD *)((char *)this + 584);
    if ( *((_QWORD *)this + 73)
      || (v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 71))(
                  *((_QWORD *)this + 71),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  (char *)this + 584),
          v9 = v11,
          v11 >= 0) )
    {
      if ( *((_QWORD *)this + 74)
        || (v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 72))(
                    *((_QWORD *)this + 72),
                    &GUID_a7f026da_a5f8_4487_a564_15e34357651e),
            v9 = v12,
            v12 >= 0) )
      {
        v13 = (_QWORD *)((char *)this + 600);
        v14 = *((_QWORD *)this + 75);
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *v13 = 0LL;
        }
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        v15 = a4;
        v16 = a5;
        if ( v7 <= *((_DWORD *)this + 154) )
          v7 = *((_DWORD *)this + 154);
        v28[0] = 0;
        v17 = *((_DWORD *)this + 155);
        v28[3] = v7;
        if ( v6 <= v17 )
          v6 = v17;
        v28[9] = 0;
        v18 = *((_DWORD *)this + 156);
        v28[4] = v6;
        if ( a4 <= v18 )
          v15 = v18;
        v19 = *((_DWORD *)this + 157);
        v28[7] = v15;
        v27 = v15;
        v20 = *v10;
        if ( a5 <= v19 )
          v16 = v19;
        v28[8] = v16;
        v28[1] = 1;
        v28[2] = 1;
        v28[5] = 1;
        v28[6] = 1;
        v29 = v16;
        v21 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v20 + 80LL))(
                v20,
                v28,
                (char *)this + 600);
        v9 = v21;
        if ( v21 < 0 )
        {
          if ( IsOOM(v21) && IsCompBuild() )
            NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAB2u);
        }
        else
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)*v10 + 32LL))(
                  *v10,
                  *v13,
                  0LL,
                  v5);
          v9 = v22;
          if ( v22 < 0 )
          {
            if ( IsOOM(v22) && IsCompBuild() )
              NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAB6u);
          }
          else
          {
            *((_DWORD *)this + 156) = v27;
            *((_DWORD *)this + 157) = v29;
            *((_DWORD *)this + 154) = v7;
            *((_DWORD *)this + 155) = v6;
          }
        }
      }
      else
      {
        if ( IsOOM(v12) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA9Bu);
      }
    }
    else
    {
      if ( IsOOM(v11) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA96u);
    }
    if ( v9 < 0 )
    {
      if ( *v5 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
        *v5 = 0LL;
      }
      v23 = *((_QWORD *)this + 75);
      if ( v23 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        *((_QWORD *)this + 75) = 0LL;
      }
      v24 = *((_QWORD *)this + 74);
      if ( v24 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        *((_QWORD *)this + 74) = 0LL;
      }
      if ( *v10 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 16LL))(*v10);
        *v10 = 0LL;
      }
      *((_QWORD *)this + 77) = 0LL;
      *((_QWORD *)this + 78) = 0LL;
    }
  }
  return (unsigned int)v9;
}
