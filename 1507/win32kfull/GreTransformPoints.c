/*
 * XREFs of GreTransformPoints @ 0x1C00DDF64
 * Callers:
 *     zzzSetCaretPos @ 0x1C0078090 (zzzSetCaretPos.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiTransformPoints @ 0x1C00DDE20 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C00EFDD4 (xxxGetUpdateRect.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreTransformPoints(HDC a1, struct _POINTL *a2, struct _POINTFIX *a3, int a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    if ( (int)v6 <= 0 )
    {
      v8 = 1;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v12, a5 != 0 ? 516 : 1026);
      if ( v11[0] && a5 >= 0 )
      {
        if ( a5 > 1 )
        {
          if ( a5 != 2 )
            goto LABEL_8;
          v9 = EXFORMOBJ::bXform((EXFORMOBJ *)v11, a2, a3, v6);
        }
        else
        {
          v9 = EXFORMOBJ::bXform((EXFORMOBJ *)v11, a2, (struct _POINTL *)a3, v6);
        }
        v8 = v9;
      }
    }
  }
LABEL_8:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v8;
}
