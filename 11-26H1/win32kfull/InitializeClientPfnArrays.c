/*
 * XREFs of InitializeClientPfnArrays @ 0x1402545BC
 * Callers:
 *     NtUserInitializeClientPfnArrays @ 0x1402544B0 (NtUserInitializeClientPfnArrays.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeClientPfnArrays(__int128 *a1, __int128 *a2, __int128 *a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 UserSessionState; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v15; // xmm0
  __int128 *v16; // rdi
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int128 *v19; // r14
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-138h]
  __int128 v28; // [rsp+28h] [rbp-130h]
  __int128 v29; // [rsp+38h] [rbp-120h]
  __int128 v30; // [rsp+48h] [rbp-110h]
  __int128 v31; // [rsp+58h] [rbp-100h]
  __int128 v32; // [rsp+68h] [rbp-F0h]
  __int128 v33; // [rsp+78h] [rbp-E0h]
  __int128 v34; // [rsp+78h] [rbp-E0h]
  __int128 v35; // [rsp+78h] [rbp-E0h]
  __int128 v36; // [rsp+88h] [rbp-D0h]
  __int128 v37; // [rsp+88h] [rbp-D0h]
  __int128 v38; // [rsp+88h] [rbp-D0h]
  __int128 v39; // [rsp+98h] [rbp-C0h]
  __int128 v40; // [rsp+98h] [rbp-C0h]
  __int128 v41; // [rsp+98h] [rbp-C0h]
  __int128 v42; // [rsp+A8h] [rbp-B0h]
  __int128 v43; // [rsp+A8h] [rbp-B0h]
  __int128 v44; // [rsp+A8h] [rbp-B0h]
  __int128 v45; // [rsp+B8h] [rbp-A0h]
  __int128 v46; // [rsp+B8h] [rbp-A0h]
  __int128 v47; // [rsp+B8h] [rbp-A0h]
  __int128 v48; // [rsp+C8h] [rbp-90h]
  __int128 v49; // [rsp+C8h] [rbp-90h]
  __int128 v50; // [rsp+C8h] [rbp-90h]
  __int128 v51; // [rsp+D8h] [rbp-80h]
  __int128 v52; // [rsp+D8h] [rbp-80h]
  __int128 v53; // [rsp+D8h] [rbp-80h]
  __int128 v54; // [rsp+E8h] [rbp-70h]
  __int128 v55; // [rsp+F8h] [rbp-60h]
  __int128 v56; // [rsp+F8h] [rbp-60h]
  __int128 v57; // [rsp+F8h] [rbp-60h]
  __int128 v58; // [rsp+108h] [rbp-50h]
  __int128 v59; // [rsp+108h] [rbp-50h]
  __int128 v60; // [rsp+118h] [rbp-40h]
  __int128 v61; // [rsp+118h] [rbp-40h]
  __int128 v62; // [rsp+128h] [rbp-30h]
  __int128 v63; // [rsp+128h] [rbp-30h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 70896) && a1 )
  {
    v10 = *(_QWORD *)(W32GetUserGdiSessionState(v8) + 40);
    if ( PsGetCurrentProcess(v11) != v10 )
      return 3221225506LL;
    v33 = *a1;
    v36 = a1[1];
    v39 = a1[2];
    v42 = a1[3];
    v45 = a1[4];
    v48 = a1[5];
    v51 = a1[6];
    v15 = a1[7];
    v16 = a1 + 8;
    v55 = *v16;
    v58 = v16[1];
    v60 = v16[2];
    v62 = v16[3];
    v17 = (_OWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904) + 392LL);
    *v17 = v33;
    v17[1] = v36;
    v17[2] = v39;
    v17[3] = v42;
    v17[4] = v45;
    v17[5] = v48;
    v17[6] = v51;
    v17 += 8;
    *(v17 - 1) = v15;
    *v17 = v55;
    v17[1] = v58;
    v17[2] = v60;
    v17[3] = v62;
    v34 = *a2;
    v37 = a2[1];
    v40 = a2[2];
    v43 = a2[3];
    v46 = a2[4];
    v49 = a2[5];
    v18 = a2[7];
    v52 = a2[6];
    v19 = a2 + 8;
    v56 = *v19;
    v59 = v19[1];
    v61 = v19[2];
    v63 = v19[3];
    v21 = (_OWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v20) + 19904) + 584LL);
    *v21 = v34;
    v21[1] = v37;
    v21[2] = v40;
    v21[3] = v43;
    v21[4] = v46;
    v21[5] = v49;
    v21[6] = v52;
    v21 += 8;
    *(v21 - 1) = v18;
    *v21 = v56;
    v21[1] = v59;
    v21[2] = v61;
    v21[3] = v63;
    v28 = *a3;
    v29 = a3[1];
    v30 = a3[2];
    v31 = a3[3];
    v32 = a3[4];
    v27 = *((_QWORD *)a3 + 10);
    v23 = *(_QWORD *)(W32GetUserSessionState(v21, v22) + 19904);
    *(_OWORD *)(v23 + 776) = v28;
    *(_OWORD *)(v23 + 792) = v29;
    *(_OWORD *)(v23 + 808) = v30;
    *(_OWORD *)(v23 + 824) = v31;
    *(_OWORD *)(v23 + 840) = v32;
    *(_QWORD *)(v23 + 856) = v27;
    v35 = *a3;
    v38 = a3[1];
    v41 = a3[2];
    v44 = a3[3];
    v47 = a3[4];
    v50 = a3[5];
    v53 = a3[6];
    v54 = a3[7];
    v57 = a3[8];
    v25 = (_OWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v24) + 19904) + 7504LL);
    *v25 = v35;
    v25[1] = v38;
    v25[2] = v41;
    v25[3] = v44;
    v25[4] = v47;
    v25[5] = v50;
    v25[6] = v53;
    v25[7] = v54;
    v25[8] = v57;
    *(_QWORD *)(W32GetUserSessionState(v25, v26) + 20488) = a4;
    *(_DWORD *)(UserSessionState + 70896) = 1;
  }
  return 0LL;
}
