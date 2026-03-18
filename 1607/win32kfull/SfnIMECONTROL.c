/*
 * XREFs of SfnIMECONTROL @ 0x1C0205E50
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0091118 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C020C134 (THREAD_CODEPAGE.c)
 *     MBToWCSEx @ 0x1C0245FFC (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C0246314 (WCSToMBEx.c)
 */

__int64 __fastcall SfnIMECONTROL(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  ULONG_PTR v11; // rsi
  unsigned __int8 *v12; // r13
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v16; // r14d
  unsigned __int8 *v17; // rdi
  __int64 v18; // r9
  unsigned int v19; // r8d
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  char *v24; // r13
  char *v25; // r12
  _DWORD *v26; // rax
  int v27; // r15d
  int v28; // r15d
  char *v29; // r8
  __int64 v30; // rsi
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  char *v44; // rdx
  char *v45; // rcx
  char *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 *v56; // rcx
  PVOID *v57; // rdx
  char v58; // [rsp+38h] [rbp-420h] BYREF
  char v59; // [rsp+39h] [rbp-41Fh] BYREF
  int v60; // [rsp+3Ch] [rbp-41Ch] BYREF
  unsigned __int64 v61; // [rsp+40h] [rbp-418h] BYREF
  unsigned __int8 *v62; // [rsp+48h] [rbp-410h] BYREF
  __int64 v63; // [rsp+78h] [rbp-3E0h]
  char *v64; // [rsp+80h] [rbp-3D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-3D0h] BYREF
  char *v66; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v67; // [rsp+98h] [rbp-3C0h]
  __int128 v68; // [rsp+A0h] [rbp-3B8h]
  __int64 v69; // [rsp+B0h] [rbp-3A8h]
  int v70; // [rsp+B8h] [rbp-3A0h]
  _DWORD *v71; // [rsp+C8h] [rbp-390h]
  __int64 v72; // [rsp+D8h] [rbp-380h] BYREF
  ULONG_PTR v73; // [rsp+E0h] [rbp-378h]
  __int128 v74; // [rsp+F0h] [rbp-368h]
  void *Src; // [rsp+100h] [rbp-358h]
  __int128 v76; // [rsp+140h] [rbp-318h]
  void *v77; // [rsp+150h] [rbp-308h]
  _QWORD v78[3]; // [rsp+158h] [rbp-300h] BYREF
  _DWORD v79[28]; // [rsp+170h] [rbp-2E8h] BYREF
  __int128 v80; // [rsp+1E0h] [rbp-278h] BYREF
  __int64 v81; // [rsp+1F0h] [rbp-268h]
  unsigned int v82; // [rsp+1F8h] [rbp-260h]
  unsigned __int8 v83[36]; // [rsp+1FCh] [rbp-25Ch] BYREF
  unsigned __int8 v84[512]; // [rsp+220h] [rbp-238h] BYREF

  v71 = a4;
  v11 = a1;
  RegionSize = a1;
  v67 = 0LL;
  v63 = gptiCurrent;
  if ( a1 )
    v12 = (unsigned __int8 *)(a1 - *(_QWORD *)(gptiCurrent + 424LL));
  else
    v12 = 0LL;
  v62 = v12;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
    goto LABEL_18;
  if ( (unsigned int)a3 <= 8 )
  {
    v13 = 1;
    v16 = 32;
    goto LABEL_19;
  }
  if ( (unsigned int)a3 <= 0xA )
    goto LABEL_16;
  if ( (unsigned int)a3 <= 0xC )
  {
    v13 = 1;
    v16 = 28;
    goto LABEL_19;
  }
  if ( (_DWORD)a3 == 17 )
  {
LABEL_16:
    v13 = 1;
    v16 = (a7 & 1) != 0 ? 60 : 92;
    goto LABEL_19;
  }
  if ( (_DWORD)a3 == 24 )
  {
    v13 = 1;
    v14 = (unsigned __int64)*a4 << 9;
    if ( v14 > 0xFFFFFFFF )
      return 0LL;
    v16 = v14 + 4;
    if ( (int)v14 + 4 < (unsigned int)v14 )
      return 0LL;
    v70 = v14 + 4;
  }
  else
  {
LABEL_18:
    v13 = 0;
    v16 = 0;
  }
LABEL_19:
  if ( v13 )
  {
    v17 = AllocCallbackMessage(104, v13, v16, v84, 1, 0x200uLL);
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v17 = (unsigned __int8 *)v79;
    memset(v79, 0, 0x68uLL);
    v79[0] = 104;
  }
  if ( v17 != (unsigned __int8 *)v79 && v17 != v84 )
    PushW32ThreadLock((__int64)v17, v78, (__int64)Win32FreePool, v18);
  *((_QWORD *)v17 + 5) = v12;
  *((_DWORD *)v17 + 12) = a2;
  *((_QWORD *)v17 + 7) = a3;
  *((_QWORD *)v17 + 8) = a4;
  *((_QWORD *)v17 + 9) = a5;
  *((_QWORD *)v17 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_95;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_58;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_58;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_58;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_95;
          goto LABEL_35;
        }
LABEL_58:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v17, v16, (void **)v17 + 11) >= 0 )
        {
          *((_DWORD *)v17 + 24) = v16;
          v72 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v72;
          v73 = v11;
          if ( v11 )
            ++*(_DWORD *)(v11 + 8);
          v33 = v63;
          v34 = *(_QWORD *)(v63 + 432);
          v68 = *(_OWORD *)(v34 + 64);
          v69 = *(_QWORD *)(v34 + 80);
          *(_QWORD *)(v34 + 72) = v12;
          if ( v11 )
            v35 = *(_QWORD *)v11;
          else
            v35 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v33 + 432) + 64LL) = v35;
          if ( v11 )
            v36 = *(_QWORD *)(v11 + 264);
          else
            v36 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v33 + 432) + 80LL) = v36;
          if ( gdwInAtomicOperation )
          {
            v36 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v36, gdwInAtomicOperation);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v17 + 2) = 0LL;
          v37 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, &v61, &v60);
          EtwTraceEndCallback(94LL);
          EnterCrit(0LL, 1LL);
          ThreadUnlock1(v39, v38);
          v40 = *(_QWORD *)(v63 + 432);
          *(_OWORD *)(v40 + 64) = v68;
          *(_QWORD *)(v40 + 80) = v69;
          if ( v37 >= 0 && v60 == 24 )
          {
            v41 = (__int64 *)v61;
            if ( v61 + 8 < v61 || v61 + 8 > W32UserProbeAddress )
              v41 = (__int64 *)W32UserProbeAddress;
            v42 = *v41;
            v67 = v42;
            if ( !a8 || (*(_DWORD *)(a8 + 84) & 5) == 0 )
            {
              v21 = a7;
              if ( (a7 & 2) == 0 )
              {
                v43 = v61;
                if ( v61 + 24 < v61 || v61 + 24 > W32UserProbeAddress )
                  v43 = W32UserProbeAddress;
                v74 = *(_OWORD *)v43;
                Src = *(void **)(v43 + 16);
                v76 = v74;
                v77 = Src;
                if ( v16 )
                {
                  if ( ((unsigned __int8)Src & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v44 = (char *)Src;
                  v45 = (char *)Src + v16;
                  if ( (unsigned __int64)v45 > W32UserProbeAddress || v45 < Src )
                    *W32UserProbeAddress = 0;
                  LOBYTE(v21) = a7;
                }
                else
                {
                  v44 = (char *)Src;
                }
                if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (v21 & 1) == 0 )
                {
                  memmove(a4, v44, v16);
                }
                else
                {
                  v44[v16 - 1] = 0;
                  v46 = v44 + 28;
                  v64 = (char *)(a4 + 7);
                  *(_OWORD *)a4 = *(_OWORD *)v44;
                  *((_QWORD *)a4 + 2) = *((_QWORD *)v44 + 2);
                  a4[6] = *((_DWORD *)v44 + 6);
                  memset(a4 + 7, 0, 0x40uLL);
                  MBToWCSEx(v47, v46, 0xFFFFFFFFLL, &v64, 32);
                }
              }
            }
            goto LABEL_113;
          }
        }
        goto LABEL_112;
      }
    }
  }
LABEL_35:
  switch ( a3 )
  {
    case 8uLL:
      v19 = 32;
      goto LABEL_43;
    case 0xCuLL:
      v19 = 28;
      goto LABEL_43;
    case 0xAuLL:
      if ( (a7 & 1) != 0 )
      {
        v62 = v83;
        v80 = *(_OWORD *)a4;
        v81 = *((_QWORD *)a4 + 2);
        v82 = a4[6];
        memset(v83, 0, 0x20uLL);
        WCSToMBEx(0LL, a4 + 7, 0xFFFFFFFFLL, &v62, 32);
        v19 = 60;
        v20 = (char *)&v80;
        goto LABEL_44;
      }
      v19 = 92;
LABEL_43:
      v20 = (char *)a4;
LABEL_44:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, v20, v19, (void **)v17 + 8) < 0 )
        goto LABEL_112;
      goto LABEL_95;
  }
  if ( (a7 & 1) == 0 )
  {
    v19 = v16;
    goto LABEL_43;
  }
  v66 = &v58;
  v23 = Win32AllocPool(v16, 1835627349LL);
  v24 = (char *)v23;
  v64 = (char *)v23;
  if ( !v23 )
    goto LABEL_112;
  v25 = (char *)(v23 + 4);
  v26 = v71;
  v27 = *v71;
  *(_DWORD *)v24 = *v71;
  v28 = v27 << 8;
  if ( v28 )
  {
    v29 = &v59;
    v30 = (char *)(v26 + 1) - v25;
    do
    {
      --v28;
      *v29 = 0;
      v31 = THREAD_CODEPAGE();
      WCSToMBEx(v31, &v25[v30], 1LL, &v66, 2);
      v29 = v66 + 1;
      if ( v66[1] )
        *(_WORD *)v25 = _byteswap_ushort(*(_WORD *)v66);
      else
        *(_WORD *)v25 = (unsigned __int8)*v66;
      v25 += 2;
    }
    while ( v28 );
    v11 = RegionSize;
    v24 = v64;
  }
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, v24, v16, (void **)v17 + 8) < 0 )
    goto LABEL_112;
  Win32FreePool(v24, v32, v21);
  v12 = v62;
LABEL_95:
  v72 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v72;
  v73 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v48 = v63;
  v49 = *(_QWORD *)(v63 + 432);
  v68 = *(_OWORD *)(v49 + 64);
  v69 = *(_QWORD *)(v49 + 80);
  *(_QWORD *)(v49 + 72) = v12;
  if ( v11 )
    v50 = *(_QWORD *)v11;
  else
    v50 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v48 + 432) + 64LL) = v50;
  if ( v11 )
    v51 = *(_QWORD *)(v11 + 264);
  else
    v51 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v48 + 432) + 80LL) = v51;
  if ( gdwInAtomicOperation )
  {
    v51 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v51, gdwInAtomicOperation);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v52 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, &v61, &v60);
  EtwTraceEndCallback(94LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v54, v53);
  v55 = *(_QWORD *)(v48 + 432);
  *(_OWORD *)(v55 + 64) = v68;
  *(_QWORD *)(v55 + 80) = v69;
  if ( v52 >= 0 && v60 == 24 )
  {
    v56 = (__int64 *)v61;
    if ( v61 + 8 < v61 || v61 + 8 > W32UserProbeAddress )
      v56 = (__int64 *)W32UserProbeAddress;
    v42 = *v56;
    v67 = *v56;
    goto LABEL_113;
  }
LABEL_112:
  v42 = 0LL;
LABEL_113:
  if ( v17 != (unsigned __int8 *)v79 && v17 != v84 )
  {
    v57 = (PVOID *)(v17 + 32);
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v57, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v78, (__int64)v57, v21, v22);
  }
  return v42;
}
