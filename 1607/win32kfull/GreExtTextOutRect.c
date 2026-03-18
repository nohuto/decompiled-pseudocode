/*
 * XREFs of GreExtTextOutRect @ 0x1C0039588
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C0039680 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00391A0 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C004BFB0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // edi
  unsigned int v5; // eax
  _QWORD v7[2]; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v9; // [rsp+58h] [rbp-19h] BYREF
  __int64 v10; // [rsp+68h] [rbp-9h]
  int v11; // [rsp+70h] [rbp-1h]
  _BYTE v12[48]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+37h]
  __int64 v14; // [rsp+B0h] [rbp+3Fh]
  __int64 v15; // [rsp+B8h] [rbp+47h]

  v3 = 0;
  v7[0] = 0LL;
  v7[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v8);
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] && (*(_DWORD *)(v7[0] + 36LL) & 0x10000) == 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v12);
    v10 = 0LL;
    v9 = 0LL;
    v11 = 0;
    DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v9);
    v15 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v9, (struct XDCOBJ *)v7, 0) )
      v5 = ExtTextOutRect((struct XDCOBJ *)v7, a2);
    else
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)v7);
    v3 = v5;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v9);
    DCOBJ::~DCOBJ((DCOBJ *)v12);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  return v3;
}
