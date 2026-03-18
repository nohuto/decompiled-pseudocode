/*
 * XREFs of vSrcTranCopyS8D32 @ 0x1C00C0E30
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00C1130 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
  _BYTE *v13; // rsi
  unsigned int *v14; // r12
  unsigned int v15; // r14d
  _DWORD *v16; // r15
  __int64 v17; // r13
  int v18; // edx
  _BYTE *v19; // rbx
  unsigned int *i; // rax
  __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned __int8 *v23; // r11
  int v24; // r9d
  unsigned int v25; // r10d
  int v26; // r9d
  unsigned int v27; // r10d
  int v28; // r9d
  _QWORD v29[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v30[15]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE *v32; // [rsp+D0h] [rbp+8h]
  unsigned int v34; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  memset(v30, 0, 64);
  v34 = a6 - a5;
  v29[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v13 = (_BYTE *)(v12 + a1);
  v32 = v13;
  v14 = (unsigned int *)(a4 + 4LL * a5);
  v15 = *v14;
  v16 = pvFillOpaqTableCT(4u, a9, *v14, a11, (struct _BLENDINFO *)v30, 1);
  v29[1] = v16;
  v17 = v30[7];
  v18 = a8;
  while ( v18 )
  {
    v19 = v13;
    for ( i = v14; i < &v14[v34]; ++i )
    {
      v21 = (unsigned __int8)*v19;
      if ( *v19 )
      {
        if ( (_DWORD)v21 == 114 )
        {
          *i = a9;
        }
        else
        {
          v22 = *i;
          if ( *i == v15 )
          {
            *i = v16[v21];
          }
          else
          {
            v23 = (unsigned __int8 *)off_1C031B238 + 4 * v21;
            v24 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v22 & v30[3]) << SLOBYTE(v30[0])) >> SBYTE4(v30[0]))
                                     + v30[6]);
            v25 = v30[3] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v24
                                                                             + (((HIDWORD(v30[4]) - v24) * alAlpha[*v23]
                                                                               + 0x80000) >> 20))
                                                              + v17) << SBYTE4(v30[0])) >> SLOBYTE(v30[0]));
            v26 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v22 & HIDWORD(v30[3])) << SLOBYTE(v30[1])) >> SBYTE4(v30[1]))
                                     + v30[6]);
            v27 = HIDWORD(v30[3]) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v26
                                                                                      + (((LODWORD(v30[5]) - v26)
                                                                                        * alAlpha[v23[1]]
                                                                                        + 0x80000) >> 20))
                                                                       + v17) << SBYTE4(v30[1])) >> SLOBYTE(v30[1])) | v25;
            v28 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v22 & v30[4]) << SLOBYTE(v30[2])) >> SBYTE4(v30[2]))
                                     + v30[6]);
            *i = v30[4] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v28
                                                                            + (((HIDWORD(v30[5]) - v28)
                                                                              * alAlpha[v23[2]]
                                                                              + 0x80000) >> 20))
                                                             + v17) << SBYTE4(v30[2])) >> SLOBYTE(v30[2])) | v27;
          }
        }
      }
      ++v19;
    }
    v18 = --a8;
    v13 = &v32[a3];
    v32 = v13;
    v14 = (unsigned int *)((char *)v14 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v29);
}
