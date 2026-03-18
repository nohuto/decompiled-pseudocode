/*
 * XREFs of VidMmReportContextAllocList @ 0x1C005C230
 * Callers:
 *     <none>
 * Callees:
 *     Template_pppppppppppp @ 0x1C000F46C (Template_pppppppppppp.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C005B7B4 (-VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z.c)
 */

void __fastcall VidMmReportContextAllocList(struct DXGDEVICE *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // r14
  struct _VIDMM_GLOBAL_ALLOC ***v6; // rax
  struct _VIDMM_GLOBAL_ALLOC **v7; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdx
  __int64 v9; // r8

  v2 = (_QWORD *)*a2;
  while ( v2 != a2 )
  {
    v5 = v2 + 3;
    v6 = (struct _VIDMM_GLOBAL_ALLOC ***)v2[3];
    v2 = (_QWORD *)*v2;
    v7 = *v6;
    VidMmReportGlobalAlloc(a1, **v6, 0LL);
    if ( bTracingEnabled )
    {
      v8 = *v7;
      if ( (**((_DWORD **)*v7 + 59) & 8) != 0 )
        v9 = *((_QWORD *)v8 + 45);
      else
        v9 = (__int64)v7[2];
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pppppppppppp(
          *((_QWORD *)a1 + 2),
          &EventReportDeviceAllocation,
          v9,
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL),
          a1,
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
          *v5,
          v8,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          v9,
          v7[3]);
    }
  }
}
