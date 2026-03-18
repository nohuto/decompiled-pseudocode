/*
 * XREFs of ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180176F64
 * Callers:
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D350 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18009C828 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800B24C4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x180177D30 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CD2DContext::FillRectanglesAsCommandList(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD),
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        struct MILMatrix3x2 *a6,
        int a7,
        int a8,
        int a9)
{
  struct ID2D1PrivateCompositorBuffer *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r12
  void (__fastcall *v13)(__int64 *, float *); // rax
  int v14; // eax
  struct ID2D1PrivateCompositorBuffer *v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // rax
  _DWORD *v21; // rbx
  size_t v22; // r8
  struct ID2D1PrivateCompositorBuffer *v23; // rdi
  struct MILMatrix3x2 *v24; // rdx
  int v25; // r10d
  __int64 v26; // r11
  _DWORD *v27; // rcx
  __int128 v28; // xmm4
  int *v29; // rdx
  __int64 v30; // xmm1_8
  int v31; // eax
  int v32; // eax
  void (__fastcall ***v33)(_QWORD); // r15
  __int64 v34; // rbx
  int v35; // eax
  struct ID2D1PrivateCompositorBuffer *v37; // [rsp+60h] [rbp-91h] BYREF
  struct ID2D1PrivateCompositorBuffer *v38; // [rsp+68h] [rbp-89h] BYREF
  __int64 v39; // [rsp+70h] [rbp-81h] BYREF
  float v40[2]; // [rsp+78h] [rbp-79h] BYREF
  __int64 v41; // [rsp+80h] [rbp-71h] BYREF
  float v42[6]; // [rsp+88h] [rbp-69h] BYREF
  _BYTE v43[4]; // [rsp+A0h] [rbp-51h] BYREF
  int v44; // [rsp+A4h] [rbp-4Dh]
  struct MILMatrix3x2 *v45; // [rsp+A8h] [rbp-49h]
  __int64 v46; // [rsp+B0h] [rbp-41h]
  void (__fastcall ***v47)(_QWORD); // [rsp+B8h] [rbp-39h]
  __int128 v48; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-21h]
  _BYTE v50[88]; // [rsp+D8h] [rbp-19h] BYREF

  v10 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  v45 = a6;
  v41 = (__int64)a5;
  v11 = *a5;
  v47 = a2;
  v12 = a4;
  v46 = a3;
  v13 = *(void (__fastcall **)(__int64 *, float *))(v11 + 32);
  v38 = 0LL;
  v13(a5, v40);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v41 + 48LL))(v41, v43);
  v14 = CD2DSharedBuffer::CreateFromHeap(0x90u, &v37);
  v15 = v37;
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x12Bu);
  }
  else
  {
    v17 = 148 * v12;
    v18 = (unsigned int)v12;
    if ( (unsigned __int64)(148 * v12) <= 0xFFFFFFFF )
    {
      v19 = CD2DSharedBuffer::CreateFromHeap(v17, &v38);
      v16 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x12Fu);
        v10 = v38;
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v15 + 24LL))(v15);
        v10 = v38;
        v21 = (_DWORD *)v20;
        v37 = (struct ID2D1PrivateCompositorBuffer *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v38 + 24LL))(v38);
        memset_0(v21, 0, 0x90uLL);
        v22 = v17;
        v23 = v37;
        memset_0(v37, 0, v22);
        *v21 = 1;
        v21[1] = 1;
        if ( v44 == 3 )
          v21[1] |= 0x10u;
        v24 = v45;
        v21[2] = -1;
        v21[5] = v12;
        v21[11] = a9;
        v21[14] = -1;
        MILMatrix3x2::SetInverse((MILMatrix3x2 *)v50, v24);
        v42[1] = 0.0;
        v42[2] = 0.0;
        v42[4] = 0.0;
        v42[5] = 0.0;
        v42[0] = 1.0 / v40[0];
        v42[3] = 1.0 / v40[1];
        MILMatrix3x2::SetProduct(
          (MILMatrix3x2 *)&v48,
          (const struct MILMatrix3x2 *)v50,
          (const struct MILMatrix3x2 *)v42);
        if ( (_DWORD)v12 )
        {
          v27 = (_DWORD *)((char *)v23 + 8);
          v28 = v48;
          v29 = (int *)(v46 + 8);
          do
          {
            v30 = v49;
            *(v27 - 2) = *(v29 - 2);
            *(v27 - 1) = *(v29 - 1);
            v31 = *v29;
            v29 += 4;
            *v27 = v31;
            v27 += 37;
            *(v27 - 36) = *(v29 - 3);
            *(v27 - 35) = 1065353216;
            *(v27 - 32) = 1065353216;
            *(v27 - 27) = 1065353216;
            *(v27 - 26) = 1065353216;
            *(v27 - 25) = 1065353216;
            *(v27 - 24) = 1065353216;
            *(v27 - 15) = 1065353216;
            *(v27 - 14) = 1065353216;
            *(v27 - 3) = v25;
            *(_OWORD *)(v27 - 23) = v28;
            *(_QWORD *)(v27 - 19) = v30;
            v18 -= v26;
          }
          while ( v18 );
        }
        v32 = (*(__int64 (__fastcall **)(__int64, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, __int64 *, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, __int64 *))(*(_QWORD *)a1[6] + 24LL))(
                a1[6],
                v15,
                v10,
                &v41,
                v26,
                0LL,
                0,
                0LL,
                0,
                &v39);
        v16 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x174u);
        }
        else
        {
          v33 = v47;
          v34 = *a1;
          (**v47)(v47);
          v35 = (*(__int64 (__fastcall **)(__int64 *, void (__fastcall ***)(_QWORD), __int64))(v34 + 152))(a1, v33, v39);
          v16 = v35;
          if ( v35 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x181u);
        }
      }
    }
    else
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x12Du);
    }
  }
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v15 + 16LL))(v15);
  return v16;
}
