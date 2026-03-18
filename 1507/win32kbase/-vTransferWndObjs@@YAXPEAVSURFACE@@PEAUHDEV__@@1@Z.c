/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00BCF68
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00B9908 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     GetgptoWrap_0 @ 0x1C00017C8 (GetgptoWrap_0.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00346B0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, __int64 a2, HDEV a3)
{
  __int64 v6; // rdx
  __int64 i; // rbx
  __int64 v8; // r8
  __int64 j; // rdi
  HDEV v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v11 = a2;
  v10 = a3;
  for ( i = *(_QWORD *)GetgptoWrap_0(); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v10);
        PDEVOBJ::vUnreferencePdev(&v11, 0);
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12, v6, v8);
}
