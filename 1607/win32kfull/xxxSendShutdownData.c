/*
 * XREFs of xxxSendShutdownData @ 0x1C01546B0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SfnCOPYDATA @ 0x1C0114500 (SfnCOPYDATA.c)
 *     _GetWindowIcon @ 0x1C0153630 (_GetWindowIcon.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  char *Prop; // rax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h]
  __int64 *v12; // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int64 WindowIcon; // [rsp+70h] [rbp-98h]
  unsigned __int16 v15[261]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v16[267]; // [rsp+282h] [rbp+17Ah] BYREF

  v2 = a2;
  if ( gspwndBSDR )
  {
    if ( a1 == 0xFFFF )
    {
LABEL_15:
      v12 = &v13;
      v13 = a1;
      v10 = 0LL;
      LODWORD(v11) = 1064;
      SfnCOPYDATA(
        (__int64 *)gspwndBSDR,
        809,
        v2,
        (__int64)&v10,
        *(_QWORD *)(gspwndBSDR + 144),
        *(_QWORD *)(gpsi + 744LL));
      return 0LL;
    }
    if ( !a2 )
    {
      WindowIcon = 0LL;
      v16[0] = 0;
      v15[0] = 0;
      v4 = ValidateHwndEx(a1, 0LL, 0LL);
      if ( v4 )
        *(_DWORD *)(v4 + 288) &= ~0x4000u;
      goto LABEL_15;
    }
    v5 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( v5 )
    {
      if ( *(_QWORD *)v5 == ghwndBlocking )
      {
        v2 = 2LL;
      }
      else if ( *(_DWORD *)(v5 + 304) != 1 )
      {
        return 0LL;
      }
      *(_DWORD *)(v5 + 288) |= 0x4000u;
      WindowIcon = GetWindowIcon(v5, 1);
      v6 = *(_DWORD *)(v5 + 216);
      if ( v6 )
      {
        v7 = ((unsigned __int64)v6 >> 1) + 1;
        if ( v7 > 0x105 )
          v7 = 261LL;
        RtlStringCchCopyW((char *)v16, v7, *(char **)(v5 + 224));
      }
      else
      {
        v16[0] = 0;
      }
      Prop = (char *)GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
      if ( Prop )
        RtlStringCchCopyW((char *)v15, 261LL, Prop);
      else
        v15[0] = 0;
      goto LABEL_15;
    }
  }
  return 0LL;
}
