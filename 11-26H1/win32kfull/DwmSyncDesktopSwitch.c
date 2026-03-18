/*
 * XREFs of DwmSyncDesktopSwitch @ 0x14014A880
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14014C610 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmSyncDesktopSwitch(PVOID Object, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v10[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int64 v14; // [rsp+68h] [rbp-18h]

  v3 = a3;
  v6 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    v6 = DwmSyncLPCAllowed();
    if ( v6 >= 0 )
    {
      memset(v10, 0, sizeof(v10));
      v11 = 0LL;
      WORD2(v10[0]) = 0x8000;
      v9 = 56LL;
      LODWORD(v10[0]) = 3670032;
      v12 = 1073741839;
      v14 = a2;
      v13 = v3;
      v7 = ((__int64 (__fastcall *)(PVOID, __int64, _OWORD *, _OWORD *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
             Object,
             0x20000LL,
             v10,
             v10,
             &v9,
             0LL);
      v6 = v7;
      if ( v7 >= 0 && (v7 == 192 || v7 == 258 || BYTE4(v10[0]) != 2) )
        v6 = -1073741823;
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
