/*
 * XREFs of PerfInfoLogInterrupt @ 0x1400904F0
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14015F4A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int16 v4; // di
  int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  char *v8; // rax
  __int64 v9; // rax
  LONGLONG v10; // r8
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v14[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+68h] [rbp-20h]
  int i; // [rsp+6Ch] [rbp-1Ch]

  v3 = *(_BYTE *)(a1 + 93) == 0;
  v14[0] = *(_QWORD *)(a3 + 352);
  v14[1] = *(_QWORD *)(a3 + 208);
  if ( v3 )
  {
    v4 = 3935;
    v11 = *(_QWORD *)(a1 + 24);
    v5 = 12;
  }
  else if ( *(_QWORD *)(a1 + 32) )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v4 = 3890;
    v5 = 16;
    v13 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v4 = 3907;
    v11 = *(_QWORD *)(a1 + 24);
    v5 = 12;
  }
  v6 = EtwpActiveSystemLoggers;
  v12 = a2;
  v3 = !_BitScanForward((unsigned int *)&v7, EtwpActiveSystemLoggers);
  v15[2] = &v11;
  v16 = v5;
  for ( i = 0; !v3; v3 = !_BitScanForward((unsigned int *)&v7, v6) )
  {
    v6 &= v6 - 1;
    v8 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v7;
    if ( v8 )
    {
      if ( (*((_DWORD *)v8 + 1) & 0x4000) != 0 )
      {
        v9 = (unsigned __int16)EtwpSystemLogger[2 * v7 + 1];
        v10 = (unsigned __int16)EtwpSystemLogger[2 * (unsigned int)v7];
        v15[1] = 8LL;
        v15[0] = &v14[v9];
        EtwpLogKernelEvent((__int64)v15, EtwpHostSiloState, v10, 2u, v4, 0x400A02u);
      }
    }
  }
}
