/*
 * XREFs of GrePolyTextOutW @ 0x1C015CE5C
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C00C67A0 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  char *v10; // r8
  _QWORD v12[6]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[32]; // [rsp+90h] [rbp-70h] BYREF
  char v14[80]; // [rsp+B0h] [rbp-50h] BYREF
  char v15; // [rsp+100h] [rbp+0h] BYREF

  v5 = a3;
  v7 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( !v12[0] || (*(_DWORD *)(v12[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v12, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = a2 + 8;
        while ( 1 )
        {
          v10 = &v15;
          if ( ((30 * *(_DWORD *)v9 + 7) & 0xFFFFFFF8) > 0xC0 )
            v10 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)v12,
                                *(_DWORD *)(v9 - 8),
                                *(_DWORD *)(v9 - 4),
                                *(_DWORD *)(v9 + 16),
                                (struct tagRECT *)(v9 + 20),
                                *(unsigned __int16 **)(v9 + 8),
                                *(_DWORD *)v9,
                                *(struct _BRUSHOBJ **)(v9 + 40),
                                *(unsigned __int8 *)(*(_QWORD *)(v12[0] + 80LL) + 73LL),
                                v10,
                                a4) )
            break;
          v9 += 56LL;
          if ( v9 - 8 >= v8 )
            goto LABEL_13;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
    }
LABEL_13:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
    DCOBJ::~DCOBJ((DCOBJ *)v14);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v7;
}
