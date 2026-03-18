/*
 * XREFs of GetHDevName @ 0x1C00475E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     DrvGetHdevName @ 0x1C0047700 (DrvGetHdevName.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall GetHDevName(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE *v10; // rcx
  _OWORD v12[3]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v13; // [rsp+70h] [rbp-38h]

  v4 = 0;
  v5 = 0LL;
  v6 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v7 = qword_1C0102D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0102D50;
    v8 = a1 >> 16;
    if ( ((_WORD)v8 == *(_WORD *)(v7 + 18)
       || (_WORD)v8 == 0xFFFF
       || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v8, v6, a3))
      && (*(_BYTE *)(v7 + 17) & 1) == 0
      && *(_BYTE *)(v7 + 16) == 12 )
    {
      v5 = *(_QWORD *)v7;
    }
  }
  if ( !v5 )
  {
    UserSetLastError(1461LL, v6);
    return 0LL;
  }
  v9 = *(_QWORD *)(v5 + 168);
  if ( !v9 )
    return 0LL;
  if ( (unsigned int)DrvGetHdevName(v9, v12) )
  {
    HIWORD(v13) = 0;
    v4 = 1;
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (_BYTE *)a2;
    if ( a2 >= (unsigned __int64)W32UserProbeAddress )
      v10 = W32UserProbeAddress;
    *v10 = *v10;
    v10[63] = v10[63];
    *(_OWORD *)a2 = v12[0];
    *(_OWORD *)(a2 + 16) = v12[1];
    *(_OWORD *)(a2 + 32) = v12[2];
    *(_OWORD *)(a2 + 48) = v13;
  }
  return v4;
}
