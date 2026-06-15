/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180028D10
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x180026D80 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180027260 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(IMalloc *a1, struct SaDeviceParams **a2)
{
  LPMALLOC v2; // r15
  LPVOID *v3; // rax
  LPVOID *v4; // r12
  LPVOID *v5; // rbx
  __int16 *lpVtbl; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
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
  unsigned __int64 v19; // r14
  struct IMallocVtbl *v20; // rax
  __int64 Release_low; // rbp
  LPVOID v22; // r14
  size_t v23; // r15
  struct IMallocVtbl *v24; // rax
  __int64 v25; // rsi
  LPVOID v26; // rbp
  size_t v27; // r14
  unsigned int v28; // r15d
  LPMALLOC v30; // [rsp+80h] [rbp+8h] BYREF
  struct SaDeviceParams **v31; // [rsp+88h] [rbp+10h]
  LPMALLOC ppMalloc; // [rsp+90h] [rbp+18h] BYREF
  LPVOID *v33; // [rsp+98h] [rbp+20h]

  v31 = a2;
  v30 = a1;
  v2 = a1;
  v3 = (LPVOID *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v4;
  v33 = v4;
  lpVtbl = (__int16 *)v2->lpVtbl;
  v7 = -1LL;
  do
    ++v7;
  while ( lpVtbl[v7] );
  *v4 = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    *v4 = 0LL;
    if ( is_mul_ok(v8, 2uLL) )
    {
      v9 = CoTaskMemAlloc(2 * v8);
      v10 = v9;
      *v4 = v9;
      if ( !v9 )
        goto LABEL_44;
      v11 = 0;
      LODWORD(ppMalloc) = 0;
      if ( v8 > 0x7FFFFFFF )
      {
        if ( v7 != -1LL )
LABEL_43:
          *v9 = 0;
      }
      else
      {
        if ( v7 < 0x7FFFFFFF )
        {
          if ( !lpVtbl )
          {
            lpVtbl = &word_1800B1B90;
            v7 = 0LL;
          }
          if ( v8 )
          {
            v12 = v8;
            v13 = v10;
            v14 = 0;
            v15 = 0LL;
            v16 = v7 - v8;
            v17 = (char *)((char *)lpVtbl - (char *)v10);
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
              memset_0(&v10[v15 + 1], 0, 2 * v19 - 2);
          }
          goto LABEL_20;
        }
        if ( v7 != -1LL )
          goto LABEL_43;
      }
    }
    else
    {
      v11 = -2147024362;
      LODWORD(ppMalloc) = -2147024362;
    }
LABEL_20:
    if ( v11 < 0 )
    {
LABEL_32:
      v28 = (unsigned int)ppMalloc;
      goto LABEL_33;
    }
    v20 = v2[2].lpVtbl;
    if ( !v20 )
      goto LABEL_26;
    Release_low = LOWORD(v20->Release);
    v22 = CoTaskMemAlloc(Release_low + 18);
    v4[2] = v22;
    if ( v22 )
    {
      v23 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v23 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v22);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0(v4[2], 0, v23);
      LODWORD(ppMalloc) = 0;
      v2 = v30;
      memcpy_0(v4[2], v30[2].lpVtbl, Release_low + 18);
LABEL_26:
      v24 = v2[3].lpVtbl;
      if ( !v24 )
      {
LABEL_31:
        *((_OWORD *)v4 + 4) = *(_OWORD *)&v2[8].lpVtbl;
        *((_OWORD *)v4 + 3) = *(_OWORD *)&v2[6].lpVtbl;
        *((_DWORD *)v4 + 2) = v2[1].lpVtbl;
        v4[4] = v2[4].lpVtbl;
        v4[5] = v2[5].lpVtbl;
        *((_OWORD *)v4 + 5) = *(_OWORD *)&v2[10].lpVtbl;
        v5 = 0LL;
        *v31 = (struct SaDeviceParams *)v4;
        goto LABEL_32;
      }
      v25 = LOWORD(v24->Release);
      v26 = CoTaskMemAlloc(v25 + 18);
      v4[3] = v26;
      if ( v26 )
      {
        v27 = 0LL;
        if ( CoGetMalloc(1u, &v30) >= 0 )
        {
          v27 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))v30->lpVtbl->GetSize)(v30, v26);
          ((void (__fastcall *)(LPMALLOC))v30->lpVtbl->Release)(v30);
        }
        memset_0(v4[3], 0, v27);
        LODWORD(ppMalloc) = 0;
        memcpy_0(v4[3], v2[3].lpVtbl, v25 + 18);
        goto LABEL_31;
      }
    }
LABEL_44:
    v28 = -2147024882;
    goto LABEL_33;
  }
  v28 = -2147024362;
LABEL_33:
  if ( v5 )
  {
    CoTaskMemFree(v5[3]);
    v5[3] = 0LL;
    CoTaskMemFree(v5[2]);
    v5[2] = 0LL;
    CoTaskMemFree(*v5);
    *v5 = 0LL;
    operator delete(v5);
  }
  return v28;
}
