/*
 * XREFs of bDeleteDCInternal @ 0x1C005C1D0
 * Callers:
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     GreDeleteDC @ 0x1C005B5C0 (GreDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     UserReleaseDC @ 0x1C00118A0 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  int v9; // esi
  _QWORD v11[6]; // [rsp+20h] [rbp-58h] BYREF

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0]
    && (a2
     || a3
     || a4
     || *(_WORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1) + 12LL) <= 1u) )
  {
    v8 = bDeleteDCInternalWorker((struct XDCOBJ *)v11, a2, a3, a4);
    if ( !v8 && !a2 )
      v9 = 1;
  }
  else
  {
    EngSetLastError(0xAAu);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  if ( v9 )
    return (unsigned int)UserReleaseDC((__int64)a1);
  return v8;
}
