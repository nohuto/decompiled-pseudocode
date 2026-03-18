/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C0217550
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  _QWORD *v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 j; // rdx
  int v12; // edi
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  _OWORD *v15; // rax
  __int64 v16; // xmm1_8
  __int128 v17; // xmm0
  unsigned int v18; // r12d
  UINT v19; // eax
  _QWORD *v20; // rax
  __int64 i; // rcx
  __int64 ThreadWin32Thread; // rax
  ULONG v23; // eax
  _QWORD *v24; // rcx
  _DWORD *Buf1; // [rsp+48h] [rbp-240h]
  UINT puResult[2]; // [rsp+50h] [rbp-238h] BYREF
  UINT v28[2]; // [rsp+58h] [rbp-230h] BYREF
  UINT v29; // [rsp+60h] [rbp-228h]
  int v30[2]; // [rsp+70h] [rbp-218h]
  _OWORD *v31; // [rsp+78h] [rbp-210h]
  _QWORD *v32; // [rsp+80h] [rbp-208h]
  UINT v33; // [rsp+88h] [rbp-200h]
  unsigned __int64 v34; // [rsp+90h] [rbp-1F8h]
  unsigned __int64 v35; // [rsp+98h] [rbp-1F0h]
  unsigned __int64 v36; // [rsp+A0h] [rbp-1E8h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-1E0h]
  __int128 v38; // [rsp+B8h] [rbp-1D0h]
  __int64 v39; // [rsp+C8h] [rbp-1C0h]
  __int128 v40; // [rsp+D0h] [rbp-1B8h]
  __int128 v41; // [rsp+E0h] [rbp-1A8h]
  int v42; // [rsp+F0h] [rbp-198h]
  __m128i v43; // [rsp+F8h] [rbp-190h]
  __int128 v44; // [rsp+108h] [rbp-180h]
  __int64 v45; // [rsp+118h] [rbp-170h]
  __int128 v46; // [rsp+120h] [rbp-168h]
  __int128 v47; // [rsp+130h] [rbp-158h]
  __int128 v48; // [rsp+140h] [rbp-148h]
  __int128 v49; // [rsp+150h] [rbp-138h]
  __int128 v50; // [rsp+160h] [rbp-128h]
  __int128 v51; // [rsp+170h] [rbp-118h]
  int v52; // [rsp+180h] [rbp-108h]
  __int128 v53; // [rsp+188h] [rbp-100h]
  __int128 v54; // [rsp+198h] [rbp-F0h]
  __int128 v55; // [rsp+1A8h] [rbp-E0h]
  __int128 v56; // [rsp+1B8h] [rbp-D0h]
  _OWORD v57[7]; // [rsp+1D0h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v57, 0, 0x68uLL);
  v32 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    *(_QWORD *)v30 = -1LL;
  }
  else if ( a1 )
  {
    *(_QWORD *)v30 = ValidateHwnd(a1);
    if ( !*(_QWORD *)v30 )
      goto LABEL_120;
  }
  else
  {
    *(_QWORD *)v30 = 0LL;
  }
  if ( a2 < 10 )
  {
    j = 4LL;
    if ( a2 == 4 )
    {
      if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput )
      {
        UserSetLastError(5LL);
LABEL_12:
        v12 = 1;
        goto LABEL_119;
      }
      if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) >= 0 )
      {
        UserSetLastError(5LL);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 7LL);
        v8 = -1073741790;
        goto LABEL_120;
      }
    }
    if ( a2 > 5 )
    {
      switch ( a2 )
      {
        case 6:
          if ( a3 )
          {
            if ( a4 >= 0x10 )
            {
              j = a3;
              if ( a3 + 16 < a3 || a3 + 16 > W32UserProbeAddress )
                j = W32UserProbeAddress;
              v17 = *(_OWORD *)j;
              v54 = v17;
              v57[0] = v17;
              if ( DWORD1(v17) <= 0x19 )
              {
                if ( (unsigned int)v17 <= 0x19 )
                {
                  if ( UIntAdd(v17, DWORD1(v17), v28) >= 0 )
                  {
                    v18 = v28[0];
                    if ( v28[0] <= 0x19 )
                    {
                      v19 = 8 * v28[0];
                      v36 = 8LL * v28[0];
                      j = 0xFFFFFFFFLL;
                      if ( v36 > 0xFFFFFFFF )
                      {
                        v29 = -1;
                        v12 = 1;
                      }
                      else
                      {
                        v29 = 8 * v28[0];
                        v33 = v19 + 8;
                        if ( v19 + 8 >= v19 )
                        {
                          v20 = (_QWORD *)Win32AllocPool(v19 + 8, 1735226197LL);
                          j = (unsigned __int64)v20;
                          Buf1 = v20;
                          if ( v20 )
                          {
                            v37 = a3;
                            v32 = v20;
                            *v20 = *(_QWORD *)&v57[0];
                            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                            {
                              v28[1] = i;
                              if ( (unsigned int)i >= v18 )
                                break;
                              v9 = (_QWORD *)(a3 + 8 + 8 * i);
                              v10 = (unsigned __int64)(v9 + 1);
                              if ( v9 + 1 < v9 || v10 > W32UserProbeAddress )
                                v9 = (_QWORD *)W32UserProbeAddress;
                              v20[i + 1] = *v9;
                            }
                            goto LABEL_117;
                          }
                          v8 = -1073741801;
                          v12 = 1;
                        }
                        else
                        {
                          v12 = 1;
                        }
                      }
                    }
                    else
                    {
                      v8 = -1073741306;
                      v12 = 1;
                    }
                  }
                  else
                  {
                    v12 = 1;
                  }
                }
                else
                {
                  v8 = -1073741306;
                  v12 = 1;
                }
              }
              else
              {
                v8 = -1073741306;
                v12 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v12 = 1;
            }
          }
          else
          {
            v12 = 1;
          }
          break;
        case 7:
          if ( a3 )
          {
            if ( a4 >= 0x10 )
            {
              v13 = a3;
              j = a3 + 40;
              if ( a3 + 40 < a3 || j > W32UserProbeAddress )
                v13 = W32UserProbeAddress;
              v43 = *(__m128i *)v13;
              v44 = *(_OWORD *)(v13 + 16);
              v45 = *(_QWORD *)(v13 + 32);
              v57[0] = v43;
              v57[1] = v44;
              *(_QWORD *)&v57[2] = v45;
              v14 = _mm_cvtsi128_si32(v43);
              if ( v14 <= 6 )
              {
                v34 = 24LL * v14;
                j = 0xFFFFFFFFLL;
                if ( v34 > 0xFFFFFFFF )
                {
                  puResult[0] = -1;
                  v12 = 1;
                }
                else
                {
                  puResult[0] = 24 * v14;
                  if ( UIntAdd(24 * v14, 0x10u, puResult) >= 0 )
                  {
                    v15 = (_OWORD *)Win32AllocPool(puResult[0], 1735226197LL);
                    Buf1 = v15;
                    if ( v15 )
                    {
                      v35 = a3;
                      v31 = v15;
                      *v15 = v57[0];
                      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                      {
                        puResult[1] = j;
                        if ( (unsigned int)j >= *(_DWORD *)v15 )
                          break;
                        v10 = 3 * j;
                        v9 = (_QWORD *)(a3 + 16 + 24 * j);
                        if ( v9 + 3 < v9 || (unsigned __int64)(v9 + 3) > W32UserProbeAddress )
                          v9 = (_QWORD *)W32UserProbeAddress;
                        v38 = *(_OWORD *)v9;
                        v39 = v9[2];
                        v16 = v39;
                        *(_OWORD *)((char *)v15 + 24 * j + 16) = v38;
                        *((_QWORD *)v15 + 3 * j + 4) = v16;
                      }
                      goto LABEL_117;
                    }
                    v8 = -1073741801;
                    v12 = 1;
                  }
                  else
                  {
                    v12 = j - 15;
                  }
                }
              }
              else
              {
                v8 = -1073741306;
                v12 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v12 = 1;
            }
          }
          else
          {
            v12 = 1;
          }
          break;
        case 8:
          v12 = 1;
          break;
        default:
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              if ( a3 + 4 < a3 || a3 + 4 > W32UserProbeAddress )
                a3 = W32UserProbeAddress;
              LODWORD(v57[0]) = *(_DWORD *)a3;
              Buf1 = v57;
              goto LABEL_117;
            }
            v8 = -1073741306;
            v12 = 1;
          }
          else
          {
            v12 = 1;
          }
          break;
      }
    }
    else if ( a2 == 5 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x64 )
        {
          if ( a3 + 100 < a3 || a3 + 100 > W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          v46 = *(_OWORD *)a3;
          v47 = *(_OWORD *)(a3 + 16);
          v48 = *(_OWORD *)(a3 + 32);
          v49 = *(_OWORD *)(a3 + 48);
          v50 = *(_OWORD *)(a3 + 64);
          v51 = *(_OWORD *)(a3 + 80);
          v52 = *(_DWORD *)(a3 + 96);
          v57[0] = v46;
          v57[1] = v47;
          v57[2] = v48;
          v57[3] = v49;
          v57[4] = v50;
          v57[5] = v51;
          LODWORD(v57[6]) = v52;
          Buf1 = v57;
          goto LABEL_117;
        }
        v8 = -1073741306;
        v12 = 1;
      }
      else
      {
        v12 = 1;
      }
    }
    else
    {
      if ( a2 < 0 )
        goto LABEL_117;
      if ( a2 <= 1 )
      {
        if ( !a3 )
        {
          Buf1 = 0LL;
          goto LABEL_117;
        }
        v12 = 1;
      }
      else if ( a2 == 2 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            if ( a3 + 16 < a3 || a3 + 16 > W32UserProbeAddress )
              a3 = W32UserProbeAddress;
            v53 = *(_OWORD *)a3;
            v57[0] = v53;
            Buf1 = v57;
            goto LABEL_117;
          }
          v8 = -1073741306;
          v12 = 1;
        }
        else
        {
          v12 = 1;
        }
      }
      else
      {
        if ( a2 != 3 )
        {
          if ( !a3 )
          {
            v12 = 1;
            goto LABEL_119;
          }
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            v12 = 1;
            goto LABEL_119;
          }
          if ( a3 + 36 < a3 || a3 + 36 > W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          v40 = *(_OWORD *)a3;
          v41 = *(_OWORD *)(a3 + 16);
          v42 = *(_DWORD *)(a3 + 32);
          v57[0] = v40;
          v57[1] = v41;
          LODWORD(v57[2]) = v42;
          Buf1 = v57;
LABEL_117:
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), j, (__int64)v9, v10);
          v8 = MagSetLensContextInformation(*(_QWORD **)&gMagnContext, ThreadWin32Thread, *(__int64 *)v30, 0, a2, Buf1);
          goto LABEL_12;
        }
        if ( a3 )
        {
          if ( a4 >= 0x20 )
          {
            if ( a3 + 32 < a3 || a3 + 32 > W32UserProbeAddress )
              a3 = W32UserProbeAddress;
            v55 = *(_OWORD *)a3;
            v56 = *(_OWORD *)(a3 + 16);
            v57[0] = v55;
            v57[1] = v56;
            Buf1 = v57;
            goto LABEL_117;
          }
          v8 = -1073741306;
          v12 = 1;
        }
        else
        {
          v12 = 1;
        }
      }
    }
LABEL_119:
    if ( v8 >= 0 )
      goto LABEL_121;
    goto LABEL_120;
  }
  v8 = -1073741821;
LABEL_120:
  v12 = 0;
  v23 = RtlNtStatusToDosError(v8);
  UserSetLastError(v23);
LABEL_121:
  if ( v31 )
    Win32FreePool(v31, j, v9);
  v24 = v32;
  if ( v32 )
    Win32FreePool(v32, j, v9);
  UserSessionSwitchLeaveCrit(v24, j);
  return v12;
}
