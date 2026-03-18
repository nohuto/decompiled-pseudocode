/*
 * XREFs of GrePolyTextOutW @ 0x1C0159D40
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C0032A60 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00488E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  ERECTL *v10; // r8
  _QWORD v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v13[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v14[32]; // [rsp+90h] [rbp-70h] BYREF
  char v15[80]; // [rsp+B0h] [rbp-50h] BYREF
  char v16; // [rsp+100h] [rbp+0h] BYREF

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
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v12, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = a2 + 8;
        while ( 1 )
        {
          v10 = (ERECTL *)&v16;
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
                                *(int **)(v9 + 40),
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
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
    DCOBJ::~DCOBJ((DCOBJ *)v15);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v13);
  return v7;
}
