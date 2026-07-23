/*
 * XREFs of PnprLogSuccessEvent @ 0x140645008
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS PnprLogSuccessEvent()
{
  int v0; // edx
  int v1; // ecx
  int v2; // eax
  _QWORD **v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  ULONG v6; // ecx
  int *v7; // rbx
  __int64 v8; // r10
  int *v9; // r11
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  ULONG v13; // r9d
  __int64 v14; // rsi
  __int64 v15; // r14
  int *v16; // rdi
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rcx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h]
  __int64 *v34; // [rsp+78h] [rbp-90h]
  __int64 v35; // [rsp+80h] [rbp-88h]
  _QWORD **v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+C0h] [rbp-48h]
  int v44; // [rsp+C4h] [rbp-44h]
  int *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  int *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  int *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  __int64 *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  char *v61; // [rsp+148h] [rbp+40h]
  int v62; // [rsp+150h] [rbp+48h]
  int v63; // [rsp+154h] [rbp+4Ch]

  LOWORD(v25) = 0;
  v0 = *(_DWORD *)(PnprContext + 10788);
  v1 = *(_DWORD *)(PnprContext + 10792);
  v26 = *(_DWORD *)(PnprContext + 10800);
  v27 = v0 - *(_DWORD *)(PnprContext + 10784);
  v2 = v1 - v0;
  v3 = *(_QWORD ***)(PnprContext + 16);
  v28 = v2;
  LODWORD(v29) = *(_DWORD *)(PnprContext + 10796) - v1;
  v4 = *(_QWORD *)PnprContext;
  v30 = **v3;
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned __int16 *)(v5 + 40);
  v7 = (int *)(v3 + 2);
  v8 = *(_QWORD *)(PnprContext + 24);
  UserData.Ptr = *(_QWORD *)(v5 + 48);
  v32 = &v25;
  v34 = &v30;
  UserData.Size = v6;
  v40 = v8 + 8;
  v9 = (int *)(v8 + 4);
  v10 = *(_QWORD *)(PnprContext + 32);
  UserData.Reserved = 0;
  v33 = 2LL;
  v35 = 8LL;
  v36 = v3 + 2;
  v37 = 4LL;
  v38 = v8 + 4;
  v39 = 4LL;
  v41 = 8LL;
  if ( v10 )
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
  else
    v11 = 0LL;
  v12 = *(unsigned __int16 *)(v11 + 40);
  v13 = 15;
  v14 = *(_QWORD *)(PnprContext + 56);
  v15 = *(_QWORD *)(PnprContext + 48);
  v42 = *(_QWORD *)(v11 + 48);
  v45 = &v25;
  v43 = v12;
  v51 = v14 + 8;
  v16 = (int *)(v15 + 16);
  v44 = 0;
  v53 = &v26;
  v46 = 2LL;
  v55 = &v27;
  v57 = &v28;
  v59 = &v29;
  v47 = v15 + 16;
  v48 = 4LL;
  v49 = v14 + 4;
  v50 = 4LL;
  v52 = 8LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v17 = *v7;
  if ( *v7 )
  {
    v61 = (char *)v3 + 20;
    v13 = 16;
    v62 = 4 * v17;
    v63 = 0;
  }
  v18 = *v9;
  if ( *v9 )
  {
    v19 = 2LL * v13++;
    *(&UserData.Ptr + v19) = v8 + 16;
    *(&UserData.Size + 2 * v19) = 16 * v18;
    *(&UserData.Reserved + 2 * v19) = 0;
  }
  v20 = *v16;
  if ( *v16 )
  {
    v21 = 2LL * v13++;
    *(&UserData.Ptr + v21) = v15 + 20;
    *(&UserData.Size + 2 * v21) = 4 * v20;
    *(&UserData.Reserved + 2 * v21) = 0;
  }
  v22 = *(_DWORD *)(v14 + 4);
  if ( v22 )
  {
    v23 = 2LL * v13++;
    *(&UserData.Ptr + v23) = v14 + 16;
    *(&UserData.Size + 2 * v23) = 16 * v22;
    *(&UserData.Reserved + 2 * v23) = 0;
  }
  return EtwWrite(PnpEtwHandle, &PNP_EVT_DP_REPLACE_SUCCESS, 0LL, v13, &UserData);
}
