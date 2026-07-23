/*
 * XREFs of DrvDbRegisterDatabase @ 0x140579054
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140552028 (PiDrvDbRegisterNode.c)
 * Callees:
 *     DrvDbFindDatabaseNode @ 0x1404B7D3C (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 */

__int64 __fastcall DrvDbRegisterDatabase(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
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
