/*
 * XREFs of ?SetD2DEffectProperties@CTableTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180113EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CTableTransferEffect::SetD2DEffectProperties(CTableTransferEffect *this, struct ID2D1Effect *a2)
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

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         *((_QWORD *)this + 25),
         4 * *((_DWORD *)this + 56));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           2LL,
           0LL,
           *((_QWORD *)this + 30),
           4 * *((_DWORD *)this + 66));
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             4LL,
             0LL,
             *((_QWORD *)this + 35),
             4 * *((_DWORD *)this + 76));
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
               a2,
               6LL,
               0LL,
               *((_QWORD *)this + 40),
               4 * *((_DWORD *)this + 86));
        v5 = v8;
        if ( v8 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                 a2,
                 1LL,
                 0LL,
                 (char *)this + 176,
                 4);
          v5 = v9;
          if ( v9 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    3LL,
                    0LL,
                    (char *)this + 180,
                    4);
            v5 = v10;
            if ( v10 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      5LL,
                      0LL,
                      (char *)this + 184,
                      4);
              v5 = v11;
              if ( v11 >= 0 )
              {
                v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        (char *)this + 188,
                        4);
                v5 = v12;
                if ( v12 >= 0 )
                {
                  v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          (char *)this + 192,
                          4);
                  v5 = v13;
                  if ( v13 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x65u);
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x60u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x5Bu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x56u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x51u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Cu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x46u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x40u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3Au);
  }
  return v5;
}
