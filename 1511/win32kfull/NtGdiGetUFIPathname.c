/*
 * XREFs of NtGdiGetUFIPathname @ 0x1C02A7010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     TraceGreReleaseSemaphore @ 0x1C0152328 (TraceGreReleaseSemaphore.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     TraceGreAcquireSemaphoreEx @ 0x1C025DCB4 (TraceGreAcquireSemaphoreEx.c)
 *     GreGetUFIPathname @ 0x1C02693CC (GreGetUFIPathname.c)
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
  size_t v17; // r8
  _DWORD *v18; // rdx
  _DWORD *v19; // rdx
  _DWORD *v20; // rdx
  int v22[2]; // [rsp+60h] [rbp-2B8h] BYREF
  int v23; // [rsp+68h] [rbp-2B0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-2A8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-2A0h] BYREF
  _DWORD *v26; // [rsp+80h] [rbp-298h] BYREF
  __int64 v27; // [rsp+88h] [rbp-290h] BYREF
  char *v28; // [rsp+90h] [rbp-288h]
  _DWORD *v29; // [rsp+98h] [rbp-280h]
  int v30[2]; // [rsp+A0h] [rbp-278h] BYREF
  _DWORD *v31; // [rsp+A8h] [rbp-270h]
  _DWORD *v32; // [rsp+B0h] [rbp-268h]
  _BYTE v33[528]; // [rsp+C0h] [rbp-258h] BYREF

  v29 = a4;
  v12 = a1;
  v26 = a2;
  v27 = (__int64)a3;
  *(_QWORD *)v22 = a4;
  v13 = a6;
  v31 = a6;
  Address = a8;
  v14 = a9;
  v32 = a9;
  v15 = 0LL;
  v28 = 0LL;
  LODWORD(v25) = 0;
  v23 = 0;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  *(_QWORD *)v30 = *v12;
  GreAcquireSemaphore(ghsemPublicPFT);
  TraceGreAcquireSemaphoreEx((__int64)L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)v30,
                  v22,
                  0LL,
                  0,
                  &v27,
                  a5,
                  (int *)&Address,
                  &v25,
                  Address,
                  (_DWORD *)((unsigned __int64)&v26 & -(__int64)(a9 != 0LL)),
                  (unsigned int *)((unsigned __int64)&v23 & ((unsigned __int128)-(__int128)(unsigned __int64)a10 >> 64)));
  if ( UFIPathname )
  {
    if ( v22[0] > 0x104u )
    {
      if ( v22[0] <= 0x1388000u )
      {
        v15 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * v22[0]));
        v28 = v15;
      }
      UFIPathname &= -(v15 != 0LL);
    }
    else
    {
      v15 = v33;
      v28 = v33;
    }
  }
  if ( UFIPathname && !(_DWORD)Address && v15 )
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)v30,
                    0LL,
                    v15,
                    v22[0],
                    &v27,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)((unsigned __int64)&v26 & -(__int64)(a9 != 0LL)),
                    (unsigned int *)((unsigned __int64)&v23 & ((unsigned __int128)-(__int128)(unsigned __int64)a10 >> 64)));
  TraceGreReleaseSemaphore((__int64)L"ghsemPublicPFT", ghsemPublicPFT);
  GreReleaseSemaphoreInternal(ghsemPublicPFT);
  if ( UFIPathname )
  {
    if ( v22[0] > 0x30Cu )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (_DWORD *)W32UserProbeAddress;
        *a2 = v22[0];
      }
      if ( a3 )
      {
        v17 = 2LL * (unsigned int)v22[0];
        if ( (unsigned __int64)&a3[v17] > W32UserProbeAddress || &a3[v17] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v15, v17);
      }
      v18 = v29;
      if ( v29 )
      {
        if ( (unsigned __int64)v29 >= W32UserProbeAddress )
          v18 = (_DWORD *)W32UserProbeAddress;
        *v18 = v27;
      }
      if ( (_DWORD)Address )
      {
        if ( a6 )
        {
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v13 = (_DWORD *)W32UserProbeAddress;
          *v13 = (_DWORD)Address;
        }
        v19 = a7;
        if ( a7 )
        {
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v19 = (_DWORD *)W32UserProbeAddress;
          *v19 = v25;
        }
      }
      if ( a9 )
      {
        if ( (unsigned __int64)a9 >= W32UserProbeAddress )
          v14 = (_DWORD *)W32UserProbeAddress;
        *v14 = (_DWORD)v26;
      }
      v20 = a10;
      if ( a10 )
      {
        if ( (unsigned __int64)a10 >= W32UserProbeAddress )
          v20 = (_DWORD *)W32UserProbeAddress;
        *v20 = v23;
      }
    }
  }
  if ( v15 && v15 != v33 )
    FreeTmpBuffer(v15);
  return UFIPathname;
}
