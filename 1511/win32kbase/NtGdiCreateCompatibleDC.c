/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C0025AB0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     HmgLockEx @ 0x1C0025B60 (HmgLockEx.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreSetLayout @ 0x1C0075DC0 (GreSetLayout.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(__int64 a1, __int64 a2)
{
  HDC v2; // rdi
  __int64 v3; // rbx
  HDC DisplayDC; // rax
  unsigned int v5; // r8d
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v2 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(1u, 0, 0);
  v8 = 0;
  LOBYTE(a2) = 1;
  v9 = 0;
  v7 = HmgLockEx(a1, a2, 0LL);
  if ( v7 )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v7) )
    {
      v3 = v7;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      v3 = 0LL;
      v7 = 0LL;
    }
    if ( v3 )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v3 + 48), 1LL, 0LL);
      v2 = DisplayDC;
      if ( DisplayDC )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(v3 + 80) + 312LL);
        if ( (v5 & 7) != 0 )
          GreSetLayout(DisplayDC, -1, v5);
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v7);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
  }
  return (__int64)v2;
}
