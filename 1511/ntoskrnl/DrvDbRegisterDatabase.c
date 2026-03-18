/*
 * XREFs of DrvDbRegisterDatabase @ 0x1405245A4
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1405251A4 (PiDrvDbRegisterNode.c)
 * Callees:
 *     DrvDbFindDatabaseNode @ 0x140447070 (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 */

__int64 __fastcall DrvDbRegisterDatabase(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  const UNICODE_STRING *v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = PiDrvDbCtx;
  v8 = 0;
  v12 = 0LL;
  if ( (int)DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &v12) >= 0 )
    return 0x40000000LL;
  if ( a5 )
    v8 = 16;
  return DrvDbCreateDatabaseNode(v7, a2, 0LL, a4, v8, PiDrvDbNodeActionCallback, a7, &v12);
}
