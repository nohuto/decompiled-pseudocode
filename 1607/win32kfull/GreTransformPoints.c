/*
 * XREFs of GreTransformPoints @ 0x1C00FB364
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C005CF20 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     NtGdiTransformPoints @ 0x1C00FB220 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C01173D4 (xxxGetUpdateRect.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreTransformPoints(HDC a1, struct _POINTL *a2, struct _POINTL *a3, int a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-20h] BYREF

  v6 = a4;
  v7 = 0;
  v16[0] = 0LL;
  v16[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v17);
  XDCOBJ::vLock((XDCOBJ *)v16, a1);
  if ( v16[0] )
  {
    if ( (int)v6 > 0 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 68LL);
      v15 = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 352LL) & 0xE000) != 0 || (a5 != 0 ? 0xFFFFFE02 : 0) != 0xFFFFFE02 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v16, a5 != 0 ? 516 : 1026, 0);
        v10 = v13;
      }
      else
      {
        v10 = v16[0] + 336LL;
        v13 = v16[0] + 336LL;
      }
      if ( v10 && a5 >= 0 )
      {
        if ( a5 <= 1 )
        {
          v11 = EXFORMOBJ::bXform((EXFORMOBJ *)&v13, a2, a3, v6);
        }
        else
        {
          if ( a5 != 2 )
            goto LABEL_15;
          v11 = EXFORMOBJ::bXform((EXFORMOBJ *)&v13, a2, (struct _POINTFIX *)a3, v6);
        }
        v7 = v11;
      }
    }
    else
    {
      v7 = 1;
    }
  }
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
  return v7;
}
