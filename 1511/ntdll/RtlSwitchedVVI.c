/*
 * XREFs of RtlSwitchedVVI @ 0x180073CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x180073FEC (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x1800740F0 (RtlpVerGetConditionMask.c)
 *     SwitchedRtlGetVersion @ 0x180074114 (SwitchedRtlGetVersion.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // ax
  unsigned int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  int ConditionMask; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v21, 0, 0x11CuLL);
  v21[0] = 284;
  result = SwitchedRtlGetVersion(v21);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v14 = *(_WORD *)(a1 + 280);
      if ( v14 )
      {
        v15 = 0;
        v16 = v14;
        do
        {
          v17 = 1 << v15;
          if ( (v16 & (1 << v15)) != 0 )
          {
            if ( (a3 & 0x8000000000000000uLL) != 0 )
              ConditionMask = RtlpVerGetConditionMask(a3, 64LL);
            else
              ConditionMask = 0;
            v19 = ConditionMask - 6;
            if ( v19 )
            {
              if ( v19 != 1 )
                return 3221225485LL;
              if ( (v21[70] & (unsigned __int16)v17) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v17) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v15;
        }
        while ( v15 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(a3, 64LL) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(a3, 2LL);
      else
        v9 = (unsigned __int8)(a3 >> 4);
      v10 = (unsigned __int8)RtlpVerCompare(v9, *(_DWORD *)(a1 + 4), v21[1], (unsigned int)v20, 0) == 0;
      v8 = v20[0];
      if ( v10 )
      {
        if ( !v20[0] )
          return 3221225561LL;
      }
      else if ( !v20[0] )
      {
LABEL_9:
        if ( (v4 & 4) != 0 )
        {
          v13 = (a3 & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(a3, 4LL) : BYTE2(a3);
          if ( !(unsigned __int8)RtlpVerCompare(v13, *(_DWORD *)(a1 + 12), v21[3], (unsigned int)v20, 0) )
            return 3221225561LL;
        }
        if ( (v4 & 8) != 0 )
        {
          v11 = (a3 & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(a3, 8LL) : 0;
          if ( !(unsigned __int8)RtlpVerCompare(v11, *(_DWORD *)(a1 + 16), v21[4], (unsigned int)v20, 0) )
            return 3221225561LL;
        }
        if ( v4 < 0 )
        {
          v12 = (a3 & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(a3, 128LL) : 0;
          if ( !(unsigned __int8)RtlpVerCompare(
                                   v12,
                                   *(unsigned __int8 *)(a1 + 282),
                                   BYTE2(v21[70]),
                                   (unsigned int)v20,
                                   0) )
            return 3221225561LL;
        }
        return 0LL;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_15;
    if ( v9 == 1 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(a3, 1LL);
      else
        v9 = (unsigned __int8)(a3 >> 2);
    }
    v10 = (unsigned __int8)RtlpVerCompare(v9, *(_DWORD *)(a1 + 8), v21[2], (unsigned int)v20, 1) == 0;
    v8 = v20[0];
    if ( v10 )
    {
      if ( !v20[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_15:
      if ( !v8 )
        goto LABEL_9;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_17;
    if ( v9 == 1 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(a3, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), (unsigned int)v20, 0) )
    {
      v8 = v20[0];
LABEL_17:
      if ( !v8 )
        goto LABEL_9;
LABEL_18:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( (a3 & 0x8000000000000000uLL) != 0 )
            v9 = RtlpVerGetConditionMask(a3, 16LL);
          else
            v9 = 0;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v9,
                                 *(unsigned __int16 *)(a1 + 278),
                                 HIWORD(v21[69]),
                                 (unsigned int)v20,
                                 1) )
          return 3221225561LL;
      }
      goto LABEL_9;
    }
    if ( v20[0] )
      goto LABEL_18;
    return 3221225561LL;
  }
  return result;
}
