/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006C980
 * Callers:
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 * Callees:
 *     GetgptoWrap_0 @ 0x1C00017D8 (GetgptoWrap_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, struct _LIST_ENTRY *a2, struct SURFACE *a3, struct _LIST_ENTRY *a4)
{
  _QWORD *i; // rbx
  struct SURFACE *v9; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v12[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v13; // [rsp+58h] [rbp+10h] BYREF
  struct _LIST_ENTRY *v14; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v13 = a2;
  v14 = a4;
  for ( i = *(_QWORD **)GetgptoWrap_0(); i; i = (_QWORD *)i[1] )
  {
    v9 = (struct SURFACE *)i[4];
    if ( v9 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
        PDEVOBJ::vUnreferencePdev(&v13, 0);
      }
    }
    else if ( v9 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v13);
        PDEVOBJ::vUnreferencePdev(&v14, 0);
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v12);
}
