/*
 * XREFs of SfnIMECONTROL @ 0x1C020E620
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C005A7F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     MBToWCSEx @ 0x1C01188A8 (MBToWCSEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C0213864 (THREAD_CODEPAGE.c)
 *     WCSToMBEx @ 0x1C0249F04 (WCSToMBEx.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnIMECONTROL(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        WCHAR *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  ULONG_PTR v10; // rsi
  PWCH v11; // r13
  ULONG_PTR v12; // r12
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned __int8 *v18; // rdi
  unsigned int v19; // r8d
  char *v20; // rdx
  __int64 v21; // rax
  char *v22; // r13
  char *v23; // r12
  unsigned int *v24; // rax
  int v25; // r15d
  int v26; // r15d
  _BYTE *v27; // r8
  signed __int64 v28; // rsi
  unsigned __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 *v47; // rsi
  char v48; // r8
  unsigned __int64 v49; // rcx
  const CHAR *v50; // rdx
  char *v51; // rcx
  const CHAR *v52; // rbx
  __int16 v53; // cx
  int v54; // [rsp+38h] [rbp-3B0h] BYREF
  int v55; // [rsp+3Ch] [rbp-3ACh] BYREF
  PWCH v56; // [rsp+40h] [rbp-3A8h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-3A0h] BYREF
  ULONG_PTR v58; // [rsp+50h] [rbp-398h]
  unsigned __int8 *v59; // [rsp+58h] [rbp-390h] BYREF
  unsigned __int8 *v60; // [rsp+60h] [rbp-388h] BYREF
  char *v61; // [rsp+68h] [rbp-380h]
  ULONG_PTR RegionSize[2]; // [rsp+70h] [rbp-378h] BYREF
  void *v63; // [rsp+80h] [rbp-368h]
  __int64 v64; // [rsp+88h] [rbp-360h]
  __int64 v65; // [rsp+90h] [rbp-358h] BYREF
  ULONG_PTR v66; // [rsp+98h] [rbp-350h]
  __int128 v67; // [rsp+A8h] [rbp-340h]
  void *Src; // [rsp+B8h] [rbp-330h]
  __int128 v69; // [rsp+C0h] [rbp-328h]
  __int64 v70; // [rsp+D0h] [rbp-318h]
  _QWORD v71[3]; // [rsp+E8h] [rbp-300h] BYREF
  _DWORD v72[28]; // [rsp+100h] [rbp-2E8h] BYREF
  __int128 v73; // [rsp+170h] [rbp-278h] BYREF
  __int64 v74; // [rsp+180h] [rbp-268h]
  unsigned int v75; // [rsp+188h] [rbp-260h]
  unsigned __int8 v76[36]; // [rsp+18Ch] [rbp-25Ch] BYREF
  unsigned __int8 v77[512]; // [rsp+1B0h] [rbp-238h] BYREF

  v55 = a2;
  v10 = a1;
  RegionSize[0] = a1;
  v11 = (PWCH)gptiCurrent;
  v56 = (PWCH)gptiCurrent;
  if ( a1 )
    v12 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  v58 = v12;
  if ( a3 < 7 )
    goto LABEL_17;
  if ( a3 <= 8 )
  {
    v13 = 1;
    v16 = 32;
    goto LABEL_18;
  }
  if ( a3 <= 0xA )
    goto LABEL_15;
  if ( a3 <= 0xC )
  {
    v13 = 1;
    v16 = 28;
    goto LABEL_18;
  }
  if ( a3 == 17 )
  {
LABEL_15:
    v13 = 1;
    v16 = (a7 & 1) != 0 ? 60 : 92;
    goto LABEL_18;
  }
  if ( a3 == 24 )
  {
    v13 = 1;
    v14 = (unsigned __int64)*(unsigned int *)a4 << 9;
    if ( v14 > 0xFFFFFFFF )
      return 0LL;
    v16 = v14 + 4;
    if ( (int)v14 + 4 < (unsigned int)v14 )
      return 0LL;
    LODWORD(v61) = v14 + 4;
  }
  else
  {
LABEL_17:
    v13 = 0;
    v16 = 0;
  }
LABEL_18:
  if ( v13 )
  {
    v18 = AllocCallbackMessage(104, v13, v16, v77, 1, 0x200uLL);
    if ( !v18 )
      return 0LL;
  }
  else
  {
    v18 = (unsigned __int8 *)v72;
    memset(v72, 0, 0x68uLL);
    v72[0] = 104;
  }
  if ( v18 != (unsigned __int8 *)v72 && v18 != v77 )
    PushW32ThreadLock((__int64)v18, v71, (__int64)Win32FreePool);
  *((_QWORD *)v18 + 5) = v12;
  *((_DWORD *)v18 + 12) = v55;
  *((_QWORD *)v18 + 7) = a3;
  *((_QWORD *)v18 + 8) = a4;
  *((_QWORD *)v18 + 9) = a5;
  *((_QWORD *)v18 + 10) = a6;
  if ( a3 == 7 )
    goto LABEL_69;
  if ( a3 != 8 )
  {
    if ( a3 == 9 )
      goto LABEL_69;
    if ( a3 != 10 )
    {
      if ( a3 == 11 )
        goto LABEL_69;
      if ( a3 != 12 )
      {
        if ( a3 != 17 )
        {
          if ( a3 != 24 )
            goto LABEL_55;
          goto LABEL_33;
        }
LABEL_69:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v18, v16, (void **)v18 + 11) >= 0 )
        {
          *((_DWORD *)v18 + 24) = v16;
          v65 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v65;
          v66 = v10;
          if ( v10 )
            ++*(_DWORD *)(v10 + 8);
          v40 = *(_QWORD *)(gptiCurrent + 440LL);
          v69 = *(_OWORD *)(v40 + 64);
          v70 = *(_QWORD *)(v40 + 80);
          *(_QWORD *)(v40 + 72) = v58;
          v41 = v10 ? *(_QWORD *)v10 : 0LL;
          *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v41;
          v42 = v10 ? *(_QWORD *)(v10 + 264) : 0LL;
          *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v42;
          UserSessionSwitchLeaveCrit(v42, v39);
          EtwTraceBeginCallback(93LL);
          *((_QWORD *)v18 + 2) = 0LL;
          v43 = KeUserModeCallback(93LL, v18, *(unsigned int *)v18, &v57, &v54);
          EtwTraceEndCallback(93LL);
          EnterCrit(1LL);
          ThreadUnlock1(v45, v44);
          v46 = *(_QWORD *)(gptiCurrent + 440LL);
          *(_OWORD *)(v46 + 64) = v69;
          *(_QWORD *)(v46 + 80) = v70;
          if ( v43 >= 0 && v54 == 24 )
          {
            v47 = (__int64 *)v57;
            if ( v57 + 8 < v57 || v57 + 8 > W32UserProbeAddress )
              v47 = (__int64 *)W32UserProbeAddress;
            v38 = *v47;
            v64 = v38;
            if ( !a8 || (*(_DWORD *)(a8 + 84) & 5) == 0 )
            {
              v48 = a7;
              if ( (a7 & 2) == 0 )
              {
                v49 = v57;
                if ( v57 + 24 < v57 || v57 + 24 > W32UserProbeAddress )
                  v49 = W32UserProbeAddress;
                v67 = *(_OWORD *)v49;
                Src = *(void **)(v49 + 16);
                *(_OWORD *)RegionSize = v67;
                v63 = Src;
                if ( v16 )
                {
                  if ( ((unsigned __int8)Src & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v50 = (const CHAR *)Src;
                  v51 = (char *)Src + v16;
                  if ( (unsigned __int64)v51 > W32UserProbeAddress || v51 < Src )
                    *W32UserProbeAddress = 0;
                  v48 = a7;
                }
                else
                {
                  v50 = (const CHAR *)Src;
                }
                if ( a3 == 7 || a3 == 11 || (v48 & 1) == 0 )
                {
                  memmove(a4, v50, v16);
                }
                else
                {
                  v50[v16 - 1] = 0;
                  v52 = v50 + 28;
                  v56 = a4 + 14;
                  *(_OWORD *)a4 = *(_OWORD *)v50;
                  *((_QWORD *)a4 + 2) = *((_QWORD *)v50 + 2);
                  *((_DWORD *)a4 + 6) = *((_DWORD *)v50 + 6);
                  memset(a4 + 14, 0, 0x40uLL);
                  MBToWCSEx(v53, v52, -1, &v56, 32);
                }
              }
            }
            goto LABEL_104;
          }
        }
        goto LABEL_103;
      }
    }
  }
LABEL_33:
  switch ( a3 )
  {
    case 8uLL:
      v19 = 32;
      goto LABEL_53;
    case 0xCuLL:
      v19 = 28;
      goto LABEL_53;
    case 0xAuLL:
      if ( (a7 & 1) != 0 )
      {
        v59 = v76;
        v73 = *(_OWORD *)a4;
        v74 = *((_QWORD *)a4 + 2);
        v75 = *((_DWORD *)a4 + 6);
        memset(v76, 0, 0x20uLL);
        WCSToMBEx(0LL, a4 + 14, 0xFFFFFFFFLL, &v59, 32);
        v19 = 60;
        v20 = (char *)&v73;
        goto LABEL_54;
      }
      v19 = 92;
LABEL_53:
      v20 = (char *)a4;
LABEL_54:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, v20, v19, (void **)v18 + 8) < 0 )
        goto LABEL_103;
      goto LABEL_55;
  }
  if ( (a7 & 1) == 0 )
  {
    v19 = v16;
    goto LABEL_53;
  }
  v60 = (unsigned __int8 *)&v55;
  v21 = Win32AllocPool(v16, 1835627349LL);
  v22 = (char *)v21;
  v61 = (char *)v21;
  if ( !v21 )
    goto LABEL_103;
  v23 = (char *)(v21 + 4);
  v24 = (unsigned int *)(a4 + 2);
  v25 = *(_DWORD *)a4;
  *(_DWORD *)v22 = v25;
  v26 = v25 << 8;
  if ( v26 )
  {
    v27 = (char *)&v55 + 1;
    v28 = (char *)v24 - v23;
    do
    {
      --v26;
      *v27 = 0;
      v29 = THREAD_CODEPAGE();
      WCSToMBEx(v29, &v23[v28], 1LL, &v60, 2);
      v27 = v60 + 1;
      if ( v60[1] )
        *(_WORD *)v23 = _byteswap_ushort(*(_WORD *)v60);
      else
        *(_WORD *)v23 = *v60;
      v23 += 2;
    }
    while ( v26 );
    v10 = RegionSize[0];
    v22 = v61;
  }
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, v22, v16, (void **)v18 + 8) < 0 )
    goto LABEL_103;
  Win32FreePool(v22);
  v11 = v56;
LABEL_55:
  v65 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v65;
  v66 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v30 = *((_QWORD *)v11 + 55);
  *(_OWORD *)RegionSize = *(_OWORD *)(v30 + 64);
  v56 = *(PWCH *)(v30 + 80);
  *(_QWORD *)(v30 + 72) = v58;
  if ( v10 )
    v31 = *(_QWORD *)v10;
  else
    v31 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 55) + 64LL) = v31;
  if ( v10 )
    v32 = *(_QWORD *)(v10 + 264);
  else
    v32 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 55) + 80LL) = v32;
  UserSessionSwitchLeaveCrit(v32, v17);
  EtwTraceBeginCallback(93LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v33 = KeUserModeCallback(93LL, v18, *(unsigned int *)v18, &v57, &v54);
  EtwTraceEndCallback(93LL);
  EnterCrit(1LL);
  ThreadUnlock1(v35, v34);
  v36 = *((_QWORD *)v11 + 55);
  *(_OWORD *)(v36 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v36 + 80) = v56;
  if ( v33 >= 0 && v54 == 24 )
  {
    v37 = (__int64 *)v57;
    if ( v57 + 8 < v57 || v57 + 8 > W32UserProbeAddress )
      v37 = (__int64 *)W32UserProbeAddress;
    v38 = *v37;
    v64 = *v37;
    goto LABEL_104;
  }
LABEL_103:
  v38 = 0LL;
LABEL_104:
  if ( v18 != (unsigned __int8 *)v72 && v18 != v77 )
  {
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v18 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v71);
  }
  return v38;
}
