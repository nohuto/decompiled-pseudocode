/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C006A120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CalcVisRgn @ 0x1C006AE10 (CalcVisRgn.c)
 *     MirrorRegion @ 0x1C0076E60 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  HRGN v7; // rcx
  __int64 v8; // rdi
  unsigned int RgnBox; // eax
  unsigned int v10; // ebx
  HRGN v12; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[16]; // [rsp+28h] [rbp-20h] BYREF

  v12 = a2;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v8 = v5;
  if ( !v5 )
    goto LABEL_13;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_13;
  }
  v7 = v12;
  if ( !v12 )
  {
    v10 = 0;
    UserSetLastError(87);
    goto LABEL_11;
  }
  if ( (a3 & 2) != 0 )
  {
    CalcVisRgn(&v12);
    RgnBox = GreGetRgnBox(v12, v13);
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 200);
    if ( !v6 || (*(_BYTE *)(v5 + 45) & 8) != 0 )
      goto LABEL_13;
    RgnBox = GreCombineRgn(v12, v6, 0LL, 5LL);
  }
  v10 = RgnBox;
  if ( !RgnBox )
  {
LABEL_13:
    v10 = 0;
    goto LABEL_11;
  }
  if ( (*(_WORD *)(v8 + 66) & 0x3FFF) != 0x29D )
    v10 = GreOffsetRgn(v12, (unsigned int)-*(_DWORD *)(v8 + 112), (unsigned int)-*(_DWORD *)(v8 + 116));
  LOBYTE(v7) = ((a3 & 1) == 0) & (*(_BYTE *)(v8 + 50) >> 6);
  if ( (_BYTE)v7 )
    MirrorRegion(v8, v12, 0LL);
LABEL_11:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v10;
}
