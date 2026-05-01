/*
 * XREFs of ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000BB60
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000B770 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180006374 (-LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY.c)
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180009FC0 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memcmp_0 @ 0x180024EC6 (memcmp_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

void __fastcall ModernResourceEnforcer::HandleGroupSchedulingOwnershipChangeForSingleHost(
        ModernResourceEnforcer *this,
        unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  int v12; // eax
  __int128 v13; // xmm1
  char *v14; // r13
  bool v15; // zf
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  WCHAR *v18; // rbx
  __int64 v19; // rdi
  unsigned __int8 *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  char *v25; // rbx
  char *v26; // r14
  unsigned __int64 v27; // rax
  char *v28; // rbx
  ModernResourceEnforcer *v29; // rsi
  unsigned __int64 v30; // rdi
  unsigned int v31; // eax
  unsigned __int16 *v32; // r13
  int v33; // ebx
  unsigned int v34; // r14d
  unsigned __int16 v35; // ax
  int v36; // eax
  unsigned int v37; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR v38; // [rsp+64h] [rbp-9Ch]
  unsigned int v39; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v41; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v42; // [rsp+78h] [rbp-88h]
  void *v43; // [rsp+80h] [rbp-80h]
  ModernResourceEnforcer *v44; // [rsp+88h] [rbp-78h]
  wchar_t Buffer[232]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD Buf1[4]; // [rsp+260h] [rbp+160h] BYREF
  int v47; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v48; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v49; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 v50; // [rsp+2B0h] [rbp+1B0h]

  v42 = a2;
  v44 = this;
  v41 = a6;
  v43 = a7;
  v40 = a4;
  memset_0(Buffer, 0, 0x228uLL);
  if ( swprintf_s(Buffer, 0xE8uLL, L"%s", a2) <= 0 )
    __fastfail(0x80070057);
  v12 = *((_DWORD *)a3 + 16);
  v13 = *((_OWORD *)a3 + 1);
  v14 = (char *)this + 208;
  v15 = *((_QWORD *)this + 28) == 0LL;
  Buf1[0] = *(_OWORD *)a3;
  v16 = *((_OWORD *)a3 + 2);
  v47 = v12;
  Buf1[1] = v13;
  v17 = *((_OWORD *)a3 + 3);
  v48 = a4;
  Buf1[2] = v16;
  Buf1[3] = v17;
  v49 = a5;
  v50 = a6;
  if ( v15 )
    goto LABEL_29;
  v18 = Buffer;
  v19 = 314159LL;
  do
  {
    v38 = RtlUpcaseUnicodeChar(*v18++);
    v19 = HIBYTE(v38) + 37 * ((unsigned __int8)v38 + 37 * v19);
  }
  while ( v18 < (WCHAR *)Buf1 );
  v20 = (unsigned __int8 *)Buf1;
  v21 = 11LL;
  do
  {
    v22 = *v20;
    v20 += 8;
    v19 = *(v20 - 1)
        + 37
        * (*(v20 - 2)
         + 37
         * (*(v20 - 3)
          + 37 * (*(v20 - 4) + 37 * (*(v20 - 5) + 37 * (*(v20 - 6) + 37 * (*(v20 - 7) + 37 * (v22 + 37 * v19)))))));
    --v21;
  }
  while ( v21 );
  v23 = 32769 * ((9 * v19) ^ ((unsigned __int64)(9 * v19) >> 11));
  v24 = *((_QWORD *)v14 + 2) + 16 * (v23 & ((8LL << v14[32]) - 1));
  v25 = *(char **)v24;
  if ( !*(_QWORD *)v24 || (v26 = **(char ***)(v24 + 8), v25 == v26) )
  {
LABEL_29:
    v25 = v14;
  }
  else
  {
    while ( 1 )
    {
      v27 = *((_QWORD *)v25 + 2);
      if ( v27 >= v23 )
      {
        if ( v27 > v23 )
          goto LABEL_29;
        if ( !_wcsicmp(Buffer, (const wchar_t *)v25 + 12) && !memcmp_0(Buf1, v25 + 488, 0x58uLL) )
          break;
      }
      v25 = *(char **)v25;
      if ( v25 == v26 )
        goto LABEL_29;
    }
  }
  if ( v25 == v14 )
    v28 = 0LL;
  else
    v28 = v25 + 576;
  if ( a8 )
  {
    v29 = v44;
    v30 = v41;
    v31 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD))v44
           + 14))(
            v43,
            a5,
            v41,
            &v39,
            0LL,
            0LL,
            0LL,
            0LL);
    v32 = v42;
    v33 = v31;
    v34 = v40;
    LogQueryApplicationProperties(v31, v42, (const SID *)a3, v40, a5, v30, &v39, 0LL, 0LL, 0LL);
    if ( v33 >= 0 && v39 != -1 )
    {
      v37 = -1;
      goto LABEL_26;
    }
  }
  else if ( *v28 < 0 )
  {
    v35 = *((_WORD *)v28 + 1);
    if ( v35 != 0xFFFF )
    {
      v37 = v35;
      if ( v35 != -1 )
      {
        v30 = v41;
        v29 = v44;
        v34 = v40;
        v32 = v42;
LABEL_26:
        v36 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD))v29
               + 13))(
                v43,
                a5,
                v30,
                &v37,
                0LL,
                0LL,
                0LL,
                0LL);
        if ( v36 < 0 )
          LogSetApplicationProperties(v36, v32, (const SID *)a3, v34, a5, v30, &v37, 0LL, 0LL, 0LL);
      }
    }
  }
}
