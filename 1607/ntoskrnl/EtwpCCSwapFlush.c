/*
 * XREFs of EtwpCCSwapFlush @ 0x14007369C
 * Callers:
 *     EtwpCCSwapTrace @ 0x1400D4430 (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1400737E8 (EtwpOpenLogger.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCCSwapFlush(int *a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  char *v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r8
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-20h] BYREF
  int i; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v2 = EtwpActiveSystemLoggers;
  v12 = a1 + 4;
  v4 = *a1;
  v14 = 0;
  result = (unsigned int)(v4 - 16);
  v6 = !_BitScanForward((unsigned int *)&a1, EtwpActiveSystemLoggers);
  for ( i = result; !v6; v6 = !_BitScanForward((unsigned int *)&a1, v2) )
  {
    v7 = (unsigned int)a1;
    v2 &= v2 - 1;
    result = 32LL * (unsigned int)a1;
    v8 = (char *)&EtwpGroupMasks + result;
    if ( (_UNKNOWN *)((char *)&EtwpGroupMasks + result) )
    {
      result = *((unsigned int *)v8 + 1);
      if ( (result & 4) != 0 )
      {
        if ( v8 )
        {
          if ( (result & 0x100) != 0 )
          {
            v9 = (unsigned __int16)EtwpSystemLogger[2 * v7];
            result = EtwpOpenLogger((unsigned __int16)EtwpSystemLogger[2 * v7], EtwpHostSiloState, 0LL, v11);
            if ( result )
            {
              if ( *(_DWORD *)(result + 200) == a2 )
                EtwpLogKernelEvent((__int64)&v12, EtwpHostSiloState, v9, 1u, 0x525u, 0x202u);
              LOBYTE(v10) = v11[0];
              result = EtwpCloseLogger(v9, EtwpHostSiloState, v10);
            }
          }
        }
      }
    }
  }
  return result;
}
