/*
 * XREFs of DxgkWaitForSynchronizationObjectFromGpu @ 0x1C014F8D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00A7F90 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00A7FD8 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpu(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __m128i *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __m128i v11; // xmm2
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  void *Elements; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t v19; // r8
  char *v20; // rdx
  int v21; // ebx
  __int64 v22; // r8
  void *v23; // rcx
  void *v24; // rax
  _BYTE v25[144]; // [rsp+110h] [rbp+110h] BYREF

  v3 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (__m128i *)a1;
  *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 2043;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2043);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)v3 = Current;
  if ( Current )
  {
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (__m128i *)MmUserProbeAddress;
    v11 = *v4;
    *(__m128i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v4;
    *(__m128i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v4[1];
    *(__m128i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v4[2];
    *(__m128i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v4[3];
    *(__m128i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v4[4];
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
    if ( v12 )
    {
      Elements = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements((_DWORD *)(v3 + 96), v12);
      if ( Elements )
      {
        v19 = 4LL * *(unsigned int *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
        v20 = *(char **)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( &v20[v19] < v20 || (unsigned __int64)&v20[v19] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Elements, v20, v19);
        *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = Elements;
        v21 = WaitForSynchronizationObjectFromGpu(
                v12,
                (const unsigned int *)Elements,
                *(const unsigned __int64 **)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                Current,
                0);
        v23 = *(void **)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        v24 = (void *)(v3 + 104);
        if ( v21 >= 0 )
        {
          if ( v23 != v24 && v23 )
            ExFreePoolWithTag(v23, 0);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q((__int64)v23, &EventProfilerExit, v22, 2043);
          return 0LL;
        }
        else
        {
          if ( v23 != v24 && v23 )
            ExFreePoolWithTag(v23, 0);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q((__int64)v23, &EventProfilerExit, v22, 2043);
          return (unsigned int)v21;
        }
      }
      else
      {
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((PVOID *)(v3 + 96));
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v17, &EventProfilerExit, v18, 2043);
        return 3221225495LL;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v13 + 24) = *(unsigned int *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      *(_QWORD *)(v13 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v13);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((PVOID *)(v3 + 96));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v14, &EventProfilerExit, v15, 2043);
      return 3221225485LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v8);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v9, 2043);
    return 3221225485LL;
  }
}
