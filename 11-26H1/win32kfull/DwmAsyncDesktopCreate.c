/*
 * XREFs of DwmAsyncDesktopCreate @ 0x1402910D8
 * Callers:
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncDesktopCreate(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-28h]

  v5 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    v8[0] = 0LL;
    LODWORD(v7[0]) = 3407884;
    WORD2(v7[0]) = 0x8000;
    LODWORD(v8[1]) = 1073741838;
    *(_QWORD *)((char *)&v8[1] + 4) = a2;
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
