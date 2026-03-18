/*
 * XREFs of DwmAsyncDesktopFree @ 0x140248B44
 * Callers:
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncDesktopFree(PVOID Object, __int64 a2)
{
  unsigned int v3; // ebx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+40h] [rbp-28h]

  v3 = -1073741823;
  if ( Object )
  {
    v6[0] = 0LL;
    *(_QWORD *)((char *)&v6[1] + 4) = a2;
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 3407884;
    WORD2(v5[0]) = 0x8000;
    LODWORD(v6[1]) = 1073741840;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
