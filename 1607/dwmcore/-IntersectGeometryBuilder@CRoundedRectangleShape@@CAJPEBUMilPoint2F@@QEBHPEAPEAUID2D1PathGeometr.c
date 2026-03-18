/*
 * XREFs of ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x18018ACC0
 * Callers:
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x18018AAA8 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::IntersectGeometryBuilder(
        const struct MilPoint2F *a1,
        const int *const a2,
        struct ID2D1PathGeometry **a3,
        char a4)
{
  __int64 v6; // rax
  unsigned int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  __int64 v9; // rax
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  __int64 v12; // rax
  unsigned int v13; // xmm0_4
  unsigned int v14; // xmm1_4
  __int64 v15; // rax
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  __int64 v18; // rax
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rax
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  __int64 v24; // rax
  int v25; // xmm1_4
  int D2DFactoryNoRef; // eax
  unsigned int v27; // ebx
  struct CD2DFactory *v28; // rsi
  int v29; // eax
  struct ID2D1PathGeometry *v30; // rax
  unsigned int v32; // [rsp+20h] [rbp-69h]
  __int64 v33; // [rsp+40h] [rbp-49h] BYREF
  struct ID2D1PathGeometry *v34; // [rsp+48h] [rbp-41h] BYREF
  struct ID2D1PathGeometry *v35; // [rsp+50h] [rbp-39h] BYREF
  __int64 v36; // [rsp+58h] [rbp-31h] BYREF
  struct CD2DFactory *v37; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-21h]
  unsigned __int64 v39; // [rsp+70h] [rbp-19h]
  unsigned __int64 v40; // [rsp+78h] [rbp-11h]
  unsigned __int64 v41; // [rsp+80h] [rbp-9h]
  unsigned __int64 v42; // [rsp+88h] [rbp-1h]
  unsigned __int64 v43; // [rsp+90h] [rbp+7h]
  __int64 v44; // [rsp+98h] [rbp+Fh]
  __m128d v45; // [rsp+A0h] [rbp+17h] BYREF
  unsigned __int64 v46; // [rsp+B0h] [rbp+27h]

  v34 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v6 = *a2;
  v37 = 0LL;
  v7 = *((_DWORD *)a1 + 2 * v6);
  v8 = *((_DWORD *)a1 + 2 * v6 + 1);
  v9 = a2[1];
  v38 = __PAIR64__(v8, v7);
  v10 = *((_DWORD *)a1 + 2 * v9);
  v11 = *((_DWORD *)a1 + 2 * v9 + 1);
  v12 = a2[2];
  v41 = __PAIR64__(v11, v10);
  v13 = *((_DWORD *)a1 + 2 * v12);
  v14 = *((_DWORD *)a1 + 2 * v12 + 1);
  v15 = a2[3];
  v39 = __PAIR64__(v14, v13);
  v16 = *((_DWORD *)a1 + 2 * v15);
  v17 = *((_DWORD *)a1 + 2 * v15 + 1);
  v18 = a2[4];
  v40 = __PAIR64__(v17, v16);
  v19 = *((_DWORD *)a1 + 2 * v18);
  v20 = *((_DWORD *)a1 + 2 * v18 + 1);
  v21 = a2[5];
  v42 = __PAIR64__(v20, v19);
  v22 = *((_DWORD *)a1 + 2 * v21);
  v23 = *((_DWORD *)a1 + 2 * v21 + 1);
  v24 = a2[6];
  v43 = __PAIR64__(v23, v22);
  v25 = *((_DWORD *)a1 + 2 * v24 + 1);
  LODWORD(v44) = *((_DWORD *)a1 + 2 * v24);
  HIDWORD(v44) = v25;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v37);
  v27 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v32 = 325;
    goto LABEL_22;
  }
  v28 = v37;
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v37 + 3) + 80LL))(
                      *((_QWORD *)v37 + 3),
                      &v34);
  v27 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v32 = 326;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v32);
    goto LABEL_23;
  }
  v29 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v34 + 136LL))(v34, &v33);
  v27 = v29;
  if ( v29 >= 0 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v33 + 40LL))(v33, v38, 0LL);
    v45 = _mm_unpacklo_pd((__m128d)v41, (__m128d)v39);
    v46 = v40;
    (*(void (__fastcall **)(__int64, __m128d *))(*(_QWORD *)v33 + 88LL))(v33, &v45);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 80LL))(v33, v42);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 80LL))(v33, v43);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 80LL))(v33, v44);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 64LL))(v33, 1LL);
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 72LL))(v33);
    v27 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v32 = 337;
    }
    else
    {
      if ( a4 )
      {
        *a3 = v34;
        goto LABEL_25;
      }
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v28 + 3) + 80LL))(
                          *((_QWORD *)v28 + 3),
                          &v35);
      v27 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        v32 = 349;
      }
      else
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v35 + 136LL))(
                            v35,
                            &v36);
        v27 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef < 0 )
        {
          v32 = 350;
        }
        else
        {
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry *, __int64))(*(_QWORD *)*a3 + 88LL))(
                              *a3,
                              v34,
                              1LL);
          v27 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v32 = 359;
          }
          else
          {
            D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 72LL))(v36);
            v27 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef >= 0 )
            {
              if ( *a3 )
              {
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
                *a3 = 0LL;
              }
              v30 = v35;
              v35 = 0LL;
              *a3 = v30;
              goto LABEL_23;
            }
            v32 = 361;
          }
        }
      }
    }
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x147u);
LABEL_23:
  if ( !v34 )
    goto LABEL_26;
  (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_25:
  v34 = 0LL;
LABEL_26:
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  if ( v35 )
  {
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v35 + 16LL))(v35);
    v35 = 0LL;
  }
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  return v27;
}
