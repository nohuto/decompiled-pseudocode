/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C021DB10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UIntAdd @ 0x1C005D488 (UIntAdd.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01FDB8C (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  _OWORD *v14; // rax
  __int64 j; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // xmm1_8
  __int128 v18; // xmm0
  unsigned int v19; // r12d
  UINT v20; // eax
  _QWORD *v21; // rax
  __int64 i; // rcx
  _QWORD *v23; // r8
  __int64 ThreadWin32Thread; // rax
  ULONG v25; // eax
  _QWORD *v26; // rcx
  _DWORD *Buf1; // [rsp+48h] [rbp-240h]
  UINT puResult; // [rsp+50h] [rbp-238h] BYREF
  UINT v30[5]; // [rsp+54h] [rbp-234h] BYREF
  UINT v31; // [rsp+68h] [rbp-220h]
  int v32[2]; // [rsp+70h] [rbp-218h]
  _QWORD *v33; // [rsp+78h] [rbp-210h]
  _OWORD *v34; // [rsp+80h] [rbp-208h]
  UINT v35; // [rsp+8Ch] [rbp-1FCh]
  unsigned __int64 v36; // [rsp+98h] [rbp-1F0h]
  unsigned __int64 v37; // [rsp+A0h] [rbp-1E8h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-1E0h]
  unsigned __int64 v39; // [rsp+B0h] [rbp-1D8h]
  __int128 v40; // [rsp+B8h] [rbp-1D0h]
  __int64 v41; // [rsp+C8h] [rbp-1C0h]
  __int128 v42; // [rsp+D0h] [rbp-1B8h]
  __int128 v43; // [rsp+E0h] [rbp-1A8h]
  int v44; // [rsp+F0h] [rbp-198h]
  __m128i v45; // [rsp+F8h] [rbp-190h]
  __int128 v46; // [rsp+108h] [rbp-180h]
  __int64 v47; // [rsp+118h] [rbp-170h]
  __int128 v48; // [rsp+120h] [rbp-168h]
  __int128 v49; // [rsp+130h] [rbp-158h]
  __int128 v50; // [rsp+140h] [rbp-148h]
  __int128 v51; // [rsp+150h] [rbp-138h]
  __int128 v52; // [rsp+160h] [rbp-128h]
  __int128 v53; // [rsp+170h] [rbp-118h]
  int v54; // [rsp+180h] [rbp-108h]
  __int128 v55; // [rsp+188h] [rbp-100h]
  __int128 v56; // [rsp+198h] [rbp-F0h]
  __int128 v57; // [rsp+1A8h] [rbp-E0h]
  __int128 v58; // [rsp+1B8h] [rbp-D0h]
  _OWORD v59[7]; // [rsp+1D0h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v59, 0, 0x68uLL);
  v33 = 0LL;
  v34 = 0LL;
  EnterCrit(1LL);
  if ( a1 == -3 )
  {
    *(_QWORD *)v32 = -1LL;
  }
  else if ( a1 )
  {
    *(_QWORD *)v32 = ValidateHwnd(a1);
    if ( !*(_QWORD *)v32 )
      goto LABEL_120;
  }
  else
  {
    *(_QWORD *)v32 = 0LL;
  }
  if ( a2 < 10 )
  {
    v9 = 4LL;
    if ( a2 == 4 )
    {
      if ( *(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput )
      {
        UserSetLastError(5);
LABEL_12:
        v10 = 1;
        goto LABEL_119;
      }
      if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) >= 0 )
      {
        UserSetLastError(5);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 384LL), 0LL, 7LL);
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
              v9 = a3;
              if ( a3 + 16 < a3 || a3 + 16 > W32UserProbeAddress )
                v9 = W32UserProbeAddress;
              v18 = *(_OWORD *)v9;
              v55 = v18;
              v59[0] = v18;
              if ( DWORD1(v18) <= 0x19 )
              {
                if ( (unsigned int)v18 <= 0x19 )
                {
                  if ( UIntAdd(v18, DWORD1(v18), v30) >= 0 )
                  {
                    v19 = v30[0];
                    if ( v30[0] <= 0x19 )
                    {
                      v20 = 8 * v30[0];
                      v38 = 8LL * v30[0];
                      v9 = 0xFFFFFFFFLL;
                      if ( v38 > 0xFFFFFFFF )
                      {
                        v31 = -1;
                        v10 = 1;
                      }
                      else
                      {
                        v31 = 8 * v30[0];
                        v35 = v20 + 8;
                        if ( v20 + 8 >= v20 )
                        {
                          v21 = (_QWORD *)Win32AllocPool(v20 + 8, 1735226197LL);
                          v9 = (unsigned __int64)v21;
                          Buf1 = v21;
                          if ( v21 )
                          {
                            v39 = a3;
                            v33 = v21;
                            *v21 = *(_QWORD *)&v59[0];
                            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                            {
                              v30[3] = i;
                              if ( (unsigned int)i >= v19 )
                                break;
                              v23 = (_QWORD *)(a3 + 8 + 8 * i);
                              if ( v23 + 1 < v23 || (unsigned __int64)(v23 + 1) > W32UserProbeAddress )
                                v23 = (_QWORD *)W32UserProbeAddress;
                              v21[i + 1] = *v23;
                            }
                            goto LABEL_117;
                          }
                          v8 = -1073741801;
                          v10 = 1;
                        }
                        else
                        {
                          v10 = 1;
                        }
                      }
                    }
                    else
                    {
                      v8 = -1073741306;
                      v10 = 1;
                    }
                  }
                  else
                  {
                    v10 = 1;
                  }
                }
                else
                {
                  v8 = -1073741306;
                  v10 = 1;
                }
              }
              else
              {
                v8 = -1073741306;
                v10 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v10 = 1;
            }
          }
          else
          {
            v10 = 1;
          }
          break;
        case 7:
          if ( a3 )
          {
            if ( a4 >= 0x10 )
            {
              v11 = a3;
              v9 = a3 + 40;
              if ( a3 + 40 < a3 || v9 > W32UserProbeAddress )
                v11 = W32UserProbeAddress;
              v45 = *(__m128i *)v11;
              v46 = *(_OWORD *)(v11 + 16);
              v47 = *(_QWORD *)(v11 + 32);
              v59[0] = v45;
              v59[1] = v46;
              *(_QWORD *)&v59[2] = v47;
              v12 = _mm_cvtsi128_si32(v45);
              if ( v12 <= 6 )
              {
                v13 = 24LL * v12;
                v36 = v13;
                v9 = 0xFFFFFFFFLL;
                if ( v13 > 0xFFFFFFFF )
                {
                  puResult = -1;
                  v10 = 1;
                }
                else
                {
                  puResult = 24 * v12;
                  if ( UIntAdd(v13, 0x10u, &puResult) >= 0 )
                  {
                    v14 = (_OWORD *)Win32AllocPool(puResult, 1735226197LL);
                    Buf1 = v14;
                    if ( v14 )
                    {
                      v37 = a3;
                      v34 = v14;
                      *v14 = v59[0];
                      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                      {
                        v30[4] = j;
                        if ( (unsigned int)j >= *(_DWORD *)v14 )
                          break;
                        v16 = a3 + 16 + 24 * j;
                        if ( v16 + 24 < v16 || v16 + 24 > W32UserProbeAddress )
                          v16 = W32UserProbeAddress;
                        v40 = *(_OWORD *)v16;
                        v41 = *(_QWORD *)(v16 + 16);
                        v17 = v41;
                        *(_OWORD *)((char *)v14 + 24 * j + 16) = v40;
                        *((_QWORD *)v14 + 3 * j + 4) = v17;
                      }
                      goto LABEL_117;
                    }
                    v8 = -1073741801;
                    v10 = 1;
                  }
                  else
                  {
                    v10 = v9 - 15;
                  }
                }
              }
              else
              {
                v8 = -1073741306;
                v10 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v10 = 1;
            }
          }
          else
          {
            v10 = 1;
          }
          break;
        case 8:
          v10 = 1;
          break;
        default:
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              if ( a3 + 4 < a3 || a3 + 4 > W32UserProbeAddress )
                a3 = W32UserProbeAddress;
              LODWORD(v59[0]) = *(_DWORD *)a3;
              Buf1 = v59;
              goto LABEL_117;
            }
            v8 = -1073741306;
            v10 = 1;
          }
          else
          {
            v10 = 1;
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
          v48 = *(_OWORD *)a3;
          v49 = *(_OWORD *)(a3 + 16);
          v50 = *(_OWORD *)(a3 + 32);
          v51 = *(_OWORD *)(a3 + 48);
          v52 = *(_OWORD *)(a3 + 64);
          v53 = *(_OWORD *)(a3 + 80);
          v54 = *(_DWORD *)(a3 + 96);
          v59[0] = v48;
          v59[1] = v49;
          v59[2] = v50;
          v59[3] = v51;
          v59[4] = v52;
          v59[5] = v53;
          LODWORD(v59[6]) = v54;
          Buf1 = v59;
          goto LABEL_117;
        }
        v8 = -1073741306;
        v10 = 1;
      }
      else
      {
        v10 = 1;
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
        v10 = 1;
      }
      else if ( a2 == 2 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            if ( a3 + 16 < a3 || a3 + 16 > W32UserProbeAddress )
              a3 = W32UserProbeAddress;
            v56 = *(_OWORD *)a3;
            v59[0] = v56;
            Buf1 = v59;
            goto LABEL_117;
          }
          v8 = -1073741306;
          v10 = 1;
        }
        else
        {
          v10 = 1;
        }
      }
      else
      {
        if ( a2 != 3 )
        {
          if ( !a3 )
          {
            v10 = 1;
            goto LABEL_119;
          }
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            v10 = 1;
            goto LABEL_119;
          }
          if ( a3 + 36 < a3 || a3 + 36 > W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          v42 = *(_OWORD *)a3;
          v43 = *(_OWORD *)(a3 + 16);
          v44 = *(_DWORD *)(a3 + 32);
          v59[0] = v42;
          v59[1] = v43;
          LODWORD(v59[2]) = v44;
          Buf1 = v59;
LABEL_117:
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v8 = MagSetLensContextInformation(*(_QWORD **)&gMagnContext, ThreadWin32Thread, *(__int64 *)v32, 0, a2, Buf1);
          goto LABEL_12;
        }
        if ( a3 )
        {
          if ( a4 >= 0x20 )
          {
            if ( a3 + 32 < a3 || a3 + 32 > W32UserProbeAddress )
              a3 = W32UserProbeAddress;
            v57 = *(_OWORD *)a3;
            v58 = *(_OWORD *)(a3 + 16);
            v59[0] = v57;
            v59[1] = v58;
            Buf1 = v59;
            goto LABEL_117;
          }
          v8 = -1073741306;
          v10 = 1;
        }
        else
        {
          v10 = 1;
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
  v10 = 0;
  v25 = RtlNtStatusToDosError(v8);
  UserSetLastError(v25);
LABEL_121:
  if ( v34 )
    Win32FreePool(v34);
  v26 = v33;
  if ( v33 )
    Win32FreePool(v33);
  UserSessionSwitchLeaveCrit(v26, v9);
  return v10;
}
