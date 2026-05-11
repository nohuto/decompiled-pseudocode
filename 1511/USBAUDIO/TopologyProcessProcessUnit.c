/*
 * XREFs of TopologyProcessProcessUnit @ 0x1C0016F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     USBCntrlGetSetProcessingUnitEnable @ 0x1C001F5B0 (USBCntrlGetSetProcessingUnitEnable.c)
 */

__int64 __fastcall TopologyProcessProcessUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v8; // r10d
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // r8
  __int64 i; // r9
  __int64 v13; // rcx
  __int64 result; // rax

  v8 = *a6;
  v9 = *(unsigned int *)(a2 + 64);
  v10 = a3 + 152LL * (unsigned int)*a5;
  v11 = (_QWORD *)(a4 + 16LL * *a6);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 32); *((_DWORD *)v11 - 1) = 1 )
  {
    v13 = 3 * i;
    ++v8;
    i = (unsigned int)(i + 1);
    *v11 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4 * v13);
    v11 += 2;
    *((_DWORD *)v11 - 2) = *a5;
  }
  *a6 = v8;
  ++*a5;
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(v10 + 144) = USBCntrlGetSetProcessingUnitEnable;
  *(_QWORD *)(v10 + 136) = USBCntrlGetSetProcessingUnitValue;
  if ( (*(_DWORD *)(a2 + 76) & 1) == 0 )
    return ProcessSpecificRtnMap[v9](a1, a2, v10);
  *(_BYTE *)(v10 + 72) = 1;
  LOBYTE(v11) = -127;
  result = USBCntrlGetSetProcessingUnitEnable(a1, v10, v11, v10 + 73);
  if ( (int)result >= 0 )
    return ProcessSpecificRtnMap[v9](a1, a2, v10);
  return result;
}
