/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C00853F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C007C8FC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, _OWORD *a2)
{
  _BYTE *v4; // rcx
  _QWORD v5[6]; // [rsp+20h] [rbp-C8h] BYREF
  _OWORD v6[9]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v7; // [rsp+100h] [rbp+18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v7 = *(_QWORD *)(v5[0] + 48LL);
    v4 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v4 = (_BYTE *)W32UserProbeAddress;
    *v4 = *v4;
    v4[143] = v4[143];
    memset(v6, 0, sizeof(v6));
    vGetDeviceCaps((struct PDEVOBJ *)&v7, (struct _DEVCAPS *)v6);
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v6[0];
    a2[1] = v6[1];
    a2[2] = v6[2];
    a2[3] = v6[3];
    a2[4] = v6[4];
    a2[5] = v6[5];
    a2[6] = v6[6];
    a2[7] = v6[7];
    a2[8] = v6[8];
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return 1LL;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return 0LL;
  }
}
