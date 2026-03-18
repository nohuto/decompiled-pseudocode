/*
 * XREFs of ?SetD2DEffectProperties@CLinearTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180156A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
         (char *)this + 272,
         4);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Eu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           (char *)this + 276,
           4);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x33u);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             2LL,
             0LL,
             (char *)this + 280,
             4);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x38u);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
               a2,
               3LL,
               0LL,
               (char *)this + 284,
               4);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3Du);
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                 a2,
                 4LL,
                 0LL,
                 (char *)this + 288,
                 4);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x42u);
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 292,
                    4);
            v5 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x47u);
            }
            else
            {
              v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 296,
                      4);
              v5 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4Cu);
              }
              else
              {
                v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        (char *)this + 300,
                        4);
                v5 = v12;
                if ( v12 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x51u);
                }
                else
                {
                  v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          (char *)this + 304,
                          4);
                  v5 = v13;
                  if ( v13 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x56u);
                  }
                  else
                  {
                    v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                            a2,
                            9LL,
                            0LL,
                            (char *)this + 308,
                            4);
                    v5 = v14;
                    if ( v14 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x5Bu);
                    }
                    else
                    {
                      v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                              a2,
                              10LL,
                              0LL,
                              (char *)this + 312,
                              4);
                      v5 = v15;
                      if ( v15 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x60u);
                      }
                      else
                      {
                        v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                                a2,
                                11LL,
                                0LL,
                                (char *)this + 316,
                                4);
                        v5 = v16;
                        if ( v16 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x65u);
                        }
                        else
                        {
                          v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                                  a2,
                                  12LL,
                                  0LL,
                                  (char *)this + 320,
                                  4);
                          v5 = v17;
                          if ( v17 < 0 )
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x6Au);
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
  return v5;
}
