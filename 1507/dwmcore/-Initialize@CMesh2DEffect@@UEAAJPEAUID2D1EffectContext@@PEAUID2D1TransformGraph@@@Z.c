/*
 * XREFs of ?Initialize@CMesh2DEffect@@UEAAJPEAUID2D1EffectContext@@PEAUID2D1TransformGraph@@@Z @ 0x18015B2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMesh2DEffect::Initialize(
        CMesh2DEffect *this,
        struct ID2D1EffectContext *a2,
        struct ID2D1TransformGraph *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+10h]

  v18 = 0LL;
  *((_QWORD *)this + 17) = a2;
  (*(void (__fastcall **)(struct ID2D1EffectContext *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 17) + 64LL))(
         *((_QWORD *)this + 17),
         0LL,
         0LL,
         &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 40LL))(a3, (char *)this + 8);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v18);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64, char *, _QWORD))(*(_QWORD *)a3 + 64LL))(
               a3,
               v18,
               (char *)this + 8,
               0LL);
        v6 = v9;
        if ( v9 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 56LL))(
                  a3,
                  (char *)this + 8);
          v6 = v10;
          if ( v10 >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, _QWORD, __int64, _QWORD))(*(_QWORD *)a3 + 72LL))(
                    a3,
                    0LL,
                    v18,
                    0LL);
            v6 = v11;
            if ( v11 >= 0 )
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 88LL))(
                      *((_QWORD *)this + 17),
                      &GUID_Mesh2D_PS,
                      &unk_180176200,
                      884LL);
              v6 = v12;
              if ( v12 >= 0 )
              {
                v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 96LL))(
                        *((_QWORD *)this + 17),
                        &GUID_Mesh2D_VS,
                        &unk_1801765A0,
                        2312LL);
                v6 = v13;
                if ( v13 >= 0 )
                {
                  v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD))(**((_QWORD **)this + 16) + 80LL))(
                          *((_QWORD *)this + 16),
                          &GUID_Mesh2D_PS,
                          0LL);
                  v6 = v14;
                  if ( v14 >= 0 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
                      *((_QWORD *)this + 16),
                      3LL);
                    v15 = *((_QWORD *)this + 16);
                    v19 = 21LL;
                    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 24LL))(v15, 0LL, 21LL);
                    v6 = v16;
                    if ( v16 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xABu);
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x9Du);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x9Au);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x94u);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8Du);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x8Cu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Bu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x8Au);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x89u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x87u);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v6;
}
