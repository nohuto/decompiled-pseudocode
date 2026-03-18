/*
 * XREFs of ?vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x140082F64
 * Callers:
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::vWidenSetupForFrameRgn(
        pathwide *this,
        struct XDCOBJ *a2,
        int a3,
        EXFORMOBJ *a4,
        struct EXFORMOBJ *a5)
{
  int v5; // eax
  int v6; // r10d
  int v7; // ebx
  int v8; // eax
  float v9; // xmm4_4
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  float v13; // xmm0_4
  float v14; // xmm4_4
  int v15; // xmm1_4
  int v16; // xmm2_4
  int v17; // xmm1_4
  float v18; // xmm0_4

  *(_DWORD *)a5 = 65537;
  *(_QWORD *)((char *)a5 + 4) = 2LL;
  v5 = a3;
  *((_DWORD *)a5 + 4) = *(_DWORD *)(*(_QWORD *)this + 224LL);
  v6 = 2 * (_DWORD)a2;
  *((_QWORD *)a5 + 3) = 0LL;
  *((_DWORD *)a5 + 5) = 0;
  v7 = 2 * a3;
  if ( 2 * (int)a2 >= 2 * a3 )
    v5 = (int)a2;
  v8 = 2 * v5;
  if ( v6 >= v7 )
    LODWORD(a2) = a3;
  *((float *)a5 + 3) = (float)v8;
  v9 = (float)(2 * (int)a2);
  if ( (float)v8 != 0.0 )
    v9 = v9 / (float)v8;
  v10 = *(_QWORD *)this;
  v11 = *(_QWORD *)a4;
  *(_OWORD *)v11 = *(_OWORD *)(v10 + 320);
  *(_OWORD *)(v11 + 16) = *(_OWORD *)(v10 + 336);
  *(_DWORD *)(v11 + 32) = *(_DWORD *)(v10 + 352);
  v12 = *(_QWORD *)a4;
  if ( v6 < v7 )
  {
    v16 = *(_DWORD *)(v12 + 12);
    v17 = *(_DWORD *)(v12 + 8);
    v18 = v9 * *(float *)(v12 + 4);
    *(float *)v12 = v9 * *(float *)v12;
    *(float *)(*(_QWORD *)a4 + 4LL) = v18;
    *(_DWORD *)(*(_QWORD *)a4 + 8LL) = v17;
    *(_DWORD *)(*(_QWORD *)a4 + 12LL) = v16;
  }
  else
  {
    v13 = v9 * *(float *)(v12 + 12);
    v14 = v9 * *(float *)(v12 + 8);
    v15 = *(_DWORD *)(v12 + 4);
    *(_DWORD *)v12 = *(_DWORD *)v12;
    *(_DWORD *)(*(_QWORD *)a4 + 4LL) = v15;
    *(float *)(*(_QWORD *)a4 + 8LL) = v14;
    *(float *)(*(_QWORD *)a4 + 12LL) = v13;
  }
  EXFORMOBJ::vComputeAccelFlags(a4, 8u);
}
