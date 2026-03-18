/*
 * XREFs of ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130764
 * Callers:
 *     NtGdiFrameRgn @ 0x1C012FC30 (NtGdiFrameRgn.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 */

void __fastcall EPATHOBJ::vWidenSetupForFrameRgn(
        EPATHOBJ *this,
        struct XDCOBJ *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct _LINEATTRS *a6)
{
  struct _LINEATTRS *v6; // r10
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ecx
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v12; // edx
  __int64 *v13; // r11
  __int64 v14; // rax
  struct EXFORMOBJ *v15; // r8
  __int64 v16; // rcx
  float *v17; // rax
  int v18; // eax
  float v19; // [rsp+40h] [rbp+18h] BYREF

  v6 = a6;
  v7 = 2 * a3;
  v8 = 2 * a4;
  a6->iEndCap = 0;
  v6->fl = 65537;
  v6->iJoin = 2;
  v9 = *(_DWORD *)(*(_QWORD *)a2 + 200LL);
  v6->pstyle = 0LL;
  *(_QWORD *)&v6->eMiterLimit = v9;
  if ( v7 < v8 )
  {
    v18 = v7;
    v7 = v8;
    v8 = v18;
  }
  v10 = (float)v7;
  v19 = (float)v7;
  v6->elWidth.e = (float)v7;
  v11 = (float)v8;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v19) )
    v11 = v11 / v10;
  v14 = *v13;
  v15 = a5;
  v16 = *(_QWORD *)a5;
  *(_OWORD *)v16 = *(_OWORD *)(*v13 + 336);
  *(_OWORD *)(v16 + 16) = *(_OWORD *)(v14 + 352);
  *(_DWORD *)(v16 + 32) = *(_DWORD *)(v14 + 368);
  v17 = *(float **)v15;
  if ( v12 )
  {
    *v17 = v11 * *v17;
    v17[1] = v11 * v17[1];
  }
  else
  {
    v17[2] = v11 * v17[2];
    v17[3] = v11 * v17[3];
  }
  EXFORMOBJ::vComputeAccelFlags(v15, 8u);
}
