/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18000B860
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18000B040 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000B4D0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 * Callees:
 *     ??C?$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ @ 0x18000BBF4 (--C-$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, struct SaDeviceParams **a2)
{
  struct SaDeviceParams *v3; // rax
  struct SaDeviceParams *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  __int16 *v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  int v10; // esi
  _WORD *v11; // rax
  _WORD *v12; // r9
  unsigned __int64 v13; // rdx
  _WORD *v14; // rcx
  int v15; // r10d
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  signed __int64 v18; // r15
  __int16 v19; // ax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  LPVOID v23; // r15
  size_t v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r14
  LPVOID v27; // rsi
  size_t v28; // r15
  __int64 v30; // [rsp+20h] [rbp-58h]
  LPMALLOC ppMalloc; // [rsp+80h] [rbp+8h] BYREF
  struct SaDeviceParams **v32; // [rsp+88h] [rbp+10h]
  struct SaDeviceParams *v33; // [rsp+90h] [rbp+18h]
  struct SaDeviceParams *v34; // [rsp+98h] [rbp+20h] BYREF

  v32 = a2;
  v3 = (struct SaDeviceParams *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v33 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
  }
  else
  {
    v3 = 0LL;
    v33 = 0LL;
  }
  v4 = v3;
  v34 = v3;
  v5 = (_QWORD *)ATL::CAutoPtr<SaDeviceParams>::operator->(&v34);
  v6 = v5;
  v7 = *(__int16 **)a1;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  *v5 = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 >= v8 )
  {
    *v5 = 0LL;
    if ( is_mul_ok(v9, 2uLL) )
    {
      v11 = CoTaskMemAlloc(2 * v9);
      v12 = v11;
      *v6 = v11;
      if ( !v11 )
        goto LABEL_37;
      v10 = 0;
      if ( v9 > 0x7FFFFFFF || v8 >= 0x7FFFFFFF )
      {
        if ( v8 != -1LL )
          *v11 = 0;
      }
      else
      {
        if ( !v7 )
        {
          v7 = &word_1800AFAB8;
          v8 = 0LL;
        }
        if ( v9 )
        {
          v13 = v9;
          v14 = v11;
          v15 = 0;
          v16 = 0LL;
          v17 = v8 - v9;
          v18 = (char *)v7 - (char *)v11;
          while ( v17 + v13 )
          {
            v19 = *(_WORD *)((char *)v14 + v18);
            if ( !v19 )
              break;
            *v14++ = v19;
            ++v16;
            if ( !--v13 )
            {
              --v14;
              --v16;
              v15 = -2147024774;
              break;
            }
          }
          *v14 = 0;
          v20 = v9 - v16;
          if ( v15 >= 0 && v20 > 1 && 2 * v20 > 2 )
            memset_0(&v12[v16 + 1], 0, 2 * v20 - 2);
        }
      }
    }
    else
    {
      v10 = -2147024362;
    }
    if ( v10 < 0 )
      goto LABEL_40;
    v21 = *((_QWORD *)a1 + 2);
    if ( v21 )
    {
      v22 = *(unsigned __int16 *)(v21 + 16);
      v23 = CoTaskMemAlloc(v22 + 18);
      v6[2] = v23;
      if ( !v23 )
        goto LABEL_37;
      v24 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v30 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v23);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        v24 = v30;
      }
      memset_0((void *)v6[2], 0, v24);
      v10 = 0;
      memcpy_0((void *)v6[2], *((const void **)a1 + 2), v22 + 18);
    }
    v25 = *((_QWORD *)a1 + 3);
    if ( !v25 )
    {
LABEL_38:
      *((_OWORD *)v6 + 4) = *((_OWORD *)a1 + 4);
      *((_OWORD *)v6 + 3) = *((_OWORD *)a1 + 3);
      *((_DWORD *)v6 + 2) = *((_DWORD *)a1 + 2);
      v6[4] = *((_QWORD *)a1 + 4);
      v6[5] = *((_QWORD *)a1 + 5);
      *((_OWORD *)v6 + 5) = *((_OWORD *)a1 + 5);
      *((_BYTE *)v6 + 96) = *((_BYTE *)a1 + 96);
      v4 = 0LL;
      *v32 = v33;
      goto LABEL_40;
    }
    v26 = *(unsigned __int16 *)(v25 + 16);
    v27 = CoTaskMemAlloc(v26 + 18);
    v6[3] = v27;
    if ( v27 )
    {
      v28 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v28 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v27);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0((void *)v6[3], 0, v28);
      v10 = 0;
      memcpy_0((void *)v6[3], *((const void **)a1 + 3), v26 + 18);
      goto LABEL_38;
    }
LABEL_37:
    v10 = -2147024882;
    goto LABEL_40;
  }
  v10 = -2147024362;
LABEL_40:
  if ( v4 )
  {
    ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((char *)v4 + 24);
    ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((char *)v4 + 16);
    ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v4);
    operator delete(v4);
  }
  return (unsigned int)v10;
}
