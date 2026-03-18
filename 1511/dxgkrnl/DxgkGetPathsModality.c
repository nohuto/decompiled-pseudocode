/*
 * XREFs of DxgkGetPathsModality @ 0x1C00A6630
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00AAB70 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB440 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000AFB4 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2334 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00A2378 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // r8
  int AllPaths; // eax
  CCD_TOPOLOGY *v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // eax
  unsigned int i; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  _DWORD *v24; // [rsp+78h] [rbp-90h]
  bool v25; // [rsp+80h] [rbp-88h]
  int v26; // [rsp+84h] [rbp-84h]
  int v27; // [rsp+88h] [rbp-80h]
  int v28; // [rsp+8Ch] [rbp-7Ch]
  int v29; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int16 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  _DWORD *v37; // [rsp+D8h] [rbp-30h]
  bool v38; // [rsp+E0h] [rbp-28h]
  int v39; // [rsp+E4h] [rbp-24h]
  int v40; // [rsp+E8h] [rbp-20h]
  int v41; // [rsp+ECh] [rbp-1Ch]
  int v42; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v43; // [rsp+100h] [rbp-8h]
  __int64 v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int16 v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  __int64 v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  _DWORD *v50; // [rsp+138h] [rbp+30h]
  bool v51; // [rsp+140h] [rbp+38h]
  int v52; // [rsp+144h] [rbp+3Ch]
  int v53; // [rsp+148h] [rbp+40h]
  int v54; // [rsp+14Ch] [rbp+44h]
  int v55; // [rsp+158h] [rbp+50h] BYREF
  __int64 v56; // [rsp+160h] [rbp+58h]
  __int64 v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int16 v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  _DWORD *v63; // [rsp+198h] [rbp+90h]
  bool v64; // [rsp+1A0h] [rbp+98h]
  int v65; // [rsp+1A4h] [rbp+9Ch]
  int v66; // [rsp+1A8h] [rbp+A0h]
  int v67; // [rsp+1ACh] [rbp+A4h]
  __int64 retaddr; // [rsp+1D0h] [rbp+C8h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2081);
  v69 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v69, 9);
  v7 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v7 = a2;
  if ( (v3 & 0x800000) != 0 )
    v7[6] |= 2u;
  if ( (v3 & 0x14000) == 0 )
  {
    if ( (v3 & 0x100) == 0 )
    {
      if ( (v3 & 0x10) != 0 )
      {
        LODWORD(v19[0]) = 0;
        memset(&v19[1], 0, 24);
        v25 = v7 == 0LL;
        LOWORD(v20) = 0;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = v7;
        v26 = 0;
        v27 = 1;
        v28 = 0;
        AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)v19, a3);
        v9 = (CCD_TOPOLOGY *)v19;
        goto LABEL_12;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v37 = v7;
        v29 = 0;
        v30 = 0LL;
        v31 = 0LL;
        v38 = v7 == 0LL;
        v32 = 0LL;
        v33 = 0;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v39 = 0;
        v40 = 1;
        v41 = 0;
        AllPaths = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v29, (v3 & 0x80000) != 0, 0, (v3 & 0x100000) != 0, a3);
        v9 = (CCD_TOPOLOGY *)&v29;
        goto LABEL_12;
      }
      if ( (v3 & 0xF) != 0 )
      {
        v63 = v7;
        v55 = 0;
        v56 = 0LL;
        v64 = v7 == 0LL;
        v57 = 0LL;
        v58 = 0LL;
        v59 = 0;
        v60 = 0LL;
        v61 = 0LL;
        v62 = 0LL;
        v65 = 0;
        v66 = 1;
        v67 = 0;
        AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v55, v3 & 0x30AF, a3);
        v9 = (CCD_TOPOLOGY *)&v55;
LABEL_12:
        v10 = AllPaths;
        if ( AllPaths < 0 )
        {
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v9);
          goto LABEL_16;
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v9);
        goto LABEL_14;
      }
      if ( (v3 & 0x400000) != 0 )
      {
        v10 = 0;
LABEL_14:
        if ( v10 < 0 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v18 + 24) = 202LL;
          WdLogEvent5_WdAssertion(v18);
        }
        goto LABEL_16;
      }
LABEL_36:
      v10 = -1073741811;
      goto LABEL_16;
    }
    if ( (v3 & 0xFFFFFEFF) == 0 )
    {
      v42 = 0;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v51 = v7 == 0LL;
      v46 = 0;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      v50 = v7;
      v52 = 0;
      v53 = 1;
      v54 = 0;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v42);
      v9 = (CCD_TOPOLOGY *)&v42;
      goto LABEL_12;
    }
LABEL_35:
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = v3;
    WdLogEvent5_WdAssertion(v17);
    goto LABEL_36;
  }
  if ( (v3 & 0xFFFEBFFF) != 0 )
    goto LABEL_35;
  v14 = 0;
  if ( (v3 & 0x4000) != 0 )
    v14 = 2;
  if ( (v3 & 0x10000) != 0 )
    v14 |= 4u;
  for ( i = 0; i < *((unsigned __int16 *)v7 + 10); ++i )
  {
    v16 = *(_QWORD *)&v7[54 * i + 56];
    if ( v16 )
      *(_DWORD *)(v16 + 240) |= v14;
  }
  v10 = 0;
LABEL_16:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v69, 10);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2081);
  return (unsigned int)v10;
}
