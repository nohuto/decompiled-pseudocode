/*
 * XREFs of RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000EAC4
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C000E8EC (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C000E9CC (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0006B58 (RaSendIrpSynchronous.c)
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     RaidBuildScsiIrp @ 0x1C000ED34 (RaidBuildScsiIrp.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_qdddD @ 0x1C0027C8C (WPP_SF_qdddD.c)
 *     WPP_SF_qdddDDs @ 0x1C0027D0C (WPP_SF_qdddDDs.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueSynchronousRequest(
        _QWORD *a1,
        __int64 a2,
        PIRP *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v7; // si
  char v8; // r14
  PIRP *v9; // rdx
  bool v10; // zf
  unsigned __int8 v11; // r15
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // r13
  PIRP v14; // r9
  __int128 v15; // xmm5
  __int128 v16; // xmm4
  __int128 v17; // xmm3
  __int128 v18; // xmm2
  char v19; // al
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  __int64 result; // rax
  int v23; // eax
  int Status; // ebx
  _BYTE *v25; // r9
  unsigned __int8 v26; // cl
  char v27; // dl
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int64 v42; // rax
  char *SrbScsiData; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int64 v54; // rax
  _BYTE *v55; // rcx
  _BYTE *v56; // rax
  char v57; // r14
  const char *v58; // r10
  PIRP Irp; // [rsp+50h] [rbp-B0h]
  _BYTE *v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __int128 v62; // [rsp+68h] [rbp-98h]
  __int128 v63; // [rsp+78h] [rbp-88h]
  __int128 v64; // [rsp+88h] [rbp-78h]
  __int128 v65; // [rsp+98h] [rbp-68h]
  __int128 v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  _OWORD v68[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v69; // [rsp+120h] [rbp+20h]
  __int128 v70; // [rsp+130h] [rbp+30h]
  __int128 v71; // [rsp+140h] [rbp+40h]
  __int128 v72; // [rsp+150h] [rbp+50h]
  __int128 v73; // [rsp+160h] [rbp+60h]
  __int128 v74; // [rsp+170h] [rbp+70h]
  __int128 v75; // [rsp+180h] [rbp+80h]
  __int128 v76; // [rsp+190h] [rbp+90h]
  __int128 v77; // [rsp+1A0h] [rbp+A0h]
  __int128 v78; // [rsp+1B0h] [rbp+B0h]
  __int128 v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1D0h] [rbp+D0h]
  char v82; // [rsp+238h] [rbp+138h]
  int v84; // [rsp+248h] [rbp+148h]

  v5 = *(_QWORD *)(a2 + 8);
  v84 = 2;
  v60 = 0LL;
  a5 = 0;
  v7 = 0;
  memset(v68, 0, 88);
  v8 = 0;
  v9 = a3;
  v10 = *(_BYTE *)(a4 + 2) == 40;
  v11 = 0;
  v12 = 0;
  v82 = 0;
  v13 = 0;
  v67 = v5;
  v14 = *a3;
  Irp = *a3;
  if ( !v10 )
  {
    v15 = *(_OWORD *)a4;
    v11 = *(_BYTE *)(a4 + 5);
    v16 = *(_OWORD *)(a4 + 16);
    v12 = *(_BYTE *)(a4 + 6);
    v17 = *(_OWORD *)(a4 + 32);
    v13 = *(_BYTE *)(a4 + 7);
    v18 = *(_OWORD *)(a4 + 48);
    v19 = *(_BYTE *)(a4 + 72);
    v20 = *(_OWORD *)(a4 + 64);
    v21 = *(_QWORD *)(a4 + 80);
    v65 = *(_OWORD *)a4;
    v63 = v16;
    v66 = v17;
    v62 = v18;
    v64 = v20;
    v61 = v21;
LABEL_3:
    v82 = v19;
    goto LABEL_4;
  }
  v31 = *(_QWORD *)(a4 + 176);
  v32 = *(_OWORD *)(a4 + 16);
  v69 = *(_OWORD *)a4;
  v33 = *(_OWORD *)(a4 + 32);
  v70 = v32;
  v34 = *(_OWORD *)(a4 + 48);
  v71 = v33;
  v35 = *(_OWORD *)(a4 + 64);
  v72 = v34;
  v36 = *(_OWORD *)(a4 + 80);
  v73 = v35;
  v37 = *(_OWORD *)(a4 + 96);
  v74 = v36;
  v38 = *(_OWORD *)(a4 + 112);
  v75 = v37;
  v39 = *(_OWORD *)(a4 + 128);
  v76 = v38;
  v40 = *(_OWORD *)(a4 + 144);
  v77 = v39;
  v41 = *(_OWORD *)(a4 + 160);
  v78 = v40;
  v79 = v41;
  v80 = v31;
  v42 = a4 + *(unsigned int *)(a4 + 52);
  if ( *(_WORD *)v42 == 1 )
  {
    v11 = *(_BYTE *)(v42 + 8);
    v12 = *(_BYTE *)(v42 + 9);
    v13 = *(_BYTE *)(v42 + 10);
  }
  SrbScsiData = (char *)GetSrbScsiData(a4, 0LL, 0LL, 0LL, 0LL, 0LL);
  v21 = *(_QWORD *)&v68[5];
  v20 = v68[4];
  v18 = v68[3];
  v17 = v68[2];
  v16 = v68[1];
  v15 = v68[0];
  v14 = Irp;
  v9 = a3;
  v61 = *(_QWORD *)&v68[5];
  v64 = v68[4];
  v62 = v68[3];
  v66 = v68[2];
  v63 = v68[1];
  v65 = v68[0];
  if ( SrbScsiData )
  {
    v19 = *SrbScsiData;
    goto LABEL_3;
  }
  while ( 1 )
  {
LABEL_4:
    if ( *(_BYTE *)(a4 + 2) == 40 )
    {
      v44 = v70;
      *(_OWORD *)a4 = v69;
      v45 = v71;
      *(_OWORD *)(a4 + 16) = v44;
      v46 = v72;
      *(_OWORD *)(a4 + 32) = v45;
      v47 = v73;
      *(_OWORD *)(a4 + 48) = v46;
      v48 = v74;
      *(_OWORD *)(a4 + 64) = v47;
      v49 = v75;
      *(_OWORD *)(a4 + 80) = v48;
      v50 = v76;
      *(_OWORD *)(a4 + 96) = v49;
      v51 = v77;
      *(_OWORD *)(a4 + 112) = v50;
      v52 = v78;
      *(_OWORD *)(a4 + 128) = v51;
      v53 = v79;
      v54 = v80;
      *(_OWORD *)(a4 + 144) = v52;
      *(_OWORD *)(a4 + 160) = v53;
      *(_QWORD *)(a4 + 176) = v54;
    }
    else
    {
      *(_OWORD *)a4 = v15;
      *(_OWORD *)(a4 + 16) = v16;
      *(_OWORD *)(a4 + 32) = v17;
      *(_OWORD *)(a4 + 48) = v18;
      *(_OWORD *)(a4 + 64) = v20;
      *(_QWORD *)(a4 + 80) = v21;
    }
    result = RaidBuildScsiIrp(v14, v9[1], a4);
    if ( (int)result < 0 )
      return result;
    v23 = *(_DWORD *)(v5 + 1000);
    if ( *(_BYTE *)(a4 + 2) == 40 )
      *(_DWORD *)(a4 + 40) = v23;
    else
      *(_DWORD *)(a4 + 20) = v23;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v5 + 8), Irp);
    if ( Status < 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qdddD(WPP_GLOBAL_Control->AttachedDevice, v12, v11, *a1, v11, v12, v13, Status);
      }
      return (unsigned int)Status;
    }
    if ( *(_BYTE *)(a4 + 2) == 40 )
    {
      GetSrbScsiData(a4, 0LL, 0LL, 0LL, &v60, &a5);
      v26 = a5;
      v25 = v60;
    }
    else
    {
      v25 = *(_BYTE **)(a4 + 32);
      v26 = *(_BYTE *)(a4 + 11);
      v60 = v25;
      a5 = v26;
    }
    v27 = *(_BYTE *)(a4 + 3);
    if ( v27 < 0 )
    {
      if ( v25 )
      {
        v7 = 0;
        if ( v26 )
        {
          v55 = &v25[v26];
          v56 = v25 + 8;
          if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
          {
            if ( v56 <= v55 )
            {
              v57 = v25[1];
              goto LABEL_46;
            }
          }
          else if ( v56 <= v55 )
          {
            v57 = v25[2];
LABEL_46:
            v7 = 1;
            v8 = v57 & 0xF;
          }
        }
      }
    }
    v28 = *(_BYTE *)(a4 + 3) & 0x3F;
    if ( (unsigned int)v28 <= 0x21 && (v29 = 0x300000580LL, _bittest64(&v29, v28)) )
    {
      Status = -1073741810;
    }
    else
    {
      if ( v7 && v8 == 5 )
      {
        Status = -1073741810;
        goto LABEL_18;
      }
      if ( v27 == 18 )
      {
        Status = 0;
        *(_BYTE *)(a4 + 3) = 1;
        goto LABEL_18;
      }
      Status = Irp->IoStatus.Status;
    }
    if ( Status < 0
      && Status != -1073741810
      && Status != -1073741808
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v58 = "retried";
      if ( !v84 )
        v58 = "not retried";
      WPP_SF_qdddDDs(WPP_GLOBAL_Control->AttachedDevice, v13, v12, *a1, v11, v12, v13, v82, v27, (__int64)v58);
    }
LABEL_18:
    if ( !v84-- )
      return (unsigned int)Status;
    if ( (int)(Status + 0x80000000) < 0 )
      return (unsigned int)Status;
    v21 = v61;
    v14 = Irp;
    v9 = a3;
    v20 = v64;
    v18 = v62;
    v17 = v66;
    v16 = v63;
    v15 = v65;
    if ( Status == -1073741810 )
      return (unsigned int)Status;
    v5 = v67;
  }
}
