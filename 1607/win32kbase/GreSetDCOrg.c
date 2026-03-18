/*
 * XREFs of GreSetDCOrg @ 0x1C0035760
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0028CB0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C002D2FC (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDCOrg(unsigned int a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v8; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  char *v11; // rcx
  DC *v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+2Ch] [rbp-24h]
  _BYTE v16[32]; // [rsp+30h] [rbp-20h] BYREF

  v14 = 0;
  v15 = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v16);
  v8 = 1;
  v9 = (_DWORD *)HmgShareLock(a1, 1);
  v13 = (DC *)v9;
  if ( v9 )
  {
    if ( (v9[10] & 1) != 0 )
      v10 = v9 + 354;
    else
      v10 = v9 + 352;
    *v10 = a2;
    if ( (*((_DWORD *)v13 + 10) & 1) != 0 )
      v11 = (char *)v13 + 1416;
    else
      v11 = (char *)v13 + 1408;
    *((_DWORD *)v11 + 1) = a3;
    DC::vCalcFillOrigin(v13);
    if ( a4 )
      *((_OWORD *)v13 + 89) = *a4;
    if ( v13 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v13);
      HmgDecrementShareReferenceCount((unsigned int *)v13);
    }
  }
  else
  {
    v8 = 0;
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v16);
  return v8;
}
