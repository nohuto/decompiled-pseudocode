/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180023790
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x180022350 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18002277C (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, struct SaDeviceParams **a2)
{
  void *v3; // rax
  void *v4; // r14
  LPVOID *v5; // rbx
  const WCHAR *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  _WORD *v9; // rax
  _WORD *v10; // r9
  int v11; // ebp
  unsigned __int64 v12; // rax
  _WORD *v13; // rdx
  int v14; // r10d
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  char *v17; // rsi
  __int16 v18; // cx
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  LPVOID v22; // rsi
  size_t v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdi
  LPVOID v26; // rsi
  size_t v27; // rbx
  LPMALLOC ppMalloc; // [rsp+70h] [rbp+8h] BYREF
  struct SaDeviceParams **v30; // [rsp+78h] [rbp+10h]
  void *v31; // [rsp+80h] [rbp+18h]

  v30 = a2;
  v3 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x68uLL);
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = (LPVOID *)v4;
  v31 = v4;
  v6 = *(const WCHAR **)a1;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  *(_QWORD *)v4 = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    *(_QWORD *)v4 = 0LL;
    if ( is_mul_ok(v8, 2uLL) )
    {
      v9 = CoTaskMemAlloc(2 * v8);
      v10 = v9;
      *(_QWORD *)v4 = v9;
      if ( !v9 )
        goto LABEL_43;
      v11 = 0;
      if ( v8 > 0x7FFFFFFF )
      {
        if ( v7 != -1LL )
LABEL_42:
          *v9 = 0;
      }
      else
      {
        if ( v7 < 0x7FFFFFFF )
        {
          if ( !v6 )
          {
            v6 = &pwsz;
            v7 = 0LL;
          }
          if ( v8 )
          {
            v12 = v8;
            v13 = v10;
            v14 = 0;
            v15 = 0LL;
            v16 = v7 - v8;
            v17 = (char *)((char *)v6 - (char *)v10);
            while ( v12 + v16 )
            {
              v18 = *(_WORD *)&v17[(_QWORD)v13];
              if ( !v18 )
                break;
              *v13++ = v18;
              ++v15;
              if ( !--v12 )
              {
                --v13;
                --v15;
                v14 = -2147024774;
                break;
              }
            }
            *v13 = 0;
            v19 = v8 - v15;
            if ( v14 >= 0 && v19 > 1 && 2 * v19 > 2 )
              memset(&v10[v15 + 1], 0, 2 * v19 - 2);
          }
          goto LABEL_20;
        }
        if ( v7 != -1LL )
          goto LABEL_42;
      }
    }
    else
    {
      v11 = -2147024362;
    }
LABEL_20:
    if ( v11 < 0 )
      goto LABEL_32;
    v20 = *((_QWORD *)a1 + 2);
    if ( !v20 )
      goto LABEL_26;
    v21 = *(unsigned __int16 *)(v20 + 16);
    v22 = CoTaskMemAlloc(v21 + 18);
    *((_QWORD *)v4 + 2) = v22;
    if ( v22 )
    {
      v23 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v23 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v22);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset(*((void **)v4 + 2), 0, v23);
      v11 = 0;
      memcpy_0(*((void **)v4 + 2), *((const void **)a1 + 2), v21 + 18);
LABEL_26:
      v24 = *((_QWORD *)a1 + 3);
      if ( !v24 )
      {
LABEL_31:
        *((_OWORD *)v4 + 4) = *((_OWORD *)a1 + 4);
        *((_OWORD *)v4 + 3) = *((_OWORD *)a1 + 3);
        *((_DWORD *)v4 + 2) = *((_DWORD *)a1 + 2);
        *((_QWORD *)v4 + 4) = *((_QWORD *)a1 + 4);
        *((_QWORD *)v4 + 5) = *((_QWORD *)a1 + 5);
        *((_OWORD *)v4 + 5) = *((_OWORD *)a1 + 5);
        *((_BYTE *)v4 + 96) = *((_BYTE *)a1 + 96);
        v5 = 0LL;
        *v30 = (struct SaDeviceParams *)v4;
        goto LABEL_32;
      }
      v25 = *(unsigned __int16 *)(v24 + 16);
      v26 = CoTaskMemAlloc(v25 + 18);
      *((_QWORD *)v4 + 3) = v26;
      if ( v26 )
      {
        v27 = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v27 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v26);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        }
        memset(*((void **)v4 + 3), 0, v27);
        v11 = 0;
        memcpy_0(*((void **)v4 + 3), *((const void **)a1 + 3), v25 + 18);
        goto LABEL_31;
      }
    }
LABEL_43:
    v11 = -2147024882;
    goto LABEL_32;
  }
  v11 = -2147024362;
LABEL_32:
  if ( v5 )
  {
    CoTaskMemFree(v5[3]);
    v5[3] = 0LL;
    CoTaskMemFree(v5[2]);
    v5[2] = 0LL;
    CoTaskMemFree(*v5);
    *v5 = 0LL;
    operator delete(v5, (const struct std::nothrow_t *)0x68);
  }
  return (unsigned int)v11;
}
