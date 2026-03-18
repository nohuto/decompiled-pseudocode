/*
 * XREFs of EtwpCCSwapFlush @ 0x14011EF28
 * Callers:
 *     EtwpCCSwapTrace @ 0x14011EBF0 (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
  char v10[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v11; // [rsp+38h] [rbp-20h] BYREF
  int i; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]

  v2 = EtwpActiveSystemLoggers;
  v11 = a1 + 4;
  v4 = *a1;
  v13 = 0;
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
            result = EtwpOpenLogger(v9, EtwpSiloState, 0LL, v10);
            if ( result )
            {
              if ( *(_DWORD *)(result + 216) == a2 )
                EtwpLogKernelEvent((__int64)&v11, v9, 1LL, 0x525u, 0x202u);
              result = EtwpCloseLogger(v9, EtwpSiloState, v10[0]);
            }
          }
        }
      }
    }
  }
  return result;
}
