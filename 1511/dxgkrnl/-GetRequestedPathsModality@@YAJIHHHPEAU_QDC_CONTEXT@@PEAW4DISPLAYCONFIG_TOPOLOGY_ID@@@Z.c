/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB440
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB098 (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkGetPathsModality @ 0x1C00A6630 (DxgkGetPathsModality.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00AAB70 (DxgkGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _QDC_CONTEXT *a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6)
{
  struct _QDC_CONTEXT *v6; // rsi
  int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // rdi
  unsigned int v10; // r13d
  unsigned __int16 v11; // bx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 v15; // ax
  int PathsModality; // ebx
  __int64 v18; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v26[64]; // [rsp+50h] [rbp-88h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v27; // [rsp+90h] [rbp-48h]

  v6 = a5;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a1;
  v10 = a2;
  if ( !*((_DWORD *)a5 + 1) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1783LL;
    return 3221225507LL;
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v11 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v18 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v18 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v23 + 24) = v9;
        WdLogEvent5_WdAssertion(v23);
        return 3221225485LL;
      }
      v18 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v18, (unsigned int *)&a5, v25);
    v21 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v22 + 24) = v21;
      *(_QWORD *)(v22 + 32) = 2LL;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v11 = (unsigned __int16)a5;
    }
  }
  else
  {
    v11 = *((_DWORD *)a5 + 1);
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v26, v11, 0);
  if ( v27 )
    v15 = *((_WORD *)v27 + 11);
  else
    v15 = 0;
  if ( (unsigned int)v15 < *((_DWORD *)v6 + 1) )
  {
    v24 = WdLogNewEntry5_WdLowResource(v12, v27, v13, v14);
    *(_QWORD *)(v24 + 24) = *((unsigned int *)v6 + 1);
    WdLogEvent5_WdLowResource(v24);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v9, v27, 0LL);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(
                        (__int64)v27,
                        (v9 & 0xF) == 15,
                        v10,
                        v8,
                        v7,
                        (v9 & 0x200000) != 0,
                        v6);
      if ( PathsModality >= 0 )
        *(_DWORD *)a6 = *((_DWORD *)v27 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
  return (unsigned int)PathsModality;
}
