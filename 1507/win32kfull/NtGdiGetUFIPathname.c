/*
 * XREFs of NtGdiGetUFIPathname @ 0x1C02A7800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     TraceGreReleaseSemaphore @ 0x1C015CBD8 (TraceGreReleaseSemaphore.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     TraceGreAcquireSemaphoreEx @ 0x1C025E164 (TraceGreAcquireSemaphoreEx.c)
 *     GreGetUFIPathname @ 0x1C026A83C (GreGetUFIPathname.c)
 */

__int64 __fastcall NtGdiGetUFIPathname(
        _QWORD *a1,
        _DWORD *a2,
        char *a3,
        _DWORD *a4,
        char a5,
        _DWORD *a6,
        _DWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  _QWORD *v12; // rdx
  _DWORD *v13; // r13
  _DWORD *v14; // r14
  char *v15; // rdi
  unsigned int UFIPathname; // esi
  _DWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  size_t v20; // r8
  _DWORD *v21; // rdx
  _DWORD *v22; // rdx
  int v24[2]; // [rsp+60h] [rbp-2B8h] BYREF
  int v25; // [rsp+68h] [rbp-2B0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-2A8h] BYREF
  __int64 v27; // [rsp+78h] [rbp-2A0h] BYREF
  _DWORD *v28; // [rsp+80h] [rbp-298h] BYREF
  __int64 v29; // [rsp+88h] [rbp-290h] BYREF
  char *v30; // [rsp+90h] [rbp-288h]
  _DWORD *v31; // [rsp+98h] [rbp-280h]
  int v32[2]; // [rsp+A0h] [rbp-278h] BYREF
  _DWORD *v33; // [rsp+A8h] [rbp-270h]
  _DWORD *v34; // [rsp+B0h] [rbp-268h]
  _BYTE v35[528]; // [rsp+C0h] [rbp-258h] BYREF

  v31 = a4;
  v12 = a1;
  v28 = a2;
  v29 = (__int64)a3;
  *(_QWORD *)v24 = a4;
  v13 = a6;
  v33 = a6;
  Address = a8;
  v14 = a9;
  v34 = a9;
  v15 = 0LL;
  v30 = 0LL;
  LODWORD(v27) = 0;
  v25 = 0;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  *(_QWORD *)v32 = *v12;
  GreAcquireSemaphore(ghsemPublicPFT);
  TraceGreAcquireSemaphoreEx((__int64)L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)v32,
                  v24,
                  0LL,
                  0,
                  &v29,
                  a5,
                  (int *)&Address,
                  &v27,
                  Address,
                  (_DWORD *)((unsigned __int64)&v28 & -(__int64)(a9 != 0LL)),
                  (unsigned int *)((unsigned __int64)&v25 & ((unsigned __int128)-(__int128)(unsigned __int64)a10 >> 64)));
  if ( UFIPathname )
  {
    if ( v24[0] > 0x104u )
    {
      if ( v24[0] <= 0x1388000u )
      {
        v15 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * v24[0]));
        v30 = v15;
      }
      UFIPathname &= -(v15 != 0LL);
    }
    else
    {
      v15 = v35;
      v30 = v35;
    }
  }
  if ( UFIPathname && !(_DWORD)Address && v15 )
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)v32,
                    0LL,
                    v15,
                    v24[0],
                    &v29,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)((unsigned __int64)&v28 & -(__int64)(a9 != 0LL)),
                    (unsigned int *)((unsigned __int64)&v25 & ((unsigned __int128)-(__int128)(unsigned __int64)a10 >> 64)));
  TraceGreReleaseSemaphore((__int64)L"ghsemPublicPFT", ghsemPublicPFT);
  GreReleaseSemaphoreInternal(ghsemPublicPFT);
  if ( UFIPathname )
  {
    if ( v24[0] > 0x30Cu )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (_DWORD *)W32UserProbeAddress;
        *a2 = v24[0];
      }
      if ( a3 )
      {
        v20 = 2LL * (unsigned int)v24[0];
        if ( (unsigned __int64)&a3[v20] > W32UserProbeAddress || &a3[v20] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v15, v20);
      }
      v21 = v31;
      if ( v31 )
      {
        if ( (unsigned __int64)v31 >= W32UserProbeAddress )
          v21 = (_DWORD *)W32UserProbeAddress;
        *v21 = v29;
      }
      if ( (_DWORD)Address )
      {
        if ( a6 )
        {
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v13 = (_DWORD *)W32UserProbeAddress;
          *v13 = (_DWORD)Address;
        }
        v22 = a7;
        if ( a7 )
        {
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v22 = (_DWORD *)W32UserProbeAddress;
          *v22 = v27;
        }
      }
      if ( a9 )
      {
        if ( (unsigned __int64)a9 >= W32UserProbeAddress )
          v14 = (_DWORD *)W32UserProbeAddress;
        *v14 = (_DWORD)v28;
      }
      v17 = a10;
      if ( a10 )
      {
        if ( (unsigned __int64)a10 >= W32UserProbeAddress )
          v17 = (_DWORD *)W32UserProbeAddress;
        *v17 = v25;
      }
    }
  }
  if ( v15 && v15 != v35 )
    FreeTmpBuffer(v15, v17, v18, v19);
  return UFIPathname;
}
