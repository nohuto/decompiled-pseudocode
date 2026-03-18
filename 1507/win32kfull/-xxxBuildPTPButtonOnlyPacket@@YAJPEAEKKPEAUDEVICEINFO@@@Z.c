/*
 * XREFs of ?xxxBuildPTPButtonOnlyPacket@@YAJPEAEKKPEAUDEVICEINFO@@@Z @ 0x1C01CE8C0
 * Callers:
 *     ?xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z @ 0x1C01CE970 (-xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxProcessPointerEvent @ 0x1C01E131C (xxxProcessPointerEvent.c)
 */

__int64 __fastcall xxxBuildPTPButtonOnlyPacket(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int a3,
        struct DEVICEINFO *a4)
{
  unsigned int v6; // esi
  unsigned int v9[40]; // [rsp+50h] [rbp-C8h] BYREF

  v6 = (unsigned int)a1;
  memset(v9, 0, sizeof(v9));
  v9[2] = 5;
  if ( a4 )
    *(_QWORD *)&v9[6] = *(_QWORD *)a4;
  else
    *(_QWORD *)&v9[6] = 0LL;
  v9[5] = a3;
  xxxProcessPointerEvent(1uLL, 0, (unsigned int)v9, (struct tagPOINTEREVENTINT *)a2, v6, 0, 1, 1, 0LL);
  return 0LL;
}
