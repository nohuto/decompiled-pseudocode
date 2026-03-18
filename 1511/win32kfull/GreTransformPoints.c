/*
 * XREFs of GreTransformPoints @ 0x1C00DC714
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 *     NtGdiTransformPoints @ 0x1C00DC5D0 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C00F5B84 (xxxGetUpdateRect.c)
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreTransformPoints(__int64 a1, struct _POINTL *a2, struct _POINTL *a3, int a4, int a5)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  struct _POINTL *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+28h] [rbp-18h]
  int v15; // [rsp+2Ch] [rbp-14h]
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+38h] [rbp-8h]
  int v18; // [rsp+3Ch] [rbp-4h]

  v5 = 0;
  v6 = a4;
  v14 = 0;
  v8 = a2;
  v15 = 0;
  LOBYTE(a2) = 1;
  v13 = HmgLockEx(a1, a2, 0LL);
  if ( v13 )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v13) )
    {
      v9 = v13;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      v9 = 0LL;
      v13 = 0LL;
    }
    if ( v9 )
    {
      if ( (int)v6 <= 0 )
      {
        v5 = 1;
      }
      else
      {
        v17 = *(_DWORD *)(*(_QWORD *)(v9 + 80) + 68LL);
        v18 = *(_DWORD *)(*(_QWORD *)(v9 + 80) + 312LL) & 1;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 352LL) & 0xE000) != 0 || (a5 != 0 ? 0xFFFFFE02 : 0) != 0xFFFFFE02 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)&v13, a5 != 0 ? 516 : 1026, 0);
          v9 = v13;
          v10 = v16;
        }
        else
        {
          v10 = v9 + 336;
          v16 = v9 + 336;
        }
        if ( !v10 || a5 < 0 )
          goto LABEL_14;
        if ( a5 <= 1 )
        {
          v11 = EXFORMOBJ::bXform((EXFORMOBJ *)&v16, v8, a3, v6);
LABEL_13:
          v9 = v13;
          v5 = v11;
          goto LABEL_14;
        }
        if ( a5 == 2 )
        {
          v11 = EXFORMOBJ::bXform((EXFORMOBJ *)&v16, v8, (struct _POINTFIX *)a3, v6);
          goto LABEL_13;
        }
      }
LABEL_14:
      if ( v9 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v13);
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      }
    }
  }
  return v5;
}
