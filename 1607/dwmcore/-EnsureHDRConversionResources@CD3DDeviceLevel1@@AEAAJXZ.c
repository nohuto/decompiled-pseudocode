/*
 * XREFs of ?EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F5B8
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F2F4 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureHDRConversionResources(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  _UNKNOWN **i; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+50h] [rbp-29h] BYREF
  __int64 v14; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-19h] BYREF
  const char *v16; // [rsp+70h] [rbp-9h] BYREF
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+84h] [rbp+Bh]
  int v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+8Ch] [rbp+13h]
  __int64 v23; // [rsp+90h] [rbp+17h] BYREF
  __int64 v24; // [rsp+98h] [rbp+1Fh]
  __int64 v25; // [rsp+A0h] [rbp+27h]

  v1 = 0;
  if ( *((int *)this + 169) >= 40960 )
  {
    v3 = *((_QWORD *)this + 71);
    v14 = 0LL;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v13 = 40960;
    v16 = "POSITION";
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v15[0] = 0LL;
    v15[1] = 0LL;
    v18 = 16;
    v4 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, char *))(*(_QWORD *)v3 + 96LL))(
           v3,
           &unk_1801AD490,
           628LL,
           0LL,
           (char *)this + 1248);
    v1 = v4;
    if ( v4 < 0 )
    {
      if ( IsOOM(v4) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x2C4u);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, const char **, __int64, void *, __int64, char *))(**((_QWORD **)this + 71)
                                                                                              + 88LL))(
             *((_QWORD *)this + 71),
             &v16,
             1LL,
             &unk_1801AD490,
             628LL,
             (char *)this + 1256);
      v1 = v5;
      if ( v5 < 0 )
      {
        if ( IsOOM(v5) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x2CBu);
      }
      else
      {
        v6 = 0;
        for ( i = &HDRConvertShaders::g_rgShaders; ; i += 2 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 71) + 120LL))(
                 *((_QWORD *)this + 71),
                 *i,
                 *((int *)i + 2),
                 0LL,
                 (char *)this + 8 * v6 + 1264);
          v1 = v8;
          if ( v8 < 0 )
            break;
          if ( ++v6 >= 0x12 )
          {
            v9 = *((_QWORD *)this + 71);
            LODWORD(v24) = 1;
            v23 = 0x100000030LL;
            v15[0] = &unk_1801AD728;
            v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, char *))(*(_QWORD *)v9 + 24LL))(
                    v9,
                    &v23,
                    v15,
                    (char *)this + 1408);
            v1 = v10;
            if ( v10 < 0 )
            {
              if ( IsOOM(v10) && IsCompBuild() )
                NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x2E6u);
            }
            else
            {
              v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64, int, GUID *, _QWORD, char *))(**((_QWORD **)this + 71) + 376LL))(
                      *((_QWORD *)this + 71),
                      1LL,
                      &v13,
                      1LL,
                      7,
                      &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                      0LL,
                      (char *)this + 1416);
              v1 = v11;
              if ( v11 < 0 )
              {
                if ( IsOOM(v11) && IsCompBuild() )
                  NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x2F3u);
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 72) + 1048LL))(
                  *((_QWORD *)this + 72),
                  *((_QWORD *)this + 177),
                  &v14);
                (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 72) + 136LL))(
                  *((_QWORD *)this + 72),
                  *((_QWORD *)this + 157));
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *, void *, int *))(**((_QWORD **)this + 72) + 144LL))(
                  *((_QWORD *)this + 72),
                  0LL,
                  1LL,
                  (char *)this + 1408,
                  &unk_1801AD7C0,
                  &`CBaseExpression::SetTracingCookie'::`2'::sc_defaultValue);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 72) + 88LL))(
                  *((_QWORD *)this + 72),
                  *((_QWORD *)this + 156),
                  0LL,
                  0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 72) + 344LL))(
                  *((_QWORD *)this + 72),
                  *((_QWORD *)this + 236));
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 72) + 280LL))(
                  *((_QWORD *)this + 72),
                  *((_QWORD *)this + 185),
                  0LL,
                  0xFFFFFFFFLL);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 72) + 288LL))(
                  *((_QWORD *)this + 72),
                  *((_QWORD *)this + 237),
                  0LL);
                (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 72) + 192LL))(
                  *((_QWORD *)this + 72),
                  4LL);
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 72) + 1048LL))(
                  *((_QWORD *)this + 72),
                  v14,
                  0LL);
                if ( v14 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
              }
            }
            return v1;
          }
        }
        if ( IsOOM(v8) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x2D6u);
      }
    }
  }
  return v1;
}
