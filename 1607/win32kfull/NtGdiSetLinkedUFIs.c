/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x1C0268340
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02A56EC (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, char *Src, unsigned int a3)
{
  __int64 v3; // rdi
  _BYTE *v6; // rbx
  unsigned int v7; // r14d
  size_t v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[6]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp-50h] BYREF

  v3 = a3;
  v6 = 0LL;
  v7 = 1;
  if ( !Src && a3 )
    return 0LL;
  if ( a3 <= 4 )
  {
    v6 = v13;
  }
  else
  {
    if ( a3 <= 0x4E2000 )
      v6 = PALLOCMEM2(8 * a3, 1684629063LL, 0);
    if ( !v6 )
      return 0LL;
  }
  if ( Src )
  {
    v9 = 8 * v3;
    if ( 8 * v3 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v9] > W32UserProbeAddress || &Src[v9] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(v6, Src, v9);
  }
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
    v7 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)v12, (struct _UNIVERSAL_FONT_ID *)v6, v3);
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  if ( v6 != v13 )
    Win32FreePool(v6, v10, v11);
  return v7;
}
