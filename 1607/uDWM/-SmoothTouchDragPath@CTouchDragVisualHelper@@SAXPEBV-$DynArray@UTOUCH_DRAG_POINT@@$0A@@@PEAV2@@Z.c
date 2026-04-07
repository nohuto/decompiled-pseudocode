/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004CDB4
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004E448 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x180088DE4 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180088E74 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

void __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int i; // ebx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int128 *v8; // rax
  _OWORD *v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int128 *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v16; // eax
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  float v20; // xmm12_4
  float v21; // xmm14_4
  float v22; // xmm11_4
  float v23; // xmm0_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm5_4
  float v33; // xmm6_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm0_4
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int64 v43; // xmm1_8
  __int128 *MidPoint; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r10
  __int64 v48; // xmm1_8
  __int128 v49; // xmm0
  __int128 v50; // xmm0
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // xmm1_8
  __int128 *v54; // rdx
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int64 v57; // xmm1_8
  __int64 v58; // r8
  int v59; // eax
  __int64 v60; // xmm1_8
  __int128 v61; // xmm0
  __int64 v62; // rcx
  int v63; // eax
  _DWORD v64[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v65; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h]
  int v67; // [rsp+70h] [rbp-98h]
  __int128 v68; // [rsp+78h] [rbp-90h] BYREF
  __int128 v69; // [rsp+88h] [rbp-80h] BYREF
  __int128 v70; // [rsp+98h] [rbp-70h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-60h]
  int v72; // [rsp+B0h] [rbp-58h]
  __int128 v73; // [rsp+B8h] [rbp-50h]
  __int128 v74; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-20h]
  int v76; // [rsp+F0h] [rbp-18h]
  __int128 v77; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v78; // [rsp+108h] [rbp+0h]
  int v79; // [rsp+110h] [rbp+8h]

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
                                 v64,
                                 *(_QWORD *)a1 + 28LL * i,
                                 28LL * (i + 1) + *(_QWORD *)a1);
        v45 = *(_QWORD *)a1;
        v46 = 28LL * (i + 2);
        v48 = *(_QWORD *)(v47 + *(_QWORD *)a1 + 16);
        v73 = *MidPoint;
        v49 = *(_OWORD *)(v47 + v45);
        v72 = *(_DWORD *)(v47 + v45 + 24);
        v70 = v49;
        v50 = *(_OWORD *)(v46 + v45);
        v51 = *(_DWORD *)(v46 + v45 + 24);
        v52 = v45 + 28LL * (i + 3);
        v71 = v48;
        v53 = *(_QWORD *)(v46 + v45 + 16);
        v54 = (__int128 *)(v45 + v46);
      }
      else
      {
        v58 = *(_QWORD *)a1;
        v54 = &v74;
        v59 = *(_DWORD *)(*(_QWORD *)a1 + 52LL);
        v60 = *(_QWORD *)(*(_QWORD *)a1 + 44LL);
        v73 = *(_OWORD *)*(_QWORD *)a1;
        v72 = v59;
        v61 = *(_OWORD *)(v58 + 28);
        v51 = *(_DWORD *)(v58 + 80);
        v71 = v60;
        v53 = *(_QWORD *)(v58 + 72);
        v70 = v61;
        v50 = *(_OWORD *)(v58 + 56);
        v52 = v58 + 84;
      }
      v75 = v53;
      v74 = v50;
      v76 = v51;
      v55 = CTouchDragVisualHelper::GetMidPoint(v64, v54, v52);
      v56 = *(_OWORD *)v55;
      v57 = *(_QWORD *)(v55 + 16);
      LODWORD(v55) = *(_DWORD *)(v55 + 24);
      v65 = v56;
      v67 = v55;
      v66 = v57;
    }
    else
    {
      if ( i )
      {
        v41 = CTouchDragVisualHelper::GetMidPoint(v64, *(_QWORD *)a1 + 28LL * i, *(_QWORD *)a1 + 28LL * (i + 1));
        v42 = *(_OWORD *)v41;
        v43 = *(_QWORD *)(v41 + 16);
        v79 = *(_DWORD *)(v41 + 24);
        v8 = &v77;
        v77 = v42;
        v78 = v43;
      }
      else
      {
        v6 = *(_OWORD *)*(_QWORD *)a1;
        v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        DWORD2(v69) = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
        v8 = &v68;
        v68 = v6;
        *(_QWORD *)&v69 = v7;
      }
      v9 = *(_OWORD **)a1;
      v10 = i + 1;
      v73 = *v8;
      v11 = *(_OWORD *)((char *)v9 + 28 * v10);
      v12 = *(_QWORD *)((char *)v9 + 28 * v10 + 16);
      v72 = *((_DWORD *)v9 + 7 * v10 + 6);
      v71 = v12;
      v70 = v11;
      if ( i + 3 > v2 )
        v13 = &v70;
      else
        v13 = (_OWORD *)((char *)v9 + 28 * i + 56);
      v14 = *v13;
      v15 = *((_QWORD *)v13 + 2);
      v16 = *((_DWORD *)v13 + 6);
      v65 = v14;
      v67 = v16;
      v66 = v15;
      v17 = CTouchDragVisualHelper::GetMidPoint(v64, &v70, &v65);
      i = v2;
      v18 = *(_OWORD *)v17;
      v19 = *(_QWORD *)(v17 + 16);
      LODWORD(v17) = *(_DWORD *)(v17 + 24);
      v74 = v18;
      v76 = v17;
      v75 = v19;
    }
    v20 = 0.0;
    v21 = (float)(v73 - v65);
    do
    {
      v22 = 1.0 - v20;
      HIDWORD(v68) = 1056964608;
      v23 = (float)(v22 * v22) * v22;
      v24 = *((float *)&v73 + 1) * v23;
      v25 = *((float *)&v73 + 2) * v23;
      v26 = (float)((float)((float)(1.0 - v20) * 3.0) * (float)(1.0 - v20)) * v20;
      v27 = (float)((float)((float)(1.0 - v20) * 3.0) * v20) * v20;
      v28 = (float)(*((float *)&v70 + 1) * v26) + v24;
      v29 = (float)(*((float *)&v70 + 2) * v26) + v25;
      v30 = (float)(v20 * v20) * v20;
      *((float *)&v68 + 1) = (float)(v28 + (float)(*((float *)&v74 + 1) * v27)) + (float)(*((float *)&v65 + 1) * v30);
      *((float *)&v68 + 2) = (float)(v29 + (float)(*((float *)&v74 + 2) * v27)) + (float)(*((float *)&v65 + 2) * v30);
      v31 = (float)((float)(v20 - 1.0) * 3.0) * (float)(1.0 - v20);
      v32 = *((float *)&v73 + 1) * v31;
      v33 = *((float *)&v73 + 2) * v31;
      v34 = (float)((float)((float)((float)(v20 - 1.0) * 2.0) * v20) + (float)(v22 * v22)) * 3.0;
      v35 = (float)((float)((float)((float)(1.0 - v20) * 2.0) * v20) - (float)(v20 * v20)) * 3.0;
      v36 = *((float *)&v74 + 1) * v35;
      v37 = *((float *)&v74 + 2) * v35;
      v38 = (float)(v20 * 3.0) * v20;
      LODWORD(v69) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*((float *)&v70 + 2) * v34) + v33) + v37)
                     + (float)(*((float *)&v65 + 2) * v38)) ^ _xmm;
      *(_QWORD *)((char *)&v69 + 4) = COERCE_UNSIGNED_INT(
                                        (float)((float)((float)(*((float *)&v70 + 1) * v34) + v32) + v36)
                                      + (float)(*((float *)&v65 + 1) * v38));
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v69);
      LODWORD(v68) = v65 + (int)(float)((float)(1.0 - v20) * v21);
      v39 = *(unsigned int *)(a2 + 24);
      v40 = v39 + 1;
      if ( (int)v39 + 1 >= (unsigned int)v39 )
      {
        if ( v40 > *(_DWORD *)(a2 + 20) )
        {
          v63 = DynArrayImpl<0>::AddMultipleAndSet(a2, 0x1Cu, 1, &v68);
          if ( v63 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0xC0u);
        }
        else
        {
          v62 = *(_QWORD *)a2 + 28 * v39;
          *(_OWORD *)v62 = v68;
          *(_QWORD *)(v62 + 16) = v69;
          *(_DWORD *)(v62 + 24) = DWORD2(v69);
          *(_DWORD *)(a2 + 24) = v40;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      v20 = v20 + 0.2;
    }
    while ( v20 < 1.0 );
  }
}
