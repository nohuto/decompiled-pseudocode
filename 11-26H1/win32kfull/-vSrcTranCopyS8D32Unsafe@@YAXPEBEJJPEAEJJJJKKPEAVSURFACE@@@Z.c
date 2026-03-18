/*
 * XREFs of ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EF4E0
 * Callers:
 *     ?vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EF340 (-vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1400EF808 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1400EFBC0 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z.c)
 */

void __fastcall vSrcTranCopyS8D32Unsafe(
        const unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  const unsigned __int8 *v11; // rsi
  unsigned int *v12; // r14
  unsigned int v13; // r12d
  __int64 SessionState; // rax
  __int64 v15; // r13
  unsigned int v16; // r15d
  char v17; // di
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  const unsigned __int8 *v21; // rdi
  unsigned int *v22; // rbx
  unsigned int *v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // r15d
  __int64 v26; // r14
  unsigned __int8 *v27; // r10
  int v28; // r11d
  int v29; // edx
  int v30; // r9d
  const unsigned __int8 *v31; // [rsp+30h] [rbp-98h]
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  __int128 v33; // [rsp+60h] [rbp-68h]
  __int128 v34; // [rsp+70h] [rbp-58h]
  __int128 v35; // [rsp+80h] [rbp-48h]
  int v36; // [rsp+E0h] [rbp+18h]
  unsigned int *v37; // [rsp+E8h] [rbp+20h]
  unsigned int v38; // [rsp+F8h] [rbp+30h]

  v36 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v38 = a6 - a5;
  v11 = &a1[(int)a2];
  v31 = v11;
  v12 = (unsigned int *)&a4[4 * a5];
  v37 = v12;
  v13 = *v12;
  SessionState = W32GetSessionState(a1, a2, a3);
  v15 = *(_QWORD *)(SessionState + 96) + 4864LL;
  if ( *(_QWORD *)a11 != *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 5328LL)
    || v13 != *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 5340LL) )
  {
    v16 = a9;
LABEL_5:
    v17 = 0;
    goto LABEL_6;
  }
  v16 = a9;
  if ( a9 != *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 5336LL)
    || *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 13448LL) != *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 5348LL) )
  {
    goto LABEL_5;
  }
  v17 = 1;
LABEL_6:
  vGetBlendInfo(4u, a11, v16, (struct BLENDINFO *)&v32);
  if ( !v17 )
    vClearTypeLookupTableLoop(4u, a11, (struct BLENDINFO *)&v32, v16, v13);
  v20 = a8;
  while ( (_DWORD)v20 )
  {
    v21 = v11;
    v22 = v12;
    v23 = &v12[v38];
    while ( v22 < v23 )
    {
      v24 = *v21;
      if ( (_BYTE)v24 )
      {
        if ( (_BYTE)v24 == 114 )
        {
          *v22 = v16;
        }
        else
        {
          v25 = *v22;
          v26 = 4 * v24;
          if ( *v22 == v13 )
          {
            *v22 = *(_DWORD *)(v26 + v15);
          }
          else
          {
            v27 = (unsigned __int8 *)(v26 + *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v20, v18, v19) + 96) + 13456LL));
            v28 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & DWORD2(v33)) << v32) >> SBYTE4(v32))
                                     + (_QWORD)v35);
            v19 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & HIDWORD(v33)) << SBYTE8(v32)) >> SBYTE12(v32))
                                     + (_QWORD)v35);
            v29 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & (unsigned int)v34) << v33) >> SBYTE4(v33))
                                     + (_QWORD)v35);
            v30 = HIDWORD(v33) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v19
                                                                                   + ((dword_14035EC88[v27[1]]
                                                                                     * (DWORD2(v34) - (int)v19)
                                                                                     + 0x80000) >> 20))
                                                                    + *((_QWORD *)&v35 + 1)) << SBYTE12(v32)) >> SBYTE8(v32)) | v34 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v29 + ((dword_14035EC88[v27[2]] * (HIDWORD(v34) - v29) + 0x80000) >> 20)) + *((_QWORD *)&v35 + 1)) << SBYTE4(v33)) >> v33);
            v20 = (unsigned int)v32;
            v18 = DWORD2(v33) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v28
                                                                                  + ((dword_14035EC88[*v27]
                                                                                    * (DWORD1(v34) - v28)
                                                                                    + 0x80000) >> 20))
                                                                   + *((_QWORD *)&v35 + 1)) << SBYTE4(v32)) >> v32);
            *v22 = v18 | v30;
          }
          v16 = a9;
        }
      }
      ++v22;
      ++v21;
    }
    v20 = --a8;
    v11 = &v31[v36];
    v31 = v11;
    v12 = (unsigned int *)((char *)v37 + a7);
    v37 = v12;
  }
}
