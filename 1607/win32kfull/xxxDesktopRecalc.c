/*
 * XREFs of xxxDesktopRecalc @ 0x1C010DE48
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxDesktopsRecalc @ 0x1C010DDE8 (xxxDesktopsRecalc.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C010E01C (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C010E110 (DesktopWindowFromDesktop.c)
 */

void __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2)
{
  int v4; // edi
  int v5; // edx
  unsigned int v6; // r9d
  __int64 v7; // r10
  struct tagBWL *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagBWL *v12; // r15
  unsigned __int64 *v13; // rdi
  int v14; // esi
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdx
  struct tagWINDOWANDRECT *v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  int v24; // r13d
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagWINDOWANDRECT *v29; // r12
  __int64 v30; // r15
  unsigned __int64 *v31; // r14
  struct tagTHREADINFO *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // [rsp+30h] [rbp-48h]
  struct tagBWL *v35; // [rsp+38h] [rbp-40h]
  unsigned int v37; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v38; // [rsp+98h] [rbp+20h]

  v4 = 20;
  if ( PsGetCurrentProcess(a1) == gpepCSRSS )
    v4 = 16404;
  v37 = v4;
  DesktopWindowFromDesktop(a1);
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(a1, 32) )
    v6 = v5 + 66;
  v8 = BuildHwndList(*(_QWORD *)(v7 + 96), (struct tagWND *)v6, 0LL);
  v35 = v8;
  v12 = v8;
  if ( v8 )
  {
    v13 = (unsigned __int64 *)((char *)v8 + 32);
    v14 = 0;
    v15 = *((_QWORD *)v8 + 4);
    v16 = (_QWORD *)((char *)v8 + 32);
    if ( v15 != 1 )
    {
      v17 = (_QWORD *)((char *)v8 + 32);
      do
      {
        LOBYTE(v9) = 1;
        if ( HMValidateHandleNoSecure(v15, v9, v10, v11) )
        {
          ++v14;
          *v17++ = *v16;
        }
        v15 = *++v16;
      }
      while ( *v16 != 1LL );
      if ( v14 )
      {
        if ( *(_DWORD *)a2 )
        {
          v18 = v14;
          v34 = v14;
          v20 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v14, 2004054869LL);
          if ( v20 )
          {
            v23 = 0LL;
            if ( v18 > 0 )
            {
              do
              {
                if ( *v13 )
                {
                  LOBYTE(v19) = 1;
                  v24 = 0;
                  v25 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v13, v19, v21, v22) + 16);
                  v38 = v25;
                  if ( v23 < v18 )
                  {
                    v29 = v20;
                    v30 = v18 - v23;
                    v31 = v13;
                    v32 = v25;
                    do
                    {
                      if ( *v31 )
                      {
                        LOBYTE(v26) = 1;
                        v33 = HMValidateHandleNoSecure(*v31, v26, v27, v28);
                        if ( *(struct tagTHREADINFO **)(v33 + 16) == v32 )
                        {
                          ++v24;
                          *(_QWORD *)v29 = *v31;
                          *(_OWORD *)((char *)v29 + 8) = *(_OWORD *)(v33 + 112);
                          *v31 = 0LL;
                          v29 = (struct tagWINDOWANDRECT *)((char *)v29 + 24);
                        }
                      }
                      ++v31;
                      --v30;
                    }
                    while ( v30 );
                    v18 = v34;
                    v25 = v38;
                  }
                  PostThreadRecalc(v25, a2, v20, v24, v37);
                }
                ++v23;
                ++v13;
              }
              while ( v23 < v18 );
              v12 = v35;
            }
            Win32FreePool(v20, v19, v21);
          }
        }
      }
    }
    FreeHwndList(v12);
  }
}
