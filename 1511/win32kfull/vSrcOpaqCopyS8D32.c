/*
 * XREFs of vSrcOpaqCopyS8D32 @ 0x1C00B9620
 * Callers:
 *     <none>
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z @ 0x1C00B9BA0 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00B9DB0 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall vSrcOpaqCopyS8D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r13
  HSEMAPHORE v13; // rbx
  unsigned __int8 *v14; // r11
  _DWORD *v15; // r9
  unsigned __int8 *v17; // rdx
  _DWORD *i; // rax
  _DWORD v19[30]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  v22 = a6 - a5;
  memset(v19, 0, 64);
  v13 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  if ( *(void **)a11 != hCacheCT || a9 != uFCacheCT || a10 != uBCacheCT || gulGamma != uGammaCacheCT )
  {
    vGetBlendInfo(4u, a11, a9, (struct _BLENDINFO *)v19);
    vClearTypeLookupTableLoop(4u, a11, (struct _BLENDINFO *)v19, a9, a10);
  }
  v14 = (unsigned __int8 *)(v12 + a1);
  v15 = (_DWORD *)(a4 + 4LL * a5);
  while ( a8 )
  {
    v17 = v14;
    for ( i = v15; i < &v15[v22]; ++i )
      *i = *((_DWORD *)&aulCacheCT + *v17++);
    --a8;
    v14 += a3;
    v15 = (_DWORD *)((char *)v15 + a7);
  }
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v13);
    GreReleaseSemaphoreInternal(v13);
  }
}
