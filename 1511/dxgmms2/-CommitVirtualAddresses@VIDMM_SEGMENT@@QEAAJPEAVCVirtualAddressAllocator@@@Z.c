/*
 * XREFs of ?CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062280
 * Callers:
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::CommitVirtualAddresses(VIDMM_SEGMENT *this, struct CVirtualAddressAllocator *a2)
{
  struct CVirtualAddressAllocator *v2; // r14
  unsigned int v4; // r12d
  __int64 v5; // r8
  _QWORD *v6; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ebp
  struct _MDL *FullMDL; // rax
  _QWORD *v14; // r10
  _QWORD *v15; // rbx
  VIDMM_PROCESS *v16; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  CVirtualAddressAllocator *v18; // r11
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  struct _MDL *v28; // [rsp+50h] [rbp-88h]
  _QWORD *v29; // [rsp+58h] [rbp-80h]
  CVirtualAddressAllocator *v30; // [rsp+60h] [rbp-78h]
  _QWORD *v31; // [rsp+68h] [rbp-70h]
  struct VIDMM_ALLOC *v32; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v33[12]; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v34; // [rsp+E0h] [rbp+8h]
  int v36; // [rsp+F0h] [rbp+18h]
  __int64 v37; // [rsp+F8h] [rbp+20h]

  v2 = a2;
  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  v33[0] = (char *)this + 152;
  v33[1] = (char *)this + 168;
  v6 = v33;
  v29 = v33;
  v7 = *(_DWORD *)(v5 + 184);
  v34 = v7;
  do
  {
    v31 = (_QWORD *)*v6;
    v8 = *(_QWORD **)*v6;
    if ( (_QWORD *)*v31 != v31 )
    {
      do
      {
        v9 = v8 - 48;
        v10 = *(v8 - 32);
        v11 = *(_DWORD *)(v10 + 56);
        if ( (v11 & 0x1001) != 0 )
        {
          v12 = 0;
          v37 = 0LL;
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)(v8 - 48), 0LL);
          v7 = v34;
          v28 = FullMDL;
        }
        else
        {
          if ( (v11 & 0x1000) != 0 )
            v12 = 0;
          else
            v12 = *(_DWORD *)(v10 + 16) + 1;
          v28 = 0LL;
          v37 = v9[17];
        }
        v14 = v9 + 36;
        v15 = (_QWORD *)v9[36];
        while ( v15 != v14 )
        {
          v16 = (VIDMM_PROCESS *)*(v15 - 6);
          if ( v16 != g_pVidMmSystemProcess )
          {
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v16, v7, *((_DWORD *)v9 + 19) & 0x3F);
            v30 = VirtualAddressAllocator;
            v18 = VirtualAddressAllocator;
            if ( !v2 || VirtualAddressAllocator == v2 )
            {
              if ( VirtualAddressAllocator )
              {
                v19 = (_QWORD *)*(v15 - 2);
                if ( v19 != v15 - 2 )
                {
                  while ( 2 )
                  {
                    v20 = v19 + 11;
                    v21 = (_QWORD *)v19[11];
                    while ( v21 != v20 )
                    {
                      v36 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                              v18,
                              (struct VIDMM_MAPPED_VA_RANGE *)(v21 - 3),
                              *((_DWORD *)v9 + 19) & 0x3F,
                              v12,
                              v21[6] + v37,
                              v28,
                              0,
                              &v32,
                              0);
                      if ( v36 < 0 )
                      {
                        v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
                        *(_QWORD *)(v27 + 24) = this;
                        *(_QWORD *)(v27 + 32) = 2750LL;
                        WdLogEvent5_WdAssertion(v27);
                        return (unsigned int)v36;
                      }
                      v21 = (_QWORD *)*v21;
                      v20 = v19 + 11;
                      v18 = v30;
                    }
                    v19 = (_QWORD *)*v19;
                    if ( v19 != v15 - 2 )
                      continue;
                    break;
                  }
                  v14 = v9 + 36;
                }
                v2 = a2;
              }
            }
          }
          v15 = (_QWORD *)*v15;
          v7 = v34;
        }
        v8 = (_QWORD *)*v8;
        v7 = v34;
      }
      while ( v8 != v31 );
    }
    ++v4;
    v6 = ++v29;
  }
  while ( v4 < 2 );
  return 0LL;
}
