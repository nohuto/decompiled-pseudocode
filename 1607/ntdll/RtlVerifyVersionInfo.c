/*
 * XREFs of RtlVerifyVersionInfo @ 0x180085AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x18002B6C8 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18002B7CC (RtlpVerGetConditionMask.c)
 *     RtlGetVersion @ 0x18002EE50 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  bool v8; // al
  int v9; // edi
  unsigned __int16 v10; // ax
  unsigned int v11; // r10d
  int v12; // r11d
  int v13; // r9d
  int ConditionMask; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v21, 0, 0x11CuLL);
  v21[0] = 284;
  result = RtlGetVersion((__int64)v21);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v10 = *(_WORD *)(a1 + 280);
      if ( v10 )
      {
        v11 = 0;
        v12 = v10;
        do
        {
          v13 = 1 << v11;
          if ( (v12 & (1 << v11)) != 0 )
          {
            if ( (a3 & 0x8000000000000000uLL) != 0 )
              ConditionMask = RtlpVerGetConditionMask(a3, 0x40u);
            else
              ConditionMask = 0;
            v15 = ConditionMask - 6;
            if ( v15 )
            {
              if ( v15 != 1 )
                return 3221225485LL;
              if ( (v21[70] & (unsigned __int16)v13) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v13) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v11;
        }
        while ( v11 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(a3, 0x40u) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(a3, 2u);
      else
        v9 = (unsigned __int8)(a3 >> 4);
      v16 = !RtlpVerCompare(v9, *(_DWORD *)(a1 + 4), v21[1], v20, 0);
      v8 = v20[0];
      if ( v16 )
      {
        if ( !v20[0] )
          return 3221225561LL;
      }
      else if ( !v20[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(a3, 1u);
      else
        v9 = (unsigned __int8)(a3 >> 2);
    }
    v16 = !RtlpVerCompare(v9, *(_DWORD *)(a1 + 8), v21[2], v20, 1);
    v8 = v20[0];
    if ( v16 )
    {
      if ( !v20[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (a3 & 0x8000000000000000uLL) != 0 )
          v9 = RtlpVerGetConditionMask(a3, 0x20u);
        else
          v9 = 0;
      }
      if ( !RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), v20, 0) )
      {
        if ( !v20[0] )
          return 3221225561LL;
LABEL_9:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( (a3 & 0x8000000000000000uLL) != 0 )
              v9 = RtlpVerGetConditionMask(a3, 0x10u);
            else
              v9 = 0;
          }
          if ( !RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 278), HIWORD(v21[69]), v20, 1) )
            return 3221225561LL;
        }
LABEL_10:
        if ( (v4 & 4) == 0
          || ((a3 & 0x8000000000000000uLL) != 0 ? (v18 = RtlpVerGetConditionMask(a3, 4u)) : (v18 = BYTE2(a3)),
              RtlpVerCompare(v18, *(_DWORD *)(a1 + 12), v21[3], v20, 0)) )
        {
          if ( (v4 & 8) == 0
            || ((a3 & 0x8000000000000000uLL) != 0 ? (v19 = RtlpVerGetConditionMask(a3, 8u)) : (v19 = 0),
                RtlpVerCompare(v19, *(_DWORD *)(a1 + 16), v21[4], v20, 0)) )
          {
            if ( v4 >= 0 )
              return 0LL;
            v17 = (a3 & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(a3, 0x80u) : 0;
            if ( RtlpVerCompare(v17, *(unsigned __int8 *)(a1 + 282), BYTE2(v21[70]), v20, 0) )
              return 0LL;
          }
        }
        return 3221225561LL;
      }
      v8 = v20[0];
    }
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_9;
  }
  return result;
}
