/*
 * XREFs of NtGdiGetUFIPathname @ 0x14032AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x140310798 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetUFIPathname(
        const void *a1,
        void *a2,
        void *a3,
        void *a4,
        char a5,
        void *a6,
        void *a7,
        void *a8,
        __int64 a9,
        void *a10)
{
  unsigned __int16 *v11; // r14
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  unsigned int UFIPathname; // esi
  bool v16; // cf
  unsigned int *v17; // rcx
  unsigned int v19; // [rsp+60h] [rbp-308h] BYREF
  int v20; // [rsp+64h] [rbp-304h] BYREF
  int v21; // [rsp+68h] [rbp-300h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp-2FCh] BYREF
  unsigned int v23; // [rsp+70h] [rbp-2F8h] BYREF
  int v24; // [rsp+74h] [rbp-2F4h] BYREF
  unsigned __int16 *v25; // [rsp+78h] [rbp-2F0h]
  __int64 v26; // [rsp+80h] [rbp-2E8h]
  __int64 v27; // [rsp+88h] [rbp-2E0h]
  __int64 v28; // [rsp+90h] [rbp-2D8h]
  __int64 v29; // [rsp+98h] [rbp-2D0h] BYREF
  HSEMAPHORE v30; // [rsp+A0h] [rbp-2C8h] BYREF
  void *v31; // [rsp+A8h] [rbp-2C0h]
  void *v32; // [rsp+B0h] [rbp-2B8h]
  void *v33; // [rsp+B8h] [rbp-2B0h]
  void *v34; // [rsp+C0h] [rbp-2A8h]
  void *v35; // [rsp+C8h] [rbp-2A0h]
  void *v36; // [rsp+D0h] [rbp-298h]
  void *v37; // [rsp+D8h] [rbp-290h]
  __int64 v38; // [rsp+E0h] [rbp-288h]
  void *v39; // [rsp+F0h] [rbp-278h]
  void *v40; // [rsp+F8h] [rbp-270h]
  void *v41; // [rsp+100h] [rbp-268h]
  __int64 v42; // [rsp+108h] [rbp-260h]
  _BYTE v43[528]; // [rsp+110h] [rbp-258h] BYREF

  v33 = a4;
  v32 = a3;
  v39 = a2;
  v40 = a3;
  v41 = a4;
  v34 = a6;
  v35 = a7;
  v31 = a8;
  v42 = a9;
  v28 = a9;
  v26 = a9;
  v38 = a9;
  v36 = a10;
  v27 = (__int64)a10;
  v37 = a10;
  v29 = 0LL;
  v11 = 0LL;
  v25 = 0LL;
  v19 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v20 = 0;
  GreProbeAndReadFromUntrustedVa(&v29, 8uLL, a1, 8uLL, 1uLL);
  SessionState = W32GetSessionState(v13, v12);
  SEMOBJ<17>::SEMOBJ<17>(&v30, *(_QWORD *)(SessionState + 96) + 4864LL);
  v26 = -a9;
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)&v29,
                  &v19,
                  0LL,
                  0,
                  &v23,
                  a5,
                  &v21,
                  &v22,
                  v31,
                  (int *)((unsigned __int64)&v24 & -(__int64)(a9 != 0)),
                  (unsigned int *)((unsigned __int64)&v20 & -(__int64)(a10 != 0LL)));
  if ( UFIPathname )
  {
    if ( v19 > 0x104 )
    {
      if ( v19 <= 0x1388000 )
      {
        v11 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v19);
        v25 = v11;
      }
      UFIPathname &= -(v11 != 0LL);
    }
    else
    {
      v11 = (unsigned __int16 *)v43;
      v25 = (unsigned __int16 *)v43;
    }
  }
  if ( UFIPathname && !v21 && v11 )
  {
    v16 = v27 != 0;
    v27 = -v27;
    v17 = (unsigned int *)((unsigned __int64)&v20 & -(__int64)v16);
    v16 = v28 != 0;
    v28 = -v28;
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)&v29,
                    0LL,
                    v11,
                    v19,
                    &v23,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (int *)((unsigned __int64)&v24 & -(__int64)v16),
                    v17);
  }
  SEMOBJ<17>::vUnlock(&v30);
  if ( UFIPathname )
  {
    if ( v19 > 0x30C )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      if ( a2 )
        GreProbeAndWriteToUntrustedVa(a2, 4uLL, &v19, 4uLL, 1uLL);
      if ( v32 )
        GreProbeAndWriteToUntrustedVa(v32, 2LL * v19, v11, 2LL * v19, 1uLL);
      if ( v33 )
        GreProbeAndWriteToUntrustedVa(v33, 4uLL, &v23, 4uLL, 1uLL);
      if ( v21 )
      {
        if ( v34 )
          GreProbeAndWriteToUntrustedVa(v34, 4uLL, &v21, 4uLL, 1uLL);
        if ( v35 )
          GreProbeAndWriteToUntrustedVa(v35, 4uLL, &v22, 4uLL, 1uLL);
      }
      if ( a9 )
        GreProbeAndWriteToUntrustedVa((void *)a9, 4uLL, &v24, 4uLL, 1uLL);
      if ( v36 )
        GreProbeAndWriteToUntrustedVa(v36, 4uLL, &v20, 4uLL, 1uLL);
    }
  }
  if ( v11 && v11 != (unsigned __int16 *)v43 )
    FreeTmpBuffer(v11);
  return UFIPathname;
}
