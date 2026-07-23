/*
 * XREFs of EtwTraceObject @ 0x1406A1E94
 * Callers:
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 *     ObpRegisterObject @ 0x1406682E0 (ObpRegisterObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140159DFC (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402270D8 (EtwpTraceKernelEventWithFilter.c)
 */

void __fastcall EtwTraceObject(unsigned __int16 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int8 v5; // r15
  unsigned int v6; // edi
  bool v7; // zf
  __int64 v8; // r14
  int v9; // r8d
  char *v10; // rax
  int v11; // ebx
  _WORD *v12; // rbp
  int v13; // eax
  int v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int16 v16; // [rsp+40h] [rbp-58h]
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF

  v2 = EtwpActiveSystemLoggers;
  v5 = ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v6 = 0;
  v7 = !_BitScanForward((unsigned int *)&v8, EtwpActiveSystemLoggers);
  v9 = *(_DWORD *)(ObTypeIndexTable[v5] + 192);
  v14 = v9;
  if ( !v7 )
  {
    do
    {
      v2 &= v2 - 1;
      v10 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v8;
      if ( v10 )
      {
        if ( (*((_DWORD *)v10 + 4) & 0x80u) != 0 )
        {
          v11 = 0;
          v12 = (_WORD *)(0x140000000LL + 20 * v8 + 3134080);
          if ( *v12 )
          {
            while ( 1 )
            {
              v13 = ExCheckSingleFilter(v9, *(_DWORD *)&v12[2 * v11 + 2]);
              v9 = v14;
              if ( v13 )
                break;
              if ( ++v11 >= (unsigned int)(unsigned __int16)*v12 )
                goto LABEL_9;
            }
            v6 |= 1 << v8;
          }
        }
      }
LABEL_9:
      v7 = !_BitScanForward((unsigned int *)&v8, v2);
    }
    while ( !v7 );
    if ( v6 )
    {
      v17[1] = 16LL;
      v15 = a2 + 48;
      v16 = v5;
      v17[0] = &v15;
      EtwpTraceKernelEventWithFilter((__int64)v17, 1u, v6, a1, 0x10501902u);
    }
  }
}
