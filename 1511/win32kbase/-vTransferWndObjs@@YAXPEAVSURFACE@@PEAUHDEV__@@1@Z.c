/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00BE728
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00BB31C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     GetgptoWrap_0 @ 0x1C0001768 (GetgptoWrap_0.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vTransferWndObjs(
        struct SURFACE *a1,
        struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *a2,
        HDEV a3)
{
  __int64 v6; // rdx
  __int64 i; // rbx
  __int64 v8; // r8
  __int64 j; // rdi
  HDEV v10; // [rsp+48h] [rbp+10h] BYREF
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v11; // [rsp+50h] [rbp+18h] BYREF
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
