/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C26A8
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C245C (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C1250 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkGetPathsModality @ 0x1C00C2810 (DxgkGetPathsModality.c)
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
  unsigned __int16 v13; // ax
  int PathsModality; // ebx
  __int64 v16; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp-88h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v25; // [rsp+90h] [rbp-48h]

  v6 = a5;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a1;
  v10 = a2;
  if ( !*((_DWORD *)a5 + 1) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1797LL;
    return 3221225507LL;
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v11 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v16 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v16 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v21 + 24) = v9;
        WdLogEvent5_WdAssertion(v21);
        return 3221225485LL;
      }
      v16 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v16, (unsigned int *)&a5, v23);
    v19 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = v19;
      *(_QWORD *)(v20 + 32) = 2LL;
      WdLogEvent5_WdError(v20);
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
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v24, v11, 0);
  if ( v25 )
    v13 = *((_WORD *)v25 + 11);
  else
    v13 = 0;
  if ( (unsigned int)v13 < *((_DWORD *)v6 + 1) )
  {
    v22 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v22 + 24) = *((unsigned int *)v6 + 1);
    WdLogEvent5_WdLowResource(v22);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v9, v25, 0LL);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(
                        (__int64)v25,
                        (v9 & 0xF) == 15,
                        v10,
                        v8,
                        v7,
                        (v9 & 0x200000) != 0,
                        v6);
      if ( PathsModality >= 0 )
        *(_DWORD *)a6 = *((_DWORD *)v25 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v24);
  return (unsigned int)PathsModality;
}
