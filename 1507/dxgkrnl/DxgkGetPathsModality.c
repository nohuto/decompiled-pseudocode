/*
 * XREFs of DxgkGetPathsModality @ 0x1C0062B00
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C0060640 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0060F28 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000A398 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0063D58 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0063D9C (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _QWORD *a2, unsigned __int16 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // r8
  int AllPaths; // eax
  CCD_TOPOLOGY *v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // eax
  unsigned int i; // r9d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  _QWORD *v26; // [rsp+78h] [rbp-90h]
  bool v27; // [rsp+80h] [rbp-88h]
  int v28; // [rsp+84h] [rbp-84h]
  int v29; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+98h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int16 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  _QWORD *v38; // [rsp+D8h] [rbp-30h]
  bool v39; // [rsp+E0h] [rbp-28h]
  int v40; // [rsp+E4h] [rbp-24h]
  int v41; // [rsp+E8h] [rbp-20h]
  int v42; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v43; // [rsp+100h] [rbp-8h]
  __int64 v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int16 v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  __int64 v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  _QWORD *v50; // [rsp+138h] [rbp+30h]
  bool v51; // [rsp+140h] [rbp+38h]
  int v52; // [rsp+144h] [rbp+3Ch]
  int v53; // [rsp+148h] [rbp+40h]
  int v54; // [rsp+158h] [rbp+50h] BYREF
  __int64 v55; // [rsp+160h] [rbp+58h]
  __int64 v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  __int16 v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  __int64 v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  _QWORD *v62; // [rsp+198h] [rbp+90h]
  bool v63; // [rsp+1A0h] [rbp+98h]
  int v64; // [rsp+1A4h] [rbp+9Ch]
  int v65; // [rsp+1A8h] [rbp+A0h]
  __int64 retaddr; // [rsp+1D0h] [rbp+C8h]
  __int64 v67; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2081);
  v67 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v67, 9);
  v9 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v9 = a2;
  if ( (v3 & 0x14000) == 0 )
  {
    if ( (v3 & 0x100) == 0 )
    {
      if ( (v3 & 0x10) != 0 )
      {
        LODWORD(v21[0]) = 0;
        memset(&v21[1], 0, 24);
        v27 = v9 == 0LL;
        LOWORD(v22) = 0;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = v9;
        v28 = 0;
        v29 = 1;
        AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)v21, a3);
        v11 = (CCD_TOPOLOGY *)v21;
        goto LABEL_10;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v38 = v9;
        v30 = 0;
        v31 = 0LL;
        v32 = 0LL;
        v39 = v9 == 0LL;
        v33 = 0LL;
        v34 = 0;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v40 = 0;
        v41 = 1;
        AllPaths = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v30, (v3 & 0x80000) != 0, 0, (v3 & 0x100000) != 0, a3);
        v11 = (CCD_TOPOLOGY *)&v30;
        goto LABEL_10;
      }
      if ( (v3 & 0xF) != 0 )
      {
        v62 = v9;
        v54 = 0;
        v55 = 0LL;
        v63 = v9 == 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0;
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        v64 = 0;
        v65 = 1;
        AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v54, v3 & 0x30AF, a3);
        v11 = (CCD_TOPOLOGY *)&v54;
LABEL_10:
        v12 = AllPaths;
        if ( AllPaths < 0 )
        {
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v11);
          goto LABEL_14;
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v11);
        goto LABEL_12;
      }
      if ( (v3 & 0x400000) != 0 )
      {
        v12 = 0;
LABEL_12:
        if ( v12 < 0 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v8);
          *(_QWORD *)(v20 + 24) = 195LL;
          WdLogEvent5_WdAssertion(v20);
        }
        goto LABEL_14;
      }
LABEL_34:
      v12 = -1073741811;
      goto LABEL_14;
    }
    if ( (v3 & 0xFFFFFEFF) == 0 )
    {
      v42 = 0;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v51 = v9 == 0LL;
      v46 = 0;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      v50 = v9;
      v52 = 0;
      v53 = 1;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v42);
      v11 = (CCD_TOPOLOGY *)&v42;
      goto LABEL_10;
    }
LABEL_33:
    v19 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v8);
    *(_QWORD *)(v19 + 24) = v3;
    WdLogEvent5_WdAssertion(v19);
    goto LABEL_34;
  }
  if ( (v3 & 0xFFFEBFFF) != 0 )
    goto LABEL_33;
  v16 = 0;
  if ( (v3 & 0x4000) != 0 )
    v16 = 2;
  if ( (v3 & 0x10000) != 0 )
    v16 |= 4u;
  for ( i = 0; i < *((unsigned __int16 *)v9 + 10); ++i )
  {
    v18 = v9[27 * i + 28];
    if ( v18 )
      *(_DWORD *)(v18 + 240) |= v16;
  }
  v12 = 0;
LABEL_14:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v67, 10);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 2081);
  return (unsigned int)v12;
}
