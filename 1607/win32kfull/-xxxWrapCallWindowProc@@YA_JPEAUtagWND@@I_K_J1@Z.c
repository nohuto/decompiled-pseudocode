/*
 * XREFs of ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0100E30
 * Callers:
 *     <none>
 * Callees:
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0100F18 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWrapCallWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  if ( !(unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return 0LL;
  LOBYTE(v9) = 7;
  v12 = HMValidateHandleNoRip(a5, v9, v10, v11);
  if ( v12 )
  {
    if ( (a2 & 0x1FFFF) >= 0x400 )
      return SfnDWORD((__int64 *)a1, a2, a3, a4, *(_QWORD *)(v12 + 48), *(_QWORD *)(gpsi + 744LL));
    else
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               a4,
               *(_QWORD *)(v12 + 48),
               *(_QWORD *)(gpsi + 744LL),
               (*(unsigned __int8 *)(v12 + 56) >> 1) & 1,
               0LL);
  }
  else if ( (a2 & 0x1FFFF) < 0x400 )
  {
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64, unsigned __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
             a1,
             a2,
             a3,
             a4,
             a5,
             *(_QWORD *)(gpsi + 560LL),
             a5 == *(_QWORD *)(gpsi + 480LL),
             0LL);
  }
  else
  {
    return SfnDWORD((__int64 *)a1, a2, a3, a4, a5, *(_QWORD *)(gpsi + 560LL));
  }
}
