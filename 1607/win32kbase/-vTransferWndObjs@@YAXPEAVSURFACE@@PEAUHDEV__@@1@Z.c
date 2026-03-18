/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00CA318
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     GetgptoWrap_0 @ 0x1C00017D8 (GetgptoWrap_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, struct _LIST_ENTRY *a2, HDEV a3)
{
  __int64 i; // rbx
  __int64 j; // rdi
  HDEV v8; // [rsp+48h] [rbp+10h] BYREF
  struct _LIST_ENTRY *v9; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v9 = a2;
  v8 = a3;
  for ( i = *(_QWORD *)GetgptoWrap_0(); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v8);
        PDEVOBJ::vUnreferencePdev(&v9, 0);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v10);
}
