/*
 * XREFs of AlpcpExposeAttributes @ 0x140480310
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpExposeHandleAttribute @ 0x14047CDC0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x14047F1D0 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeContextAttribute32 @ 0x14053D9AC (AlpcpExposeContextAttribute32.c)
 *     AlpcpExposeViewAttribute @ 0x14053DA04 (AlpcpExposeViewAttribute.c)
 */

__int64 __fastcall AlpcpExposeAttributes(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  signed int v17; // ebx
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rdi
  signed int v24; // ebx
  ULONG_PTR v25; // rdi
  __int64 BugCheckParameter4; // rax
  bool v27; // zf
  __int64 v28; // rdx
  int v29; // eax
  signed __int64 v30; // rcx
  bool v31; // cc
  ULONG_PTR v32; // rcx
  __int64 v33; // rdi
  _DWORD v34[6]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v35[24]; // [rsp+48h] [rbp-60h] BYREF
  char v36; // [rsp+B8h] [rbp+10h] BYREF
  int v37; // [rsp+C8h] [rbp+20h]

  v4 = *(_DWORD *)a4;
  *(_DWORD *)(a4 + 4) = 0;
  if ( a2 < 0 )
  {
    if ( v4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a4 + 8) = 0;
      *(_DWORD *)(a4 + 16) = *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      *(_DWORD *)(a4 + 4) |= 0x80000000;
    }
    v19 = 8LL;
    if ( (v4 & 0x40000000) != 0 )
    {
      v20 = 8LL;
      if ( v4 < 0 )
        v20 = 20LL;
      AlpcpExposeViewAttribute(a1, a3, v35, a4 + 4);
      if ( (*(_DWORD *)(a4 + 4) & 0x40000000) != 0 )
      {
        *(_DWORD *)(v20 + a4) = v35[0];
        *(_DWORD *)(v20 + a4 + 4) = v35[2];
        *(_DWORD *)(v20 + a4 + 8) = v35[4];
        *(_DWORD *)(v20 + a4 + 12) = v35[6];
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v21 = 8LL;
      if ( v4 < 0 )
        v21 = 20LL;
      if ( (v4 & 0x40000000) != 0 )
        v21 += 16LL;
      AlpcpExposeContextAttribute32(a1, a3, v21 + a4, a4 + 4);
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v22 = 8LL;
      if ( v4 < 0 )
        v22 = 20LL;
      if ( (v4 & 0x40000000) != 0 )
        v22 += 16LL;
      if ( (v4 & 0x20000000) != 0 )
        v22 += 20LL;
      v23 = (_DWORD *)(v22 + a4);
      AlpcpExposeHandleAttribute((__int64)a1, a3, (__int64)v34, (_DWORD *)(a4 + 4));
      if ( (*(_DWORD *)(a4 + 4) & 0x10000000) != 0 )
      {
        *v23 = v34[0];
        v23[1] = v34[2];
        v23[2] = v34[4];
        v23[3] = v34[5];
      }
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v24 = v4 & 0xF0000000;
      if ( v24 < 0 )
        v19 = 20LL;
      if ( (v24 & 0x40000000) != 0 )
        v19 += 16LL;
      if ( (v24 & 0x20000000) != 0 )
        v19 += 20LL;
      if ( (v24 & 0x10000000) != 0 )
        v19 += 16LL;
      if ( (v24 & 0x8000000) != 0 )
        v19 += 24LL;
      AlpcpExposeTokenAttribute((__int64)a1, a3, (PERESOURCE *)(v19 + a4), (_DWORD *)(a4 + 4));
    }
  }
  else
  {
    if ( v4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a4 + 8) = 0;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      *(_DWORD *)(a4 + 4) |= 0x80000000;
    }
    v8 = 8LL;
    if ( (v4 & 0x40000000) != 0 )
    {
      v9 = 8LL;
      if ( v4 < 0 )
        v9 = 32LL;
      v10 = *(_QWORD *)(a3 + 144);
      v11 = (_QWORD *)(v9 + a4);
      if ( v10 )
      {
        v25 = *(_QWORD *)(v10 + 16);
        _m_prefetchw((const void *)(v25 - 24));
        BugCheckParameter4 = *(_QWORD *)(v25 - 24);
        v27 = BugCheckParameter4 == 0;
        if ( BugCheckParameter4 <= 0 )
        {
LABEL_90:
          if ( !v27 )
            KeBugCheckEx(0x18u, 0LL, v25, 0x20uLL, BugCheckParameter4);
        }
        else
        {
          while ( 1 )
          {
            v28 = BugCheckParameter4;
            BugCheckParameter4 = _InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v25 - 24),
                                   BugCheckParameter4 + 1,
                                   BugCheckParameter4);
            if ( BugCheckParameter4 == v28 )
              break;
            v27 = BugCheckParameter4 == 0;
            if ( BugCheckParameter4 <= 0 )
              goto LABEL_90;
          }
        }
        v29 = AlpcpReceiveView(a1, a3, &v36, a4);
        v37 = v29;
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v31 = v30 <= 1;
        v32 = v30 - 1;
        if ( v31 )
        {
          if ( v32 )
            KeBugCheckEx(0x18u, 0LL, v25, 0x21uLL, v32);
          AlpcpDestroyBlob(v25);
          v29 = v37;
        }
        if ( v29 >= 0 )
        {
          v33 = *(_QWORD *)(a3 + 144);
          memset(v11, 0, 0x20uLL);
          v27 = v36 == 0;
          v11[2] = *(_QWORD *)(v33 + 40);
          v11[3] = *(_QWORD *)(v33 + 48);
          if ( !v27 )
            *(_DWORD *)v11 = 0x40000;
          *(_DWORD *)(a4 + 4) |= 0x40000000u;
        }
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v12 = 8LL;
      if ( v4 < 0 )
        v12 = 32LL;
      if ( (v4 & 0x40000000) != 0 )
        v12 += 32LL;
      if ( *(_DWORD **)(a3 + 56) == a1 || *(_DWORD **)(a3 + 64) == a1 )
        v13 = *(_QWORD *)(a3 + 128);
      else
        v13 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)(v12 + a4) = v13;
      if ( *(_DWORD **)(a3 + 56) == a1 || *(_DWORD **)(a3 + 64) == a1 )
        v14 = *(_DWORD *)(a3 + 72);
      else
        v14 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v12 + a4 + 16) = v14;
      if ( (a1[104] & 6) == 4 )
        v15 = *(_QWORD *)(a3 + 104);
      else
        v15 = *(_QWORD *)(a3 + 112);
      v27 = *(_QWORD *)(v12 + a4) == 0LL;
      *(_QWORD *)(v12 + a4 + 8) = v15;
      *(_DWORD *)(v12 + a4 + 20) = *(_DWORD *)(a3 + 248);
      *(_DWORD *)(v12 + a4 + 24) = *(_DWORD *)(a3 + 256);
      if ( !v27 )
        *(_DWORD *)(a4 + 4) |= 0x20000000u;
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v16 = 8LL;
      if ( v4 < 0 )
        v16 = 32LL;
      if ( (v4 & 0x40000000) != 0 )
        v16 += 32LL;
      if ( (v4 & 0x20000000) != 0 )
        v16 += 32LL;
      AlpcpExposeHandleAttribute((__int64)a1, a3, v16 + a4, (_DWORD *)(a4 + 4));
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v17 = v4 & 0xF0000000;
      if ( v17 < 0 )
        v8 = 32LL;
      if ( (v17 & 0x40000000) != 0 )
        v8 += 32LL;
      if ( (v17 & 0x20000000) != 0 )
        v8 += 32LL;
      if ( (v17 & 0x10000000) != 0 )
        v8 += 24LL;
      if ( (v17 & 0x8000000) != 0 )
        v8 += 24LL;
      AlpcpExposeTokenAttribute((__int64)a1, a3, (PERESOURCE *)(v8 + a4), (_DWORD *)(a4 + 4));
    }
  }
  return 0LL;
}
