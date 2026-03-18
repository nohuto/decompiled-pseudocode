/*
 * XREFs of NVMeDeviceCompleteAllIORequests @ 0x1C0004BCC
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0001D90 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00023B8 (NVMeRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall NVMeDeviceCompleteAllIORequests(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  int v5; // ebp
  __int64 v6; // r14
  unsigned int i; // esi
  __int64 v8; // rbx
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, __int64, _QWORD); // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 0;
  if ( *(_WORD *)(a1 + 224) )
  {
    v6 = 0LL;
    do
    {
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 222); ++i )
      {
        v8 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v6 + *(_QWORD *)(a1 + 536) + 32) + 16LL * i), 0LL);
        if ( v8 && *(unsigned __int8 *)(v8 + 7) == a2 )
        {
          if ( *(_BYTE *)(v8 + 2) == 40 )
            v9 = *(_QWORD *)(v8 + 104);
          else
            v9 = *(_QWORD *)(v8 + 56);
          if ( (v9 & 0xFFF) != 0 )
            v9 = v9 - (v9 & 0xFFF) + 4096;
          *(_BYTE *)(v8 + 3) = 8;
          v10 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v9 + 4216);
          if ( v10 )
            v10(a1, v8, 0LL);
          NVMeRequestComplete(a1, v8);
        }
      }
      result = (_UNKNOWN **)*(unsigned __int16 *)(a1 + 224);
      ++v5;
      v6 += 136LL;
    }
    while ( v5 < (int)result );
  }
  return result;
}
