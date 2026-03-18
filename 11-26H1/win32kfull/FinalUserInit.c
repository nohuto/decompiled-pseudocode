/*
 * XREFs of FinalUserInit @ 0x1400CBC1C
 * Callers:
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     MNSetupAnimationDC @ 0x1400CBBA0 (MNSetupAnimationDC.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // r14
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 CompatibleDC; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 Bitmap; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v75; // rcx
  __int64 i; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  UserSessionState = W32GetUserSessionState(v2, v1);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  v4 = Get96DpiServerInfo();
  v5 = *(_QWORD *)(v4 + 24);
  v8 = W32GetUserSessionState(v7, v6);
  v9 = GreSelectFont(*(_QWORD *)(*(_QWORD *)(v8 + 56968) + 64LL), v5);
  v12 = W32GetUserSessionState(v11, v10);
  *(_DWORD *)(v4 + 32) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v12 + 56968) + 64LL));
  v15 = W32GetUserSessionState(v14, v13);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 64LL), v9);
  v18 = W32GetUserSessionState(v17, v16);
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v18 + 56968) + 56LL));
  v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968);
  *(_QWORD *)(v22 + 72) = CompatibleDC;
  v25 = *(_QWORD *)(W32GetUserSessionState(v22, v23) + 56968);
  if ( !*(_QWORD *)(v25 + 72) )
    return 0LL;
  v26 = *(_QWORD *)(SessionDpiServerInfo + 24);
  v27 = W32GetUserSessionState(v25, v24);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v27 + 56968) + 72LL), v26);
  v30 = W32GetUserSessionState(v29, v28);
  GreSetDCOwnerEx(*(_QWORD *)(*(_QWORD *)(v30 + 56968) + 72LL), 0LL, 0LL, 0LL);
  LODWORD(v26) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 56968);
  *(_DWORD *)(v33 + 88) = v26;
  LODWORD(v26) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  v35 = *(_QWORD *)(W32GetUserSessionState(v33, v34) + 56968);
  *(_DWORD *)(v35 + 92) = v26;
  v37 = *(_QWORD *)(W32GetUserSessionState(v35, v36) + 56968);
  LODWORD(v26) = *(_DWORD *)(v37 + 92);
  v39 = W32GetUserSessionState(v37, v38);
  Bitmap = GreCreateBitmap(*(unsigned int *)(*(_QWORD *)(v39 + 56968) + 88LL), (unsigned int)v26, 1LL, 1LL, 0LL);
  v43 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 56968);
  *(_QWORD *)(v43 + 80) = Bitmap;
  v46 = *(_QWORD *)(W32GetUserSessionState(v43, v44) + 56968);
  if ( !*(_QWORD *)(v46 + 80) )
    return 0LL;
  v47 = W32GetUserSessionState(v46, v45);
  GreSetBitmapOwner(*(_QWORD *)(*(_QWORD *)(v47 + 56968) + 80LL), 0LL);
  v50 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 56968);
  v51 = *(_QWORD *)(v50 + 80);
  v53 = W32GetUserSessionState(v50, v52);
  GreSelectBitmap(*(_QWORD *)(*(_QWORD *)(v53 + 56968) + 72LL), v51);
  v56 = W32GetUserSessionState(v55, v54);
  GreSetTextColor(*(HDC *)(*(_QWORD *)(v56 + 56968) + 72LL), 0);
  v59 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19904);
  v60 = *(_QWORD *)(v59 + 4944);
  v62 = W32GetUserSessionState(v59, v61);
  GreSelectBrush(*(_QWORD *)(*(_QWORD *)(v62 + 56968) + 72LL), v60);
  v65 = W32GetUserSessionState(v64, v63);
  GreSetBkMode(*(HDC *)(*(_QWORD *)(v65 + 56968) + 72LL));
  v68 = W32GetUserSessionState(v67, v66);
  GreSetBkColor(*(HDC *)(*(_QWORD *)(v68 + 56968) + 72LL), 0xFFFFFF);
  v71 = W32GetUserSessionState(v70, v69);
  MNSetupAnimationDC(v71 + 65880, v72);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v73);
  if ( CurrentProcessWin32Process )
  {
    v75 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  for ( i = CurrentProcessWin32Process + 360;
        *(_QWORD *)i && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 8LL) & 0x4000) == 0;
        DestroyClass(v79, i) )
  {
    v78 = PsGetCurrentProcessWin32Process(v75);
    v79 = v78;
    if ( v78 )
      v79 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v78 >> 64) & v78;
  }
  return 1LL;
}
