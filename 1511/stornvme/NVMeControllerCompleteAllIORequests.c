/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C0004DC4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001BB0 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0004F78 (NVMeControllerReset.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00024A8 (NVMeRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EBC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2)
{
  int v4; // ebp
  __int64 v5; // r14
  unsigned int i; // esi
  __int64 v7; // rdi
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, __int64, _QWORD); // rax
  unsigned __int16 j; // di
  __int64 result; // rax
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, __int64, _QWORD); // rax

  StorPortStallExecution(10000LL);
  v4 = 0;
  if ( *(_WORD *)(a1 + 224) )
  {
    v5 = 0LL;
    do
    {
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 222); ++i )
      {
        v7 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v5 + *(_QWORD *)(a1 + 536) + 32) + 16LL * i), 0LL);
        if ( v7 )
        {
          if ( *(_BYTE *)(v7 + 2) == 40 )
            v8 = *(_QWORD *)(v7 + 104);
          else
            v8 = *(_QWORD *)(v7 + 56);
          if ( (v8 & 0xFFF) != 0 )
            v8 = v8 - (v8 & 0xFFF) + 4096;
          *(_BYTE *)(v7 + 3) = a2;
          v9 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v8 + 4216);
          if ( v9 )
            v9(a1, v7, 0LL);
          NVMeRequestComplete(a1, v7);
        }
      }
      ++v4;
      v5 += 136LL;
    }
    while ( v4 < *(unsigned __int16 *)(a1 + 224) );
  }
  for ( j = 0; ; ++j )
  {
    result = *(unsigned __int16 *)(a1 + 228);
    if ( !(_WORD)result )
      break;
    result = 5000LL;
    if ( j >= 0x1388u )
      break;
    StorPortStallExecution(10LL);
  }
  v12 = 0;
  if ( *(_WORD *)(a1 + 220) )
  {
    do
    {
      v13 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 264) + 16LL * v12), 0LL);
      if ( v13 )
      {
        if ( *(_BYTE *)(v13 + 2) == 40 )
          v14 = *(_QWORD *)(v13 + 104);
        else
          v14 = *(_QWORD *)(v13 + 56);
        if ( (v14 & 0xFFF) != 0 )
          v14 = v14 - (v14 & 0xFFF) + 4096;
        *(_BYTE *)(v13 + 3) = a2;
        v15 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v14 + 4216);
        if ( v15 )
          v15(a1, v13, 0LL);
        NVMeRequestComplete(a1, v13);
      }
      result = *(unsigned __int16 *)(a1 + 220);
      ++v12;
    }
    while ( v12 < (unsigned int)result );
  }
  return result;
}
