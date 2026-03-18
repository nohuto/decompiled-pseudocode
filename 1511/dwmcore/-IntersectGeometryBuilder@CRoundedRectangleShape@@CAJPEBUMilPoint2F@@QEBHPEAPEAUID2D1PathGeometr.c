/*
 * XREFs of ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1801599D8
 * Callers:
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x1801597A0 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180071954 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  unsigned int v27; // edi
  struct CD2DFactory *v28; // r14
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct ID2D1PathGeometry *v36; // rax
  __int64 v38; // [rsp+30h] [rbp-49h] BYREF
  struct ID2D1PathGeometry *v39; // [rsp+38h] [rbp-41h] BYREF
  struct ID2D1PathGeometry *v40; // [rsp+40h] [rbp-39h] BYREF
  __int64 v41; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-29h]
  unsigned __int64 v43; // [rsp+58h] [rbp-21h]
  unsigned __int64 v44; // [rsp+60h] [rbp-19h]
  struct CD2DFactory *v45; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-9h]
  unsigned __int64 v47; // [rsp+78h] [rbp-1h]
  __int64 v48; // [rsp+80h] [rbp+7h]
  unsigned __int64 v49; // [rsp+88h] [rbp+Fh]
  __m128d v50; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp+27h]

  v39 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v6 = *a2;
  v45 = 0LL;
  v7 = *((_DWORD *)a1 + 2 * v6);
  v8 = *((_DWORD *)a1 + 2 * v6 + 1);
  v9 = a2[1];
  v47 = __PAIR64__(v8, v7);
  v10 = *((_DWORD *)a1 + 2 * v9);
  v11 = *((_DWORD *)a1 + 2 * v9 + 1);
  v12 = a2[2];
  v43 = __PAIR64__(v11, v10);
  v13 = *((_DWORD *)a1 + 2 * v12);
  v14 = *((_DWORD *)a1 + 2 * v12 + 1);
  v15 = a2[3];
  v42 = __PAIR64__(v14, v13);
  v16 = *((_DWORD *)a1 + 2 * v15);
  v17 = *((_DWORD *)a1 + 2 * v15 + 1);
  v18 = a2[4];
  v49 = __PAIR64__(v17, v16);
  v19 = *((_DWORD *)a1 + 2 * v18);
  v20 = *((_DWORD *)a1 + 2 * v18 + 1);
  v21 = a2[5];
  v44 = __PAIR64__(v20, v19);
  v22 = *((_DWORD *)a1 + 2 * v21);
  v23 = *((_DWORD *)a1 + 2 * v21 + 1);
  v24 = a2[6];
  v46 = __PAIR64__(v23, v22);
  v25 = *((_DWORD *)a1 + 2 * v24 + 1);
  LODWORD(v48) = *((_DWORD *)a1 + 2 * v24);
  HIDWORD(v48) = v25;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v45);
  v27 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    v28 = v45;
    v29 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v45 + 3) + 80LL))(
            *((_QWORD *)v45 + 3),
            &v39);
    v27 = v29;
    if ( v29 >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v39 + 136LL))(v39, &v38);
      v27 = v30;
      if ( v30 >= 0 )
      {
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v38 + 40LL))(v38, v47, 0LL);
        v50 = _mm_unpacklo_pd((__m128d)v43, (__m128d)v42);
        v51 = v49;
        (*(void (__fastcall **)(__int64, __m128d *))(*(_QWORD *)v38 + 88LL))(v38, &v50);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v38 + 80LL))(v38, v44);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v38 + 80LL))(v38, v46);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 80LL))(v38, v48);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 64LL))(v38, 1LL);
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 72LL))(v38);
        v27 = v31;
        if ( v31 >= 0 )
        {
          if ( a4 )
          {
            *a3 = v39;
            goto LABEL_25;
          }
          v32 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v28 + 3) + 80LL))(
                  *((_QWORD *)v28 + 3),
                  &v40);
          v27 = v32;
          if ( v32 >= 0 )
          {
            v33 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v40 + 136LL))(v40, &v41);
            v27 = v33;
            if ( v33 >= 0 )
            {
              v34 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry *, __int64))(*(_QWORD *)*a3 + 88LL))(
                      *a3,
                      v39,
                      1LL);
              v27 = v34;
              if ( v34 >= 0 )
              {
                v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 72LL))(v41);
                v27 = v35;
                if ( v35 >= 0 )
                {
                  if ( *a3 )
                  {
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
                    *a3 = 0LL;
                  }
                  v36 = v40;
                  v40 = 0LL;
                  *a3 = v36;
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x161u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x15Fu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x156u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x155u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x149u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x13Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x13Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x13Du);
  }
  if ( !v39 )
    goto LABEL_26;
  (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v39 + 16LL))(v39);
LABEL_25:
  v39 = 0LL;
LABEL_26:
  if ( v38 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    v38 = 0LL;
  }
  if ( v40 )
  {
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v40 + 16LL))(v40);
    v40 = 0LL;
  }
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  return v27;
}
