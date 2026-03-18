/*
 * XREFs of ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C013F478
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C005FFDC (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064D90 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00A9150 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ @ 0x1C000A9C8 (-CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  struct _LUID *v15; // rcx
  unsigned int v16; // ebx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v8 = DXGADAPTERSOURCEHASH::CalcCurrentTableSize(this);
  v13 = v8;
  if ( (unsigned int)v4 >= v8 )
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 32) = v13;
LABEL_5:
    *(_QWORD *)(v14 + 24) = v4;
    WdLogEvent5_WdWarning(v14);
    v16 = -1073741811;
    goto LABEL_7;
  }
  v15 = (struct _LUID *)(*((_QWORD *)this + 5) + 16 * v4);
  if ( (v15[1].HighPart & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v15, v9, v11, v12);
    goto LABEL_5;
  }
  v16 = 0;
  *a3 = *v15;
  *a4 = v15[1].LowPart;
LABEL_7:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return v16;
}
