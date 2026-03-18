/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00A7BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00A7F90 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00A7FD8 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C00A7FEC (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$0BA@@@QEAA@XZ @ 0x1C00A8034 (--1-$PagedPoolZeroedArray@I$0BA@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __m128i *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __m128i v7; // xmm2
  unsigned int v8; // r15d
  void *Elements; // rbx
  size_t v10; // r8
  char *v11; // rdx
  unsigned int v12; // esi
  void *v13; // rbx
  size_t v14; // r8
  char *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // r8
  void *v26; // rcx
  void *v27; // rax
  void *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v32; // rcx
  __int64 v33; // [rsp+A0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (__m128i *)a1;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 2044;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2044);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)v3 = Current;
  if ( Current )
  {
    *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0;
    *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (__m128i *)MmUserProbeAddress;
    v7 = *v4;
    *(__m128i *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v4;
    *(__m128i *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v4[1];
    *(__m128i *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v4[2];
    *(__m128i *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v4[3];
    *(__m128i *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v4[4];
    *(__m128i *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v4[5];
    v8 = _mm_cvtsi128_si32(v7);
    if ( !v8 )
      goto LABEL_10;
    Elements = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v3 + 112, v8);
    if ( Elements )
    {
      v10 = 4LL * *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
      v11 = *(char **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( &v11[v10] < v11 || (unsigned __int64)&v11[v10] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Elements, v11, v10);
      *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = Elements;
LABEL_10:
      v12 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
      if ( v12 )
      {
        v13 = (void *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(v3 + 144, v12);
        if ( v13 )
        {
          v14 = 4LL * *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
          v15 = *(char **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          if ( &v15[v14] < v15 || (unsigned __int64)&v15[v14] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v13, v15, v14);
          *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v13;
          v24 = SignalSynchronizationObjectInternal(
                  v8,
                  *(const unsigned int **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                  *(struct _D3DDDICB_SIGNALFLAGS *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                  v12,
                  (unsigned int *)v13,
                  *(unsigned __int64 **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                  (void *const *)(v3 + 48),
                  Current,
                  1,
                  0);
          v26 = *(void **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
          v27 = (void *)(v3 + 152);
          if ( v24 < 0 )
          {
            if ( v26 != v27 && v26 )
              ExFreePoolWithTag(v26, 0);
            v32 = *(void **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
            if ( v32 != (void *)(v3 + 120) && v32 )
              ExFreePoolWithTag(v32, 0);
            if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q((__int64)v32, &EventProfilerExit, v25, 2044);
            return (unsigned int)v24;
          }
          else
          {
            if ( v26 != v27 && v26 )
              ExFreePoolWithTag(v26, 0);
            v28 = *(void **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
            if ( v28 != (void *)(v3 + 120) && v28 )
              ExFreePoolWithTag(v28, 0);
            if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q((__int64)v28, &EventProfilerExit, v25, 2044);
            return 0LL;
          }
        }
        else
        {
          PagedPoolZeroedArray<unsigned int,16>::~PagedPoolZeroedArray<unsigned int,16>(v3 + 144);
          PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 112);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(v22, &EventProfilerExit, v23, 2044);
          return 3221225495LL;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v19 + 24) = 765LL;
        WdLogEvent5_WdError(v19);
        PagedPoolZeroedArray<unsigned int,16>::~PagedPoolZeroedArray<unsigned int,16>(v3 + 144);
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 112);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v20, &EventProfilerExit, v21, 2044);
        return 3221225485LL;
      }
    }
    PagedPoolZeroedArray<unsigned int,16>::~PagedPoolZeroedArray<unsigned int,16>(v3 + 144);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 112);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2044);
    return 3221225495LL;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v29 + 24) = PsGetCurrentProcess(v30);
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v31, 2044);
    return 3221225485LL;
  }
}
