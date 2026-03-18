/*
 * XREFs of vSrcTranCopyS8D32 @ 0x1C00D2D20
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D3018 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

void __fastcall vSrcTranCopyS8D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rsi
  unsigned int *v14; // rsi
  unsigned int v15; // r14d
  _DWORD *v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  _BYTE *v19; // rdx
  int v20; // r8d
  _BYTE *v21; // rbx
  unsigned int *v22; // rax
  unsigned int *v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // esi
  int *v26; // r11
  int v27; // r9d
  unsigned int v28; // r10d
  int v29; // r9d
  unsigned int v30; // r10d
  int v31; // r9d
  _QWORD v32[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v33[15]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE *v34; // [rsp+D0h] [rbp+8h]
  unsigned int *v36; // [rsp+E8h] [rbp+20h]
  unsigned int v37; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  memset(v33, 0, 0x40uLL);
  v37 = a6 - a5;
  v32[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v34 = (_BYTE *)(v12 + a1);
  v14 = (unsigned int *)(a4 + 4LL * a5);
  v36 = v14;
  v15 = *v14;
  v16 = pvFillOpaqTableCT(4u, a9, *v14, a11, (struct _BLENDINFO *)v33, 1);
  v32[1] = v16;
  v17 = v33[7];
  v18 = v33[6];
  v19 = v34;
  v20 = a8;
  while ( v20 )
  {
    v21 = v19;
    v22 = v14;
    v23 = &v14[v37];
    while ( v22 < v23 )
    {
      v24 = (unsigned __int8)*v21;
      if ( *v21 )
      {
        if ( (_DWORD)v24 == 114 )
        {
          *v22 = a9;
        }
        else
        {
          v25 = *v22;
          if ( *v22 == v15 )
          {
            *v22 = v16[v24];
          }
          else
          {
            v26 = &off_1C0320110[v24];
            v27 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v33[3]) << SLOBYTE(v33[0])) >> SBYTE4(v33[0]))
                                     + v18);
            v28 = v33[3] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v27
                                                                             + (((HIDWORD(v33[4]) - v27)
                                                                               * alAlpha[*(unsigned __int8 *)v26]
                                                                               + 0x80000) >> 20))
                                                              + v17) << SBYTE4(v33[0])) >> SLOBYTE(v33[0]));
            v29 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & HIDWORD(v33[3])) << SLOBYTE(v33[1])) >> SBYTE4(v33[1]))
                                     + v18);
            v30 = HIDWORD(v33[3]) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v29
                                                                                      + (((LODWORD(v33[5]) - v29)
                                                                                        * alAlpha[*((unsigned __int8 *)v26
                                                                                                  + 1)]
                                                                                        + 0x80000) >> 20))
                                                                       + v17) << SBYTE4(v33[1])) >> SLOBYTE(v33[1])) | v28;
            v31 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v33[4]) << SLOBYTE(v33[2])) >> SBYTE4(v33[2]))
                                     + v18);
            *v22 = v33[4] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v31
                                                                              + (((HIDWORD(v33[5]) - v31)
                                                                                * alAlpha[*((unsigned __int8 *)v26 + 2)]
                                                                                + 0x80000) >> 20))
                                                               + v17) << SBYTE4(v33[2])) >> SLOBYTE(v33[2])) | v30;
          }
        }
      }
      ++v22;
      ++v21;
    }
    v20 = --a8;
    v19 = &v34[a3];
    v34 = v19;
    v14 = (unsigned int *)((char *)v36 + a7);
    v36 = v14;
  }
  SEMOBJ::vUnlock((SEMOBJ *)v32);
}
