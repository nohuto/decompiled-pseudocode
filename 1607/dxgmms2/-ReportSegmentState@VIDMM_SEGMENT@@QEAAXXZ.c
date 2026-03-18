/*
 * XREFs of ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099CC4
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008AB00 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_pppttxqx @ 0x1C00202A0 (Template_pppttxqx.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065E88 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegmentState(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v5; // rbx
  _QWORD **v6; // r12
  _QWORD *v7; // rsi
  _QWORD **v8; // r13
  _QWORD *v9; // r14
  __int64 **v10; // r10
  __int64 v11; // rdi
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 **v15; // [rsp+90h] [rbp+8h]

  v3 = (char *)this + 128;
  v5 = (char *)*((_QWORD *)this + 16);
  while ( v5 != v3 )
  {
    v6 = (_QWORD **)(v5 + 16);
    v5 = *(char **)v5;
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = (_QWORD **)(v7 + 2);
      v7 = (_QWORD *)*v7;
      v9 = *v8;
      while ( v9 != v8 )
      {
        v10 = (__int64 **)(v9 - 7);
        v9 = (_QWORD *)*v9;
        v15 = v10;
        v11 = **v10;
        if ( *(VIDMM_SEGMENT **)(v11 + 136) == this )
        {
          LOBYTE(a2) = *(_DWORD *)(v11 + 164) != 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v14) = *((_DWORD *)this + 4) + 1;
            LODWORD(v13) = 0;
            LODWORD(v12) = (unsigned __int8)a2;
            Template_pppttxqx(
              (unsigned int)v14,
              (unsigned __int8)a2,
              (__int64)v10[1],
              *(_QWORD *)((*v10)[1] + 8),
              v10[1][3],
              v10,
              v12,
              v13,
              *(_QWORD *)(v11 + 16),
              v14,
              *(_QWORD *)(v11 + 144));
            v10 = v15;
          }
        }
        if ( *(VIDMM_SEGMENT **)(v11 + 264) == this )
        {
          LOBYTE(a2) = *(_DWORD *)(v11 + 164) != 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v14) = *((_DWORD *)this + 4) + 1;
            LODWORD(v13) = 1;
            LODWORD(v12) = (unsigned __int8)a2;
            Template_pppttxqx(
              (unsigned int)v14,
              (unsigned __int8)a2,
              (__int64)v10[1],
              *(_QWORD *)((*v10)[1] + 8),
              v10[1][3],
              v10,
              v12,
              v13,
              *(_QWORD *)(v11 + 16),
              v14,
              *(_QWORD *)(v11 + 144));
          }
        }
        if ( (*((_DWORD *)this + 14) & 0x1001) != 0 )
          VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw((struct _VIDMM_GLOBAL_ALLOC *)v11, a2, a3);
      }
    }
  }
}
