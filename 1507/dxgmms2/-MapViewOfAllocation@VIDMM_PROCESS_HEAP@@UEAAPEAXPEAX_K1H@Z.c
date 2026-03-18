/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C0075050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  int v15; // r14d
  __int64 v16; // rbx
  void *v17; // r12
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rbx
  __int64 CurrentProcess; // rax
  char *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+58h] BYREF

  v36 = a4;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v9 = *v5;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v14[3] = 270LL;
    v14[4] = 30LL;
    v14[5] = 0LL;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  v15 = 4;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v16 = a3;
    v17 = (void *)a2[4];
    if ( ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 )
      v15 = 1028;
  }
  else
  {
    v18 = a2[1];
    v19 = 4;
    v16 = a3 + a2[2];
    v17 = *(void **)(v18 + 88);
    v11 = (*(_DWORD *)(v18 + 80) - 4) & 0xFFFFFFFD;
    if ( (_DWORD)v11 )
      v19 = 1028;
    v15 = v19;
  }
  v33 = v16;
  if ( (gVidMmGlobalFault & 0x1000) != 0 )
  {
    _InterlockedAdd(&dword_1C00275D0, 1u);
    v20 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v20 + 24) = 2346LL;
    WdLogEvent5_WdLowResource(v20);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
    if ( (int)MmMapViewOfSection(v17, CurrentProcess, &MappedBase, 0LL, v36, &v33, &v36, 2, 0, v15) >= 0 )
    {
      v26 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v27 = v16 - v33;
      a2[11] = v26;
      return &v26[v27];
    }
  }
  _InterlockedAdd(&dword_1C00275D0, 1u);
  v22 = WdLogNewEntry5_WdLowResource(v21);
  *(_QWORD *)(v22 + 24) = a5;
  WdLogEvent5_WdLowResource(v22);
  if ( a5 )
    return (char *)MappedBase;
  v23 = *(_DWORD *)a2;
  ViewSize = 0LL;
  if ( (v23 & 1) != 0 )
  {
    v24 = 0LL;
    ViewSize = a2[7];
  }
  else
  {
    v24 = a2[2];
    ViewSize = *(_QWORD *)(a2[1] + 40LL);
  }
  if ( MmMapViewInSystemSpace(v17, &MappedBase, &ViewSize) < 0 )
  {
    _InterlockedAdd(&dword_1C00275D0, 1u);
    v30 = WdLogNewEntry5_WdLowResource(v28);
    *(_QWORD *)(v30 + 24) = 2442LL;
    WdLogEvent5_WdLowResource(v30);
    if ( ViewSize >= 0x100000 )
    {
      if ( ViewSize >= 0x200000 )
      {
        if ( ViewSize >= 0x400000 )
        {
          if ( ViewSize >= 0x800000 )
          {
            if ( ViewSize >= 0x1000000 )
            {
              if ( ViewSize >= 0x2000000 )
              {
                if ( ViewSize >= 0x4000000 )
                  return (char *)v6;
                v31 = 6603LL;
              }
              else
              {
                v31 = 6602LL;
              }
            }
            else
            {
              v31 = 6613LL;
            }
          }
          else
          {
            v31 = 6601LL;
          }
        }
        else
        {
          v31 = 6600LL;
        }
      }
      else
      {
        v31 = 6599LL;
      }
    }
    else
    {
      v31 = 6598LL;
    }
    DxgkSqmGenericDword(&Dxgk_SqmIncrementDwordEvt, v31, 1LL);
    return (char *)v6;
  }
  v29 = (char *)MappedBase;
  *(_DWORD *)a2 |= 4u;
  a2[11] = v29;
  return &v29[v24 + a3];
}
