/*
 * XREFs of AlpcpExposeAttributes @ 0x140448CF0
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     AlpcpExposeHandleAttribute @ 0x140449390 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x140449560 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1404496E0 (AlpcpExposeWorkOnBehalfAttribute.c)
 */

__int64 __fastcall AlpcpExposeAttributes(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rax
  signed int v18; // ebx
  __int64 v20; // rsi
  int v21; // edx
  char *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  signed int v30; // ebx
  ULONG_PTR v31; // rsi
  int v32; // edi
  _QWORD *v33; // rsi
  __int64 v34; // rdi
  ULONG_PTR v35; // rsi
  int v36; // edi
  __int64 v37; // rdi
  _QWORD v38[11]; // [rsp+20h] [rbp-58h] BYREF
  char v39; // [rsp+88h] [rbp+10h] BYREF
  void *v40; // [rsp+98h] [rbp+20h]

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
    v8 = 8LL;
    if ( (v4 & 0x40000000) != 0 )
    {
      v40 = (void *)8;
      if ( v4 < 0 )
        v40 = (void *)20;
      v20 = *(_QWORD *)(a3 + 144);
      if ( v20
        && (v35 = *(_QWORD *)(v20 + 16),
            AlpcpReferenceBlob(v35),
            v36 = AlpcpReceiveView(a1, a3, &v39),
            AlpcpDereferenceBlobEx(v35, 1),
            v36 >= 0) )
      {
        v37 = *(_QWORD *)(a3 + 144);
        memset(v38, 0, 0x20uLL);
        v38[2] = *(_QWORD *)(v37 + 40);
        v38[3] = *(_QWORD *)(v37 + 48);
        if ( v39 )
          v21 = 0x40000;
        else
          v21 = v38[0];
        *(_DWORD *)(a4 + 4) |= 0x40000000u;
      }
      else
      {
        v21 = v38[0];
      }
      if ( (*(_DWORD *)(a4 + 4) & 0x40000000) != 0 )
      {
        v22 = (char *)v40;
        *(_DWORD *)((char *)v40 + a4 + 4) = v38[1];
        *(_DWORD *)&v22[a4 + 8] = v38[2];
        *(_DWORD *)&v22[a4 + 12] = v38[3];
        *(_DWORD *)&v22[a4] = v21;
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v23 = 8LL;
      if ( v4 < 0 )
        v23 = 20LL;
      if ( (v4 & 0x40000000) != 0 )
        v23 += 16LL;
      if ( *(_DWORD **)(a3 + 56) == a1 || *(_DWORD **)(a3 + 64) == a1 )
        v24 = *(_DWORD *)(a3 + 128);
      else
        v24 = *(_DWORD *)(a3 + 120);
      *(_DWORD *)(v23 + a4) = v24;
      if ( *(_DWORD **)(a3 + 56) == a1 || *(_DWORD **)(a3 + 64) == a1 )
        v25 = *(_DWORD *)(a3 + 72);
      else
        v25 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v23 + a4 + 8) = v25;
      if ( (a1[104] & 6) == 4 )
        v26 = *(_DWORD *)(a3 + 104);
      else
        v26 = *(_DWORD *)(a3 + 112);
      v15 = *(_DWORD *)(v23 + a4) == 0;
      *(_DWORD *)(v23 + a4 + 4) = v26;
      if ( !v15 )
        *(_DWORD *)(a4 + 4) |= 0x20000000u;
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v27 = 8LL;
      if ( v4 < 0 )
        v27 = 20LL;
      if ( (v4 & 0x40000000) != 0 )
        v27 += 16LL;
      if ( (v4 & 0x20000000) != 0 )
        v27 += 20LL;
      v28 = v27 + a4;
      AlpcpExposeHandleAttribute(a1, a3, v38, a4 + 4);
      if ( (*(_DWORD *)(a4 + 4) & 0x10000000) != 0 )
      {
        *(_DWORD *)v28 = v38[0];
        *(_DWORD *)(v28 + 4) = v38[1];
        *(_QWORD *)(v28 + 8) = v38[2];
      }
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v29 = 8LL;
      if ( v4 < 0 )
        v29 = 20LL;
      if ( (v4 & 0x40000000) != 0 )
        v29 += 16LL;
      if ( (v4 & 0x20000000) != 0 )
        v29 += 20LL;
      if ( (v4 & 0x10000000) != 0 )
        v29 += 16LL;
      AlpcpExposeTokenAttribute(a1, a3, v29 + a4, a4 + 4);
    }
    if ( (v4 & 0x2000000) != 0 )
    {
      v30 = v4 & 0xFC000000;
      if ( v30 < 0 )
        v8 = 20LL;
      if ( (v30 & 0x40000000) != 0 )
        v8 += 16LL;
      if ( (v30 & 0x20000000) != 0 )
        v8 += 20LL;
      if ( (v30 & 0x10000000) != 0 )
        v8 += 16LL;
      if ( (v30 & 0x8000000) != 0 )
        v8 += 24LL;
      if ( (v30 & 0x2000000) == 0 )
        goto LABEL_54;
LABEL_129:
      v8 += 8LL;
LABEL_54:
      AlpcpExposeWorkOnBehalfAttribute(a1, a3, v8 + a4, a4 + 4);
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
      v40 = (void *)(a4 + v9);
      if ( v10 )
      {
        v31 = *(_QWORD *)(v10 + 16);
        AlpcpReferenceBlob(v31);
        v32 = AlpcpReceiveView(a1, a3, &v39);
        AlpcpDereferenceBlobEx(v31, 1);
        if ( v32 >= 0 )
        {
          v33 = v40;
          v34 = *(_QWORD *)(a3 + 144);
          memset(v40, 0, 0x20uLL);
          v15 = v39 == 0;
          v33[2] = *(_QWORD *)(v34 + 40);
          v33[3] = *(_QWORD *)(v34 + 48);
          if ( !v15 )
            *(_DWORD *)v33 = 0x40000;
          *(_DWORD *)(a4 + 4) |= 0x40000000u;
        }
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v11 = 8LL;
      if ( v4 < 0 )
        v11 = 32LL;
      if ( (v4 & 0x40000000) != 0 )
        v11 += 32LL;
      if ( *(_DWORD **)(a3 + 56) == a1 || *(_DWORD **)(a3 + 64) == a1 )
        v12 = *(_QWORD *)(a3 + 128);
      else
        v12 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)(v11 + a4) = v12;
      if ( *(_DWORD **)(a3 + 56) == a1 || *(_DWORD **)(a3 + 64) == a1 )
        v13 = *(_DWORD *)(a3 + 72);
      else
        v13 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v11 + a4 + 16) = v13;
      if ( (a1[104] & 6) == 4 )
        v14 = *(_QWORD *)(a3 + 104);
      else
        v14 = *(_QWORD *)(a3 + 112);
      v15 = *(_QWORD *)(v11 + a4) == 0LL;
      *(_QWORD *)(v11 + a4 + 8) = v14;
      *(_DWORD *)(v11 + a4 + 20) = *(_DWORD *)(a3 + 256);
      *(_DWORD *)(v11 + a4 + 24) = *(_DWORD *)(a3 + 264);
      if ( !v15 )
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
      AlpcpExposeHandleAttribute(a1, a3, v16 + a4, a4 + 4);
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v17 = 8LL;
      if ( v4 < 0 )
        v17 = 32LL;
      if ( (v4 & 0x40000000) != 0 )
        v17 += 32LL;
      if ( (v4 & 0x20000000) != 0 )
        v17 += 32LL;
      if ( (v4 & 0x10000000) != 0 )
        v17 += 24LL;
      AlpcpExposeTokenAttribute(a1, a3, v17 + a4, a4 + 4);
    }
    if ( (v4 & 0x2000000) != 0 )
    {
      v18 = v4 & 0xFC000000;
      if ( v18 < 0 )
        v8 = 32LL;
      if ( (v18 & 0x40000000) != 0 )
        v8 += 32LL;
      if ( (v18 & 0x20000000) != 0 )
        v8 += 32LL;
      if ( (v18 & 0x10000000) != 0 )
        v8 += 24LL;
      if ( (v18 & 0x8000000) != 0 )
        v8 += 24LL;
      if ( (v18 & 0x2000000) == 0 )
        goto LABEL_54;
      goto LABEL_129;
    }
  }
  return 0LL;
}
