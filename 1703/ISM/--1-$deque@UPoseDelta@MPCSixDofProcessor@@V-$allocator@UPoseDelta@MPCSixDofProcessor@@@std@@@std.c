/*
 * XREFs of ??1?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@QEAA@XZ @ 0x180046C24
 * Callers:
 *     ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x180046B20 (--_EMPCSixDofProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::deque<MPCSixDofProcessor::PoseDelta>::~deque<MPCSixDofProcessor::PoseDelta>(__int64 a1)
{
  __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rcx

  while ( *(_QWORD *)(a1 + 32) )
  {
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(char **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate(v4, 1uLL, 0xCuLL);
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    std::_Deallocate(v5, *(_QWORD *)(a1 + 16), 8uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate(*(char **)a1, 1uLL, 0x10uLL);
  *(_QWORD *)a1 = 0LL;
}
