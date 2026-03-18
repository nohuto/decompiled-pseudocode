/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x18008FE28
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18009039C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  __int64 v25; // r15
  int v26; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 96LL))(
         *((_QWORD *)this + 68),
         &unk_180164680,
         1400LL,
         0LL,
         (char *)this + 1088);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x239u);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
           *((_QWORD *)this + 68),
           &unk_1801660A0,
           676LL,
           0LL,
           (char *)this + 1096);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x244u);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
             *((_QWORD *)this + 68),
             &unk_180165D00,
             916LL,
             0LL,
             (char *)this + 1104);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x245u);
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
               *((_QWORD *)this + 68),
               &unk_180165580,
               976LL,
               0LL,
               (char *)this + 1112);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x246u);
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
                 *((_QWORD *)this + 68),
                 &unk_180165950,
                 932LL,
                 0LL,
                 (char *)this + 1136);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x247u);
          }
          else
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
                   *((_QWORD *)this + 68),
                   &unk_1801650E0,
                   1180LL,
                   0LL,
                   (char *)this + 1120);
            v3 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x248u);
            }
            else
            {
              v9 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
                     *((_QWORD *)this + 68),
                     &unk_180164C00,
                     1240LL,
                     0LL,
                     (char *)this + 1128);
              v3 = v9;
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x249u);
              }
              else
              {
                v10 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68)
                                                                                         + 120LL))(
                        *((_QWORD *)this + 68),
                        &unk_180161F60,
                        788LL,
                        0LL,
                        (char *)this + 1144);
                v3 = v10;
                if ( v10 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x24Bu);
                }
                else
                {
                  v11 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68)
                                                                                           + 120LL))(
                          *((_QWORD *)this + 68),
                          &unk_180161B60,
                          1024LL,
                          0LL,
                          (char *)this + 1152);
                  v3 = v11;
                  if ( v11 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x24Cu);
                  }
                  else
                  {
                    v12 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68)
                                                                                             + 120LL))(
                            *((_QWORD *)this + 68),
                            &unk_180161730,
                            1060LL,
                            0LL,
                            (char *)this + 1160);
                    v3 = v12;
                    if ( v12 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x24Du);
                    }
                    else
                    {
                      v13 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68)
                                                                                               + 120LL))(
                              *((_QWORD *)this + 68),
                              &unk_180161320,
                              1040LL,
                              0LL,
                              (char *)this + 1184);
                      v3 = v13;
                      if ( v13 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x24Eu);
                      }
                      else
                      {
                        v14 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68)
                                                                                                 + 120LL))(
                                *((_QWORD *)this + 68),
                                &unk_180160E10,
                                1288LL,
                                0LL,
                                (char *)this + 1168);
                        v3 = v14;
                        if ( v14 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x24Fu);
                        }
                        else
                        {
                          v15 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 68) + 120LL))(
                                  *((_QWORD *)this + 68),
                                  &unk_1801608E0,
                                  1324LL,
                                  0LL,
                                  (char *)this + 1176);
                          v3 = v15;
                          if ( v15 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x250u);
                          }
                          else
                          {
                            v16 = 0LL;
                            v17 = &off_1801929D0;
                            do
                            {
                              v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 68) + 88LL))(
                                      *((_QWORD *)this + 68),
                                      *(v17 - 2),
                                      *((unsigned int *)v17 - 2),
                                      *v17,
                                      *((unsigned int *)v17 + 2),
                                      (char *)this + 8 * v16 + 1192);
                              v3 = v18;
                              if ( v18 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x25Cu);
                                return v3;
                              }
                              v16 = (unsigned int)(v16 + 1);
                              v17 += 4;
                            }
                            while ( !(_DWORD)v16 );
                            v19 = 0LL;
                            do
                            {
                              v20 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 68) + 184LL))(
                                      *((_QWORD *)this + 68),
                                      &g_rgSamplerModes[52 * (unsigned int)v19],
                                      (char *)this + 8 * v19 + 1392);
                              v3 = v20;
                              if ( v20 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x264u);
                                return v3;
                              }
                              v19 = (unsigned int)(v19 + 1);
                            }
                            while ( (unsigned int)v19 < 0x12 );
                            v21 = 0LL;
                            do
                            {
                              v22 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 68) + 160LL))(
                                      *((_QWORD *)this + 68),
                                      &g_rgBlendModes[264 * (unsigned int)v21],
                                      (char *)this + 8 * v21 + 1200);
                              v3 = v22;
                              if ( v22 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x26Cu);
                                return v3;
                              }
                              v21 = (unsigned int)(v21 + 1);
                            }
                            while ( (unsigned int)v21 < 0x18 );
                            v23 = 0LL;
                            do
                            {
                              v24 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 68) + 176LL))(
                                      *((_QWORD *)this + 68),
                                      &g_rgRasterizerModes[40 * v23],
                                      (char *)this + 8 * v23 + 1536);
                              v3 = v24;
                              if ( v24 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x274u);
                                return v3;
                              }
                              v23 = (unsigned int)(v23 + 1);
                            }
                            while ( !(_DWORD)v23 );
                            v25 = 0LL;
                            while ( 1 )
                            {
                              v26 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 68) + 168LL))(
                                      *((_QWORD *)this + 68),
                                      &g_rgDepthStencilModes[52 * (unsigned int)v25],
                                      (char *)this + 8 * v25 + 1544);
                              v3 = v26;
                              if ( v26 < 0 )
                                break;
                              v25 = (unsigned int)(v25 + 1);
                              if ( (unsigned int)v25 >= 4 )
                                return v3;
                            }
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x27Cu);
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
