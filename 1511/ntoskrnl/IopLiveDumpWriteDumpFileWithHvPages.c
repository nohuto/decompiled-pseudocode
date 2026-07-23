/*
 * XREFs of IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C
 * Callers:
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1400BC0AC (RtlClearAllBitsEx.c)
 *     RtlNumberOfSetBitsEx @ 0x140131C30 (RtlNumberOfSetBitsEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlMergeBitMapsEx @ 0x1401F8DA8 (RtlMergeBitMapsEx.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x1405FD2AC (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1405FD364 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetHvMergePages @ 0x1405FD484 (IopLiveDumpGetHvMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1405FD5F0 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x1405FD8EC (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithHvPages(__int64 a1)
{
  LARGE_INTEGER *v1; // r13
  void *v3; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // r12
  char HvMergePages; // al
  int v7; // r14d
  unsigned __int64 *v8; // r15
  int v9; // esi
  __int64 *v10; // rax
  int v11; // ebx
  char v12; // r8
  ULONG v13; // ebx
  char v14; // al
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char *v18; // rax
  char *v19; // rdx
  bool v20; // zf
  void *v21; // rsi
  __int128 v22; // xmm0
  ULONG v23; // r8d
  void *v24; // rdx
  LARGE_INTEGER v25; // rax
  char v27; // [rsp+38h] [rbp-D0h]
  char v28; // [rsp+39h] [rbp-CFh]
  char v29; // [rsp+3Ah] [rbp-CEh]
  int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER v32; // [rsp+48h] [rbp-C0h] BYREF
  char *v33; // [rsp+50h] [rbp-B8h] BYREF
  char *v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  void *v38; // [rsp+78h] [rbp-90h]
  void *v39; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v42[4]; // [rsp+98h] [rbp-70h] BYREF
  int v43; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v44; // [rsp+ACh] [rbp-5Ch]
  int v45; // [rsp+BCh] [rbp-4Ch]
  ULONG v46; // [rsp+C0h] [rbp-48h]
  int v47; // [rsp+C4h] [rbp-44h]
  _BYTE v48[512]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v49[64]; // [rsp+2C8h] [rbp+1C0h] BYREF

  v1 = *(LARGE_INTEGER **)(a1 + 384);
  v35 = 0LL;
  v27 = 0;
  v32 = v1[1028];
  v3 = *(void **)(a1 + 64);
  CurrentThread = KeGetCurrentThread();
  v41 = -1LL;
  v39 = v3;
  v40 = CurrentThread;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v48, &v33, &v31, &v36);
  v5 = (__int64 *)v48;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 440));
  HvMergePages = IopLiveDumpGetHvMergePages(a1, v49, &v34, &v30, &v37);
  v7 = v31;
  v8 = v49;
  v9 = v30;
  v28 = HvMergePages;
  while ( v9 || v7 )
  {
    if ( v7 )
    {
      v10 = &v41;
      if ( v9 )
        v10 = (__int64 *)v8;
      v8 = (unsigned __int64 *)v10;
    }
    else
    {
      v5 = &v41;
    }
    v11 = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( v11 < 0 )
      goto LABEL_35;
    if ( v9 && v8[v9 - 1] < *v5 )
    {
      v38 = v34;
      v13 = v9 << 12;
LABEL_13:
      v27 = v12;
      v35 = v37;
      v14 = IopLiveDumpGetHvMergePages(a1, v49, &v34, &v30, &v37);
      v9 = v30;
      v8 = v49;
      v28 = v14;
      goto LABEL_14;
    }
    if ( v7 && v5[v7 - 1] < *v8 )
    {
      v38 = v33;
      v35 = v36;
      v13 = v7 << 12;
      v27 = 1;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v48, &v33, &v31, &v36);
      v7 = v31;
      v5 = (__int64 *)v48;
      goto LABEL_14;
    }
    v16 = *v5;
    v13 = 4096;
    v17 = *v8;
    v29 = 0;
    if ( *v5 >= *v8 )
    {
      v19 = v34;
      v38 = v34;
      v29 = 1;
      if ( v17 != v16 )
        goto LABEL_29;
      v18 = v33;
    }
    else
    {
      v18 = v33;
      v38 = v33;
    }
    v20 = v7-- == 1;
    LODWORD(v31) = v7;
    if ( v20 )
    {
      v27 = 1;
      v35 = v36;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v48, &v33, &v31, &v36);
      v12 = v28;
      v5 = (__int64 *)v48;
      v7 = v31;
    }
    else
    {
      v33 = v18 + 4096;
      ++v5;
    }
    if ( !v29 )
      goto LABEL_14;
    v19 = v34;
LABEL_29:
    v20 = v9-- == 1;
    v30 = v9;
    if ( v20 )
      goto LABEL_13;
    v34 = v19 + 4096;
    ++v8;
LABEL_14:
    v11 = IopLiveDumpWriteBuffer(v39, v38, v13, &v32);
    if ( v11 < 0 )
      goto LABEL_35;
    CurrentThread = v40;
    if ( v27 )
    {
      v15 = v35;
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v35), 0x40000uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v15) = 0LL;
      CurrentThread = v40;
      v27 = 0;
    }
  }
  v21 = v39;
  v42[0] = 1886221636;
  v42[1] = 1651469378;
  v42[2] = 16;
  v42[3] = -268424870;
  v11 = IopLiveDumpWriteBuffer(v39, v42, 0x10u, &v32);
  if ( v11 >= 0 )
  {
    v22 = *(_OWORD *)(a1 + 144);
    v45 = *(_DWORD *)(a1 + 168);
    v43 = 32;
    v44 = v22;
    v47 = 0;
    v46 = ((v32.LowPart + 4127) & 0xFFFFF000) - v32.LowPart;
    v11 = IopLiveDumpWriteBuffer(v21, &v43, 0x20u, &v32);
    if ( v11 >= 0 )
    {
      v23 = *(_DWORD *)(a1 + 168);
      v24 = *(void **)(a1 + 160);
      v32.QuadPart += v46;
      v11 = IopLiveDumpWriteBuffer(v21, v24, v23, &v32);
      if ( v11 >= 0 )
      {
        RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 368), (unsigned __int64 *)(a1 + 440));
        v1[1024].LowPart = 1347241043;
        v1[1024].HighPart = 1347245380;
        v1[1029].QuadPart = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
        v25 = v32;
        v1[522].LowPart |= 0x10u;
        v1[500] = v25;
        v32.QuadPart = 0LL;
        v11 = IopLiveDumpWriteBuffer(v21, v1, v1[1028].LowPart, &v32);
      }
    }
  }
LABEL_35:
  IopLiveDumpFreeDumpBuffers(a1 + 488);
  return (unsigned int)v11;
}
