/*
 * XREFs of ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EF0A0
 * Callers:
 *     ?vSrcOpaqCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEF80 (-vSrcOpaqCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1400EF808 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1400EFBC0 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSrcOpaqCopyS8D32Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 SessionState; // rax
  __int64 v17; // rbx
  const unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // r10
  const unsigned __int8 *v21; // r8
  unsigned __int8 *i; // rax
  _BYTE v24[120]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  v26 = a6 - a5;
  memset_0(v24, 0, 0x40uLL);
  SessionState = W32GetSessionState(v14, v13, v15);
  v17 = *(_QWORD *)(SessionState + 96) + 4864LL;
  if ( *(_QWORD *)a11 != *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 5328LL)
    || a10 != *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 5340LL)
    || a9 != *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 5336LL)
    || *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 13448LL) != *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 5348LL) )
  {
    vGetBlendInfo(4u, a11, a9, (struct BLENDINFO *)v24);
    vClearTypeLookupTableLoop(4u, a11, (struct BLENDINFO *)v24, a9, a10);
  }
  v18 = &a1[v12];
  v19 = &a4[4 * a5];
  while ( a8 )
  {
    v21 = v18;
    for ( i = v19; i < &v19[4 * v26]; i += 4 )
      *(_DWORD *)i = *(_DWORD *)(v17 + 4LL * *v21++);
    --a8;
    v18 += a3;
    v19 += a7;
  }
}
