/*
 * XREFs of xxxDesktopRecalc @ 0x1C00EF640
 * Callers:
 *     xxxDesktopsRecalc @ 0x1C00EF5E0 (xxxDesktopsRecalc.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00EF814 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00EF908 (DesktopWindowFromDesktop.c)
 */

void __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  char v7; // dl
  char v8; // r9
  __int64 v9; // r10
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r15
  unsigned __int64 *v12; // rdi
  int v13; // esi
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rbx
  struct tagWINDOWANDRECT *v18; // rbp
  __int64 v19; // rsi
  int v20; // r13d
  struct tagTHREADINFO *v21; // rax
  struct tagWINDOWANDRECT *v22; // r12
  __int64 v23; // r15
  unsigned __int64 *v24; // r14
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+30h] [rbp-48h]
  struct tagBWL *v28; // [rsp+38h] [rbp-40h]
  unsigned int v30; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v31; // [rsp+98h] [rbp+20h]

  v6 = 20;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    v6 = 16404;
  v30 = v6;
  DesktopWindowFromDesktop(a1);
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(a1, 32) )
    v8 = v7 + 66;
  v10 = BuildHwndList(*(_QWORD *)(v9 + 96), v8, 0LL);
  v28 = v10;
  v11 = v10;
  if ( v10 )
  {
    v12 = (unsigned __int64 *)((char *)v10 + 32);
    v13 = 0;
    v14 = *((_QWORD *)v10 + 4);
    v15 = (_QWORD *)((char *)v10 + 32);
    if ( v14 != 1 )
    {
      v16 = (_QWORD *)((char *)v10 + 32);
      do
      {
        if ( HMValidateHandleNoSecure(v14, 1) )
        {
          ++v13;
          *v16++ = *v15;
        }
        v14 = *++v15;
      }
      while ( *v15 != 1LL );
      if ( v13 )
      {
        if ( *(_DWORD *)a2 )
        {
          v17 = v13;
          v27 = v13;
          v18 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v13);
          if ( v18 )
          {
            v19 = 0LL;
            if ( v17 > 0 )
            {
              do
              {
                if ( *v12 )
                {
                  v20 = 0;
                  v21 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v12, 1) + 16);
                  v31 = v21;
                  if ( v19 < v17 )
                  {
                    v22 = v18;
                    v23 = v17 - v19;
                    v24 = v12;
                    v25 = v21;
                    do
                    {
                      if ( *v24 )
                      {
                        v26 = HMValidateHandleNoSecure(*v24, 1);
                        if ( *(struct tagTHREADINFO **)(v26 + 16) == v25 )
                        {
                          ++v20;
                          *(_QWORD *)v22 = *v24;
                          *(_OWORD *)((char *)v22 + 8) = *(_OWORD *)(v26 + 112);
                          *v24 = 0LL;
                          v22 = (struct tagWINDOWANDRECT *)((char *)v22 + 24);
                        }
                      }
                      ++v24;
                      --v23;
                    }
                    while ( v23 );
                    v17 = v27;
                    v21 = v31;
                  }
                  PostThreadRecalc(v21, a2, v18, v20, v30);
                }
                ++v19;
                ++v12;
              }
              while ( v19 < v17 );
              v11 = v28;
            }
            Win32FreePool(v18);
          }
        }
      }
    }
    FreeHwndList(v11);
  }
}
