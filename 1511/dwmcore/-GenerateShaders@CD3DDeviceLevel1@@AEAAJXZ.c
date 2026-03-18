/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800237D0
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // r15
  _UNKNOWN **v17; // r12
  int v18; // eax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // r15
  int v24; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 96LL))(
         *((_QWORD *)this + 69),
         &unk_1801708D0,
         1400LL,
         0LL,
         (char *)this + 1056);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x23Fu);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
           *((_QWORD *)this + 69),
           &unk_180173C90,
           676LL,
           0LL,
           (char *)this + 1064);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x24Au);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
             *((_QWORD *)this + 69),
             &unk_1801735D0,
             916LL,
             0LL,
             (char *)this + 1072);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x24Bu);
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
               *((_QWORD *)this + 69),
               &unk_180172E50,
               976LL,
               0LL,
               (char *)this + 1080);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x24Cu);
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
                 *((_QWORD *)this + 69),
                 &unk_180173220,
                 932LL,
                 0LL,
                 (char *)this + 1104);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x24Du);
          }
          else
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
                   *((_QWORD *)this + 69),
                   &unk_180171D70,
                   1180LL,
                   0LL,
                   (char *)this + 1088);
            v3 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x24Eu);
            }
            else
            {
              v9 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
                     *((_QWORD *)this + 69),
                     &unk_180171890,
                     1240LL,
                     0LL,
                     (char *)this + 1096);
              v3 = v9;
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x24Fu);
              }
              else
              {
                v10 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69)
                                                                                         + 120LL))(
                        *((_QWORD *)this + 69),
                        &unk_180173970,
                        788LL,
                        0LL,
                        (char *)this + 1112);
                v3 = v10;
                if ( v10 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x251u);
                }
                else
                {
                  v11 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69)
                                                                                           + 120LL))(
                          *((_QWORD *)this + 69),
                          &unk_180172A50,
                          1024LL,
                          0LL,
                          (char *)this + 1120);
                  v3 = v11;
                  if ( v11 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x252u);
                  }
                  else
                  {
                    v12 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69)
                                                                                             + 120LL))(
                            *((_QWORD *)this + 69),
                            &unk_180172210,
                            1060LL,
                            0LL,
                            (char *)this + 1128);
                    v3 = v12;
                    if ( v12 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x253u);
                    }
                    else
                    {
                      v13 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69)
                                                                                               + 120LL))(
                              *((_QWORD *)this + 69),
                              &unk_180172640,
                              1040LL,
                              0LL,
                              (char *)this + 1152);
                      v3 = v13;
                      if ( v13 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x254u);
                      }
                      else
                      {
                        v14 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69)
                                                                                                 + 120LL))(
                                *((_QWORD *)this + 69),
                                &unk_180171380,
                                1288LL,
                                0LL,
                                (char *)this + 1136);
                        v3 = v14;
                        if ( v14 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x255u);
                        }
                        else
                        {
                          v15 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 69) + 120LL))(
                                  *((_QWORD *)this + 69),
                                  &unk_180170E50,
                                  1324LL,
                                  0LL,
                                  (char *)this + 1144);
                          v3 = v15;
                          if ( v15 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x256u);
                          }
                          else
                          {
                            v16 = 0LL;
                            v17 = &off_1801A05F0;
                            do
                            {
                              v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 69) + 88LL))(
                                      *((_QWORD *)this + 69),
                                      *(v17 - 2),
                                      *((unsigned int *)v17 - 2),
                                      *v17,
                                      *((unsigned int *)v17 + 2),
                                      (char *)this + 8 * v16 + 1160);
                              v3 = v18;
                              if ( v18 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x262u);
                                return v3;
                              }
                              v16 = (unsigned int)(v16 + 1);
                              v17 += 4;
                            }
                            while ( !(_DWORD)v16 );
                            v19 = 0LL;
                            do
                            {
                              v20 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 69) + 160LL))(
                                      *((_QWORD *)this + 69),
                                      &g_rgBlendModes[264 * (unsigned int)v19],
                                      (char *)this + 8 * v19 + 1168);
                              v3 = v20;
                              if ( v20 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x26Au);
                                return v3;
                              }
                              v19 = (unsigned int)(v19 + 1);
                            }
                            while ( (unsigned int)v19 < 0x18 );
                            v21 = 0LL;
                            do
                            {
                              v22 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 69) + 176LL))(
                                      *((_QWORD *)this + 69),
                                      &g_rgRasterizerModes[40 * v21],
                                      (char *)this + 8 * v21 + 1616);
                              v3 = v22;
                              if ( v22 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x272u);
                                return v3;
                              }
                              v21 = (unsigned int)(v21 + 1);
                            }
                            while ( !(_DWORD)v21 );
                            v23 = 0LL;
                            while ( 1 )
                            {
                              v24 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 69) + 168LL))(
                                      *((_QWORD *)this + 69),
                                      &g_rgDepthStencilModes[52 * (unsigned int)v23],
                                      (char *)this + 8 * v23 + 1624);
                              v3 = v24;
                              if ( v24 < 0 )
                                break;
                              v23 = (unsigned int)(v23 + 1);
                              if ( (unsigned int)v23 >= 4 )
                                return v3;
                            }
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x27Au);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
