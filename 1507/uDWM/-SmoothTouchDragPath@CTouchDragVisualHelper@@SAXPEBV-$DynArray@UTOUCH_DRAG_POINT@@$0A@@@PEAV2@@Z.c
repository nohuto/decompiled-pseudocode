/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18008428C
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180085BA4 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x180084148 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x1800841D8 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

void __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int i; // ebx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int128 *v8; // rax
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  _OWORD *v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  int v19; // eax
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __int64 v23; // r8
  __int128 *v24; // rdx
  int v25; // eax
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  int v28; // eax
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // r8
  __int128 *MidPoint; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // xmm1_8
  __int128 v37; // xmm0
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int64 v40; // xmm1_8
  float v41; // xmm12_4
  float v42; // xmm14_4
  float v43; // xmm11_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm6_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm8_4
  float v50; // xmm7_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm5_4
  float v54; // xmm6_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm3_4
  float v58; // xmm4_4
  float v59; // xmm0_4
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rcx
  int v63; // eax
  _BYTE v64[24]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v65; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h] BYREF
  int v67; // [rsp+70h] [rbp-98h]
  __int128 v68; // [rsp+78h] [rbp-90h] BYREF
  __int64 v69; // [rsp+88h] [rbp-80h]
  int v70; // [rsp+90h] [rbp-78h]
  __int128 v71; // [rsp+98h] [rbp-70h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h]
  int v73; // [rsp+B0h] [rbp-58h]
  __int128 v74; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-40h]
  int v76; // [rsp+D0h] [rbp-38h]
  __int128 v77; // [rsp+D8h] [rbp-30h]
  __int128 v78; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v79; // [rsp+108h] [rbp+0h]
  int v80; // [rsp+110h] [rbp+8h]

  v2 = a1[6];
  *(_DWORD *)(a2 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 0x1Cu);
  for ( i = 0; i < v2; i += 2 )
  {
    if ( i + 4 <= v2 )
    {
      if ( i )
      {
        MidPoint = (__int128 *)CTouchDragVisualHelper::GetMidPoint(
                                 (__int64)v64,
                                 *(_QWORD *)a1 + 28LL * i,
                                 28LL * (i + 1) + *(_QWORD *)a1);
        v33 = *(_QWORD *)a1;
        v34 = 28LL * (i + 2);
        v36 = *(_QWORD *)(v35 + *(_QWORD *)a1 + 16);
        v77 = *MidPoint;
        v37 = *(_OWORD *)(v35 + v33);
        v73 = *(_DWORD *)(v35 + v33 + 24);
        v71 = v37;
        v30 = *(_OWORD *)(v34 + v33);
        v28 = *(_DWORD *)(v34 + v33 + 24);
        v31 = v33 + 28LL * (i + 3);
        v72 = v36;
        v29 = *(_QWORD *)(v34 + v33 + 16);
        v24 = (__int128 *)(v33 + v34);
      }
      else
      {
        v23 = *(_QWORD *)a1;
        v24 = &v74;
        v25 = *(_DWORD *)(*(_QWORD *)a1 + 52LL);
        v26 = *(_QWORD *)(*(_QWORD *)a1 + 44LL);
        v77 = *(_OWORD *)*(_QWORD *)a1;
        v73 = v25;
        v27 = *(_OWORD *)(v23 + 28);
        v28 = *(_DWORD *)(v23 + 80);
        v72 = v26;
        v29 = *(_QWORD *)(v23 + 72);
        v71 = v27;
        v30 = *(_OWORD *)(v23 + 56);
        v31 = v23 + 84;
      }
      v75 = v29;
      v74 = v30;
      v76 = v28;
      v38 = CTouchDragVisualHelper::GetMidPoint((__int64)v64, (__int64)v24, v31);
      v39 = *(_OWORD *)v38;
      v40 = *(_QWORD *)(v38 + 16);
      LODWORD(v38) = *(_DWORD *)(v38 + 24);
      v68 = v39;
      v70 = v38;
      v69 = v40;
    }
    else
    {
      if ( i )
      {
        v9 = CTouchDragVisualHelper::GetMidPoint((__int64)v64, *(_QWORD *)a1 + 28LL * i, *(_QWORD *)a1 + 28LL * (i + 1));
        v10 = *(_OWORD *)v9;
        v11 = *(_QWORD *)(v9 + 16);
        v80 = *(_DWORD *)(v9 + 24);
        v8 = &v78;
        v78 = v10;
        v79 = v11;
      }
      else
      {
        v6 = *(_OWORD *)*(_QWORD *)a1;
        v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v67 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
        v8 = &v65;
        v65 = v6;
        v66 = v7;
      }
      v12 = *(_OWORD **)a1;
      v13 = i + 1;
      v77 = *v8;
      v14 = *(_OWORD *)((char *)v12 + 28 * v13);
      v15 = *(_QWORD *)((char *)v12 + 28 * v13 + 16);
      v73 = *((_DWORD *)v12 + 7 * v13 + 6);
      v72 = v15;
      v71 = v14;
      if ( i + 3 <= v2 )
        v16 = (_OWORD *)((char *)v12 + 28 * i + 56);
      else
        v16 = &v71;
      v17 = *v16;
      v18 = *((_QWORD *)v16 + 2);
      v19 = *((_DWORD *)v16 + 6);
      v68 = v17;
      v70 = v19;
      v69 = v18;
      v20 = CTouchDragVisualHelper::GetMidPoint((__int64)v64, (__int64)&v71, (__int64)&v68);
      i = v2;
      v21 = *(_OWORD *)v20;
      v22 = *(_QWORD *)(v20 + 16);
      LODWORD(v20) = *(_DWORD *)(v20 + 24);
      v74 = v21;
      v76 = v20;
      v75 = v22;
    }
    v41 = 0.0;
    v42 = (float)(v77 - v68);
    do
    {
      v43 = 1.0 - v41;
      HIDWORD(v65) = 1056964608;
      v44 = (float)(v43 * v43) * v43;
      v45 = *((float *)&v77 + 1) * v44;
      v46 = *((float *)&v77 + 2) * v44;
      v47 = (float)((float)((float)(1.0 - v41) * 3.0) * (float)(1.0 - v41)) * v41;
      v48 = (float)((float)((float)(1.0 - v41) * 3.0) * v41) * v41;
      v49 = (float)(*((float *)&v71 + 1) * v47) + v45;
      v50 = (float)(*((float *)&v71 + 2) * v47) + v46;
      v51 = v41 * (float)(v41 * v41);
      *((float *)&v65 + 1) = (float)(v49 + (float)(*((float *)&v74 + 1) * v48)) + (float)(*((float *)&v68 + 1) * v51);
      *((float *)&v65 + 2) = (float)(v50 + (float)(*((float *)&v74 + 2) * v48)) + (float)(*((float *)&v68 + 2) * v51);
      v52 = (float)((float)(v41 - 1.0) * 3.0) * (float)(1.0 - v41);
      v53 = *((float *)&v77 + 1) * v52;
      v54 = *((float *)&v77 + 2) * v52;
      v55 = (float)((float)((float)((float)(v41 - 1.0) * 2.0) * v41) + (float)(v43 * v43)) * 3.0;
      v56 = (float)((float)((float)((float)(1.0 - v41) * 2.0) * v41) - (float)(v41 * v41)) * 3.0;
      v57 = *((float *)&v74 + 1) * v56;
      v58 = *((float *)&v74 + 2) * v56;
      v59 = (float)(v41 * 3.0) * v41;
      v67 = 0;
      LODWORD(v66) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*((float *)&v71 + 2) * v55) + v54) + v58)
                     + (float)(*((float *)&v68 + 2) * v59)) ^ _xmm;
      *((float *)&v66 + 1) = (float)((float)((float)(*((float *)&v71 + 1) * v55) + v53) + v57)
                           + (float)(*((float *)&v68 + 1) * v59);
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v66);
      LODWORD(v65) = v68 + (int)(float)((float)(1.0 - v41) * v42);
      v60 = *(unsigned int *)(a2 + 24);
      v61 = v60 + 1;
      if ( (int)v60 + 1 >= (unsigned int)v60 )
      {
        if ( v61 > *(_DWORD *)(a2 + 20) )
        {
          v63 = DynArrayImpl<0>::AddMultipleAndSet(a2, 0x1Cu, 1, &v65);
          if ( v63 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v63, 0xC0u);
        }
        else
        {
          v62 = *(_QWORD *)a2 + 28 * v60;
          *(_OWORD *)v62 = v65;
          *(_QWORD *)(v62 + 16) = v66;
          *(_DWORD *)(v62 + 24) = v67;
          *(_DWORD *)(a2 + 24) = v61;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      v41 = v41 + 0.2;
    }
    while ( v41 < 1.0 );
  }
}
