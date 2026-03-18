/*
 * XREFs of ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C00D7644
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00C93DC (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00D7698 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6864 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D696C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D7088 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D7304 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetSPIMetrics(struct _UNICODE_STRING *a1, __int64 a2, struct tagLOGFONTW *a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v7; // ebx
  int lfWidth; // edi
  void *v10; // rax
  unsigned int v11; // ecx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx

  v4 = a4;
  if ( (_DWORD)a2 != 44 )
  {
    switch ( (_DWORD)a2 )
    {
      case '"':
        return SPISetIconTitleFont(a1, a3, a4);
      case '*':
        return xxxSPISetNCMetrics(a1, (struct tagNONCLIENTMETRICSW *)a3, a4);
      case '.':
        return SPISetIconMetrics(a1, (struct tagICONMETRICSW *)a3, a4);
    }
    if ( (_DWORD)a2 != 73 )
    {
      UserSetLastError(87);
      return 0LL;
    }
    lfWidth = a3->lfWidth;
    v10 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
    DwmAsyncNotifyAnimationChange(v10, lfWidth, 0LL);
    if ( v4 )
    {
      v11 = SetWindowMetricInt(a1, 0x95u, lfWidth);
      if ( !v11 )
        return 0LL;
    }
    else
    {
      v11 = 0;
    }
    if ( lfWidth )
      gdwPUDFlags |= 0x10000u;
    else
      gdwPUDFlags &= ~0x10000u;
    return v11;
  }
  v7 = 0;
  if ( !(_DWORD)a4
    || (v12 = SetWindowMetricInt(a1, 0x92u, a3->lfWidth),
        v13 = SetWindowMetricInt(a1, 0x93u, a3->lfEscapement) & v12,
        v14 = SetWindowMetricInt(a1, 0x94u, a3->lfOrientation) & v13,
        (v7 = SetWindowMetricInt(a1, 0x96u, a3->lfWeight) & v14) != 0) )
  {
    xxxSetAndDrawMinMetrics(a1, (struct tagMINIMIZEDMETRICS *)a3);
  }
  return v7;
}
