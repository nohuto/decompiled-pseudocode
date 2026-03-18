/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000B200
 * Callers:
 *     VidSchiNeedToForcePreemptNode @ 0x1C0001114 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C0011BA8 (VidSchiStartNodeYield.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     Template_pqxxxx @ 0x1C00239A4 (Template_pqxxxx.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, char a2, char a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  int v10; // edx
  LARGE_INTEGER v11; // rcx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 QuadPart; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // ebp
  char v25; // r12
  unsigned int v26; // ebx
  __int64 v27; // r9
  unsigned int i; // ebx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // ecx
  unsigned __int64 v32; // kr00_8
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r10
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-88h] BYREF
  __int64 v43; // [rsp+58h] [rbp-80h]
  unsigned __int64 v44; // [rsp+60h] [rbp-78h]
  int v45; // [rsp+68h] [rbp-70h]
  unsigned __int64 v46; // [rsp+70h] [rbp-68h]
  unsigned __int64 v47; // [rsp+78h] [rbp-60h]
  __int64 v48; // [rsp+80h] [rbp-58h]
  unsigned __int64 *v49; // [rsp+88h] [rbp-50h]
  __int64 v50; // [rsp+90h] [rbp-48h]
  unsigned int v53; // [rsp+F8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 104);
  result = *(unsigned int *)(a1 + 396);
  v43 = v3;
  v8 = *(_QWORD *)(v3 + 32);
  v9 = (int)gulPriorityToYieldPriorityBand[result];
  v45 = v9;
  if ( !(_DWORD)v9 || (_DWORD)v9 == 3 )
    return result;
  result = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
  v13 = *(_QWORD *)(v3 + 144);
  v14 = v9;
  v50 = result;
  v15 = result;
  v48 = v9;
  if ( !v13 && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      result = Template_pqxxxx(
                 *(_DWORD *)(a1 + 396),
                 v10,
                 v12,
                 *(_QWORD *)(v8 + 16),
                 1,
                 *(_DWORD *)(a1 + 396),
                 result,
                 0,
                 0);
      goto LABEL_50;
    }
    goto LABEL_40;
  }
  v16 = result - v13;
  if ( a2 || a3 )
  {
    QuadPart = PerformanceFrequency.QuadPart;
  }
  else
  {
    QuadPart = PerformanceFrequency.QuadPart;
    if ( is_mul_ok(v16, 0x989680uLL) )
    {
      result = v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      v18 = result;
    }
    else
    {
      v11.QuadPart = v16 / PerformanceFrequency.QuadPart;
      result = 10000000 * (v16 / PerformanceFrequency.QuadPart);
      v18 = result + 10000000 * (v16 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    if ( v18 < *(_QWORD *)(v8 + 2664) )
      return result;
    v14 = v9;
  }
  v53 = *(_DWORD *)(v8 + 4 * v14 + 172);
  v19 = v16 * v53;
  v20 = v19 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v21 = v19 / 0x64;
  v44 = v21;
  if ( !v21 && !a3 )
  {
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      return Template_pqxxxx(
               v11.LowPart,
               DWORD2(v20),
               QuadPart,
               *(_QWORD *)(v8 + 16),
               2,
               *(_DWORD *)(a1 + 396),
               v16,
               0,
               0);
    return result;
  }
  if ( is_mul_ok(v21, 0x989680uLL) )
  {
    result = v21 * (unsigned __int128)0x989680uLL / QuadPart;
    v22 = result;
  }
  else
  {
    result = 10000000 * (v21 / QuadPart);
    v22 = result + 10000000 * (v21 % QuadPart) / QuadPart;
  }
  v23 = *(_QWORD *)(v8 + 2656);
  v46 = v22;
  if ( v22 > v23 )
  {
    if ( !a3 )
    {
      result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        result = Template_pqxxxx(v23, v22, QuadPart, *(_QWORD *)(v8 + 16), 1, *(_DWORD *)(a1 + 396), v15, v13, 0);
LABEL_50:
        v25 = a1;
LABEL_75:
        v14 = v9;
        goto LABEL_20;
      }
LABEL_40:
      v25 = a1;
      goto LABEL_21;
    }
    v46 = v23;
    v32 = v23;
    v33 = v23;
    v34 = v23 * QuadPart;
    if ( is_mul_ok(v32, QuadPart) )
    {
      result = 0xD6BF94D5E57A42BDuLL * v34;
      v21 = v34 / 0x989680;
    }
    else
    {
      v35 = QuadPart * (v33 / 0x989680);
      v36 = QuadPart * (v33 % 0x989680);
      result = 0xD6BF94D5E57A42BDuLL * v36;
      v21 = v35 + v36 / 0x989680;
      v14 = v9;
    }
    v44 = v21;
  }
  v24 = (1 << *(_DWORD *)(a1 + 396)) - 1;
  v25 = 0;
  v26 = 0;
  if ( !*(_DWORD *)(v8 + 60) )
    goto LABEL_20;
  do
  {
    result = v26;
    v27 = *(_QWORD *)(v8 + 8LL * v26 + 408);
    if ( (v24 & *(_DWORD *)(v27 + 1688)) != 0 || (v24 & *(_DWORD *)(v27 + 1692)) != 0 )
    {
      v49 = (unsigned __int64 *)(v27 + 8 * (v14 + 236));
      v47 = *v49;
      if ( v47 > v16 * (100 - v53) / 0x64 || a3 )
      {
        v25 = 1;
        *(_QWORD *)(v27 + 1928) = v21;
        *(_BYTE *)(v27 + 1936) = 1;
        *(_QWORD *)(v27 + 1920) = 0LL;
        result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_46:
          QuadPart = PerformanceFrequency.QuadPart;
          goto LABEL_18;
        }
        if ( is_mul_ok(v16, 0x989680uLL) )
          v39 = v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        else
          v39 = 10000000 * (v16 / PerformanceFrequency.QuadPart)
              + 10000000 * (v16 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        v40 = *v49;
        if ( is_mul_ok(*v49, 0x989680uLL) )
        {
          v41 = *v49 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v40 /= PerformanceFrequency.QuadPart;
          v41 = 10000000 * v40 + 10000000 * (*v49 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        }
        result = Template_pqxxxx(
                   *(unsigned __int16 *)(v27 + 4),
                   *(_DWORD *)(a1 + 396),
                   v40,
                   *(_QWORD *)(v8 + 16),
                   0,
                   *(_DWORD *)(a1 + 396),
                   v41,
                   *(_WORD *)(v27 + 4),
                   v39);
      }
      else
      {
        result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_18;
        if ( is_mul_ok(v16, 0x989680uLL) )
          v37 = v16 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v37 = 10000000 * (v16 / QuadPart) + 10000000 * (v16 % QuadPart) / QuadPart;
        if ( is_mul_ok(v47, 0x989680uLL) )
          v38 = v47 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v38 = 10000000 * (v47 / QuadPart) + 10000000 * (v47 % QuadPart) / QuadPart;
        result = Template_pqxxxx(
                   *(unsigned __int16 *)(v27 + 4),
                   *(_DWORD *)(a1 + 396),
                   v38,
                   *(_QWORD *)(v8 + 16),
                   5,
                   *(_DWORD *)(a1 + 396),
                   v38,
                   *(_WORD *)(v27 + 4),
                   v37);
      }
      v14 = v48;
      v21 = v44;
      goto LABEL_46;
    }
LABEL_18:
    ++v26;
  }
  while ( v26 < *(_DWORD *)(v8 + 60) );
  v15 = v50;
  v9 = v45;
  if ( v25 )
  {
    v31 = *(_DWORD *)(a1 + 396) - 1;
    *(_DWORD *)(v8 + 168) = v31;
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      result = Template_pqx(v31, (unsigned int)&EventYieldStartAdapter, QuadPart, *(_QWORD *)(v8 + 16), v31, v46);
      goto LABEL_75;
    }
  }
LABEL_20:
  v3 = v43;
LABEL_21:
  for ( i = 0; i < *(_DWORD *)(v8 + 60); ++i )
  {
    v29 = *(_QWORD *)(v8 + 8LL * i + 408);
    *(_QWORD *)(v29 + 8 * v14 + 1856) = 0LL;
    *(_QWORD *)(v29 + 8 * v14 + 1888) = 0LL;
    *(_QWORD *)(v29 + 8 * v14 + 1824) = v15;
    result = *(unsigned int *)(v29 + 1552);
    v30 = *(_QWORD *)(v29 + 8 * result + 1560);
    if ( v30 )
    {
      result = *(unsigned int *)(v30 + 396);
      if ( gulPriorityToYieldPriorityBand[result] >= (int)v9 )
      {
        if ( v15 )
          *(_QWORD *)(v29 + 8 * v14 + 1856) = v15;
      }
    }
    if ( v25 && *(_BYTE *)(v29 + 1936) && !*(_QWORD *)(v29 + 1920) && v30 )
    {
      result = *(unsigned int *)(v8 + 168);
      if ( *(_DWORD *)(v30 + 396) <= (unsigned int)result )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                   v29,
                   v15,
                   (union _LARGE_INTEGER)PerformanceFrequency.QuadPart);
        v14 = (int)v9;
      }
    }
  }
  *(_QWORD *)(v3 + 144) = v15;
  return result;
}
