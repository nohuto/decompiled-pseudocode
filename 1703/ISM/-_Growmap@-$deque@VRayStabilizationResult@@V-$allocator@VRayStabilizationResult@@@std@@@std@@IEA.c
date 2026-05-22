/*
 * XREFs of ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18004E7E4
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x18004E23C (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlen@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@IEBAXXZ @ 0x18004661C (-_Xlen@-$deque@UPoseDelta@MPCSixDofProcessor@@V-$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::deque<RayStabilizationResult>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  size_t v8; // rcx
  void *v9; // rax
  __int64 v10; // r15
  size_t v11; // rbx
  const void *v12; // rdx
  char *v13; // rcx
  size_t v14; // r8
  char *v15; // rcx
  char *v16; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0x28F5C28F5C28F5CLL - v2 < v2 )
      std::deque<MPCSixDofProcessor::PoseDelta>::_Xlen();
    v2 *= 2LL;
  }
  v4 = a1[3];
  v5 = v2 - v3;
  v6 = v5 + v3;
  if ( v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v8 = 8 * v6;
    if ( v8 < 0x1000 )
    {
      v7 = operator new(v8);
    }
    else
    {
      if ( v8 + 39 < v8 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v9 = operator new(v8 + 39);
      v7 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v7 - 1) = v9;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 8 * v4;
  v11 = 8LL * a1[2] - 8 * v4;
  memmove(&v7[v4], (const void *)(a1[1] + 8 * v4), v11);
  v12 = (const void *)a1[1];
  v13 = (char *)&v7[v4] + v11;
  if ( v4 > v5 )
  {
    memmove(v13, v12, 8 * v5);
    memmove(v7, (const void *)(8 * v5 + a1[1]), v10 - 8 * v5);
    v15 = (char *)v7 + v10 - 8 * v5;
    v14 = 8 * v5;
  }
  else
  {
    memmove(v13, v12, 8 * v4);
    memset((char *)&v7[v4] + v11 + v10, 0, 8 * (v5 - v4));
    v14 = 8 * v4;
    v15 = (char *)v7;
  }
  memset(v15, 0, v14);
  v16 = (char *)a1[1];
  if ( v16 )
    std::_Deallocate(v16, a1[2], 8uLL);
  a1[1] = v7;
  a1[2] += v5;
}
