/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0019300
 * Callers:
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 * Callees:
 *     GetgptoWrap_0 @ 0x1C00017C8 (GetgptoWrap_0.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00346B0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, HDEV a2, struct SURFACE *a3, HDEV a4)
{
  __int64 v8; // rdx
  _QWORD *i; // rbx
  __int64 v10; // r8
  struct SURFACE *v11; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v14[5]; // [rsp+20h] [rbp-28h] BYREF
  HDEV v15; // [rsp+58h] [rbp+10h] BYREF
  HDEV v16; // [rsp+68h] [rbp+20h] BYREF

  v14[0] = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v15 = a2;
  v16 = a4;
  for ( i = *(_QWORD **)GetgptoWrap_0(); i; i = (_QWORD *)i[1] )
  {
    v11 = (struct SURFACE *)i[4];
    if ( v11 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v16);
        PDEVOBJ::vUnreferencePdev(&v15, 0LL);
      }
    }
    else if ( v11 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
        PDEVOBJ::vUnreferencePdev(&v16, 0LL);
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v14, v8, v10);
}
