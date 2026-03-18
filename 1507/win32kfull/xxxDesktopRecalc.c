/*
 * XREFs of xxxDesktopRecalc @ 0x1C0039710
 * Callers:
 *     xxxDesktopsRecalc @ 0x1C00396B0 (xxxDesktopsRecalc.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00398D8 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00399CC (DesktopWindowFromDesktop.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  _QWORD *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdx
  struct tagWINDOWANDRECT *v17; // rbp
  __int64 v18; // rsi
  int v19; // r13d
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  struct tagWINDOWANDRECT *v22; // r12
  __int64 v23; // r15
  _QWORD *v24; // r14
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+30h] [rbp-58h]
  unsigned int v28; // [rsp+90h] [rbp+8h]
  struct tagTHREADINFO *v30; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v4 = 20;
  if ( PsGetCurrentProcess() == gpepCSRSS )
    v4 = 16404;
  v28 = v4;
  v5 = DesktopWindowFromDesktop(a1);
  v6 = 34LL;
  if ( (*(_BYTE *)(a1 + 320) & 0x20) != 0 )
    v6 = 98LL;
  result = BuildHwndList(*(_QWORD *)(v5 + 96), v6, 0LL);
  v27 = result;
  v9 = result;
  if ( result )
  {
    v10 = (_QWORD *)(result + 32);
    v11 = 0;
    v12 = *(_QWORD *)(result + 32);
    v13 = (_QWORD *)(result + 32);
    if ( v12 != 1 )
    {
      v14 = (_QWORD *)(result + 32);
      do
      {
        LOBYTE(v8) = 1;
        if ( HMValidateHandleNoSecure(v12, v8) )
        {
          ++v11;
          *v14++ = *v13;
        }
        v12 = *++v13;
      }
      while ( *v13 != 1LL );
      if ( v11 )
      {
        if ( *(_DWORD *)a2 )
        {
          v15 = v11;
          v31 = v11;
          v17 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v11, 2004054869LL);
          if ( v17 )
          {
            v18 = 0LL;
            if ( v15 > 0 )
            {
              do
              {
                if ( *v10 )
                {
                  LOBYTE(v16) = 1;
                  v19 = 0;
                  v20 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v10, v16) + 16);
                  v30 = v20;
                  if ( v18 < v15 )
                  {
                    v22 = v17;
                    v23 = v15 - v18;
                    v24 = v10;
                    v25 = v20;
                    do
                    {
                      if ( *v24 )
                      {
                        LOBYTE(v21) = 1;
                        v26 = HMValidateHandleNoSecure(*v24, v21);
                        if ( *(struct tagTHREADINFO **)(v26 + 16) == v25 )
                        {
                          ++v19;
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
                    v15 = v31;
                    v20 = v30;
                  }
                  PostThreadRecalc(v20, a2, v17, v19, v28);
                }
                ++v18;
                ++v10;
              }
              while ( v18 < v15 );
              v9 = v27;
            }
            Win32FreePool(v17);
          }
        }
      }
    }
    return FreeHwndList(v9);
  }
  return result;
}
