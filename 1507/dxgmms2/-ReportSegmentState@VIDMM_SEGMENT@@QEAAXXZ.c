/*
 * XREFs of ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0070FB8
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F68 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_pppttxqx @ 0x1C0011040 (Template_pppttxqx.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegmentState(VIDMM_SEGMENT *this)
{
  char *v1; // r15
  char *v3; // rbx
  _QWORD **v4; // r12
  _QWORD *v5; // rdi
  _QWORD **v6; // r13
  _QWORD *v7; // r14
  __int64 **v8; // r10
  __int64 v9; // rsi
  _BOOL8 v10; // rdx
  _BOOL8 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 **v15; // [rsp+90h] [rbp+8h]

  v1 = (char *)this + 128;
  v3 = (char *)*((_QWORD *)this + 16);
  while ( v3 != v1 )
  {
    v4 = (_QWORD **)(v3 + 16);
    v3 = *(char **)v3;
    v5 = *v4;
    while ( v5 != v4 )
    {
      v6 = (_QWORD **)(v5 + 2);
      v5 = (_QWORD *)*v5;
      v7 = *v6;
      while ( v7 != v6 )
      {
        v8 = (__int64 **)(v7 - 7);
        v7 = (_QWORD *)*v7;
        v15 = v8;
        v9 = **v8;
        if ( *(VIDMM_SEGMENT **)(v9 + 128) == this && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v10 = *(_DWORD *)(v9 + 156) != 0;
          LODWORD(v14) = *((_DWORD *)this + 4) + 1;
          LODWORD(v13) = 0;
          LODWORD(v12) = v10;
          Template_pppttxqx(
            (unsigned int)v14,
            v10,
            (__int64)v8[1],
            *(_QWORD *)((*v8)[1] + 8),
            v8[1][3],
            v8,
            v12,
            v13,
            *(_QWORD *)(v9 + 16),
            v14,
            *(_QWORD *)(v9 + 136));
          v8 = v15;
        }
        if ( *(VIDMM_SEGMENT **)(v9 + 256) == this && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v11 = *(_DWORD *)(v9 + 156) != 0;
          LODWORD(v14) = *((_DWORD *)this + 4) + 1;
          LODWORD(v13) = 1;
          LODWORD(v12) = v11;
          Template_pppttxqx(
            (unsigned int)v14,
            v11,
            (__int64)v8[1],
            *(_QWORD *)((*v8)[1] + 8),
            v8[1][3],
            v8,
            v12,
            v13,
            *(_QWORD *)(v9 + 16),
            v14,
            *(_QWORD *)(v9 + 136));
        }
      }
    }
  }
}
