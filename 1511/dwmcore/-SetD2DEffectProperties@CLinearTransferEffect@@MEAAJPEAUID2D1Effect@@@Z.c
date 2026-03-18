/*
 * XREFs of ?SetD2DEffectProperties@CLinearTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180134330
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLinearTransferEffect::SetD2DEffectProperties(CLinearTransferEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
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
  int v16; // eax
  int v17; // eax

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 192,
         4);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           (char *)this + 196,
           4);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             2LL,
             0LL,
             (char *)this + 200,
             4);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
               a2,
               3LL,
               0LL,
               (char *)this + 204,
               4);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                 a2,
                 4LL,
                 0LL,
                 (char *)this + 208,
                 4);
          v5 = v9;
          if ( v9 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 212,
                    4);
            v5 = v10;
            if ( v10 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 216,
                      4);
              v5 = v11;
              if ( v11 >= 0 )
              {
                v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        (char *)this + 220,
                        4);
                v5 = v12;
                if ( v12 >= 0 )
                {
                  v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          (char *)this + 224,
                          4);
                  v5 = v13;
                  if ( v13 >= 0 )
                  {
                    v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                            a2,
                            9LL,
                            0LL,
                            (char *)this + 228,
                            4);
                    v5 = v14;
                    if ( v14 >= 0 )
                    {
                      v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                              a2,
                              10LL,
                              0LL,
                              (char *)this + 232,
                              4);
                      v5 = v15;
                      if ( v15 >= 0 )
                      {
                        v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                                a2,
                                11LL,
                                0LL,
                                (char *)this + 236,
                                4);
                        v5 = v16;
                        if ( v16 >= 0 )
                        {
                          v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                                  a2,
                                  12LL,
                                  0LL,
                                  (char *)this + 240,
                                  4);
                          v5 = v17;
                          if ( v17 < 0 )
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x6Au);
                        }
                        else
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x65u);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x60u);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x5Bu);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x56u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x51u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4Cu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x47u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x42u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x38u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x33u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Eu);
  }
  return v5;
}
