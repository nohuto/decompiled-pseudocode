/*
 * XREFs of RtlVerifyVersionInfo @ 0x1800455E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x180042170 (RtlGetVersion.c)
 *     RtlpVerCompare @ 0x1800425D4 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x180042750 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  unsigned __int16 v8; // ax
  unsigned int v9; // r10d
  int v10; // r11d
  int v11; // r9d
  bool v12; // al
  int v13; // edi
  bool v14; // zf
  int ConditionMask; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v21, 0, 0x11CuLL);
  v21[0] = 284;
  result = RtlGetVersion(v21);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v8 = *(_WORD *)(a1 + 280);
      if ( v8 )
      {
        v9 = 0;
        v10 = v8;
        do
        {
          v11 = 1 << v9;
          if ( (v10 & (1 << v9)) != 0 )
          {
            if ( (a3 & 0x8000000000000000uLL) != 0 )
              ConditionMask = RtlpVerGetConditionMask(a3, 0x40u);
            else
              ConditionMask = 0;
            v16 = ConditionMask - 6;
            if ( v16 )
            {
              if ( v16 != 1 )
                return 3221225485LL;
              if ( (v21[70] & (unsigned __int16)v11) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v11) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v9;
        }
        while ( v9 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(a3, 0x40u) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v12 = 1;
    v20[0] = 1;
    v13 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v13 = RtlpVerGetConditionMask(a3, 2u);
      else
        v13 = (unsigned __int8)(a3 >> 4);
      v14 = !RtlpVerCompare(v13, *(_DWORD *)(a1 + 4), v21[1], v20, 0);
      v12 = v20[0];
      if ( v14 )
      {
        if ( !v20[0] )
          return 3221225561LL;
      }
      else if ( !v20[0] )
      {
        goto LABEL_19;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_15;
    if ( v13 == 1 )
    {
      if ( (a3 & 0x8000000000000000uLL) != 0 )
        v13 = RtlpVerGetConditionMask(a3, 1u);
      else
        v13 = (unsigned __int8)(a3 >> 2);
    }
    v14 = !RtlpVerCompare(v13, *(_DWORD *)(a1 + 8), v21[2], v20, 1);
    v12 = v20[0];
    if ( v14 )
    {
      if ( !v20[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_15:
      if ( !v12 )
        goto LABEL_19;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v13 == 1 )
      {
        if ( (a3 & 0x8000000000000000uLL) != 0 )
          v13 = RtlpVerGetConditionMask(a3, 0x20u);
        else
          v13 = 0;
      }
      if ( !RtlpVerCompare(v13, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), v20, 0) )
      {
        if ( !v20[0] )
          return 3221225561LL;
LABEL_18:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v13 == 1 )
          {
            if ( (a3 & 0x8000000000000000uLL) != 0 )
              v13 = RtlpVerGetConditionMask(a3, 0x10u);
            else
              v13 = 0;
          }
          if ( !RtlpVerCompare(v13, *(unsigned __int16 *)(a1 + 278), HIWORD(v21[69]), v20, 1) )
            return 3221225561LL;
        }
LABEL_19:
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
      v12 = v20[0];
    }
    if ( !v12 )
      goto LABEL_19;
    goto LABEL_18;
  }
  return result;
}
