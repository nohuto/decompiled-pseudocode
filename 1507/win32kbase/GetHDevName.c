/*
 * XREFs of GetHDevName @ 0x1C000E070
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetHdevName @ 0x1C000E190 (DrvGetHdevName.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall GetHDevName(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE *v8; // rcx
  _OWORD v10[3]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v11; // [rsp+70h] [rbp-38h]

  v3 = 0;
  v4 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = qword_1C01003E8 + (unsigned int)(unsigned __int16)a1 * dword_1C01003F0;
    v6 = a1 >> 16;
    if ( ((_WORD)v6 == *(_WORD *)(v5 + 18) || (_WORD)v6 == 0xFFFF || !(_WORD)v6 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v5 + 17) & 1) == 0
      && *(_BYTE *)(v5 + 16) == 12 )
    {
      v4 = *(_QWORD *)v5;
    }
  }
  if ( !v4 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  v7 = *(_QWORD *)(v4 + 168);
  if ( !v7 )
    return 0LL;
  if ( (unsigned int)DrvGetHdevName(v7, v10) )
  {
    HIWORD(v11) = 0;
    v3 = 1;
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a2;
    if ( a2 >= (unsigned __int64)W32UserProbeAddress )
      v8 = W32UserProbeAddress;
    *v8 = *v8;
    v8[63] = v8[63];
    *(_OWORD *)a2 = v10[0];
    *(_OWORD *)(a2 + 16) = v10[1];
    *(_OWORD *)(a2 + 32) = v10[2];
    *(_OWORD *)(a2 + 48) = v11;
  }
  return v3;
}
