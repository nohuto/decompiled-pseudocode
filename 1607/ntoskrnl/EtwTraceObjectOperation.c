/*
 * XREFs of EtwTraceObjectOperation @ 0x140225BB0
 * Callers:
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140159DFC (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402270D8 (EtwpTraceKernelEventWithFilter.c)
 */

__int64 __fastcall EtwTraceObjectOperation(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebp
  int v8; // edi
  bool v9; // zf
  __int64 v10; // r14
  __int64 result; // rax
  int v12; // r8d
  int v13; // ebx
  _WORD *v14; // rsi
  int v15; // eax
  int v17; // [rsp+34h] [rbp-64h]
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+40h] [rbp-58h]
  int v20; // [rsp+44h] [rbp-54h]
  _QWORD v21[2]; // [rsp+48h] [rbp-50h] BYREF

  v4 = EtwpActiveSystemLoggers;
  v8 = 0;
  v9 = !_BitScanForward((unsigned int *)&v10, EtwpActiveSystemLoggers);
  result = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  v12 = *(_DWORD *)(result + 192);
  v17 = v12;
  if ( !v9 )
  {
    do
    {
      v4 &= v4 - 1;
      result = (__int64)&EtwpGroupMasks + 32 * (unsigned int)v10;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v10;
          v13 = 0;
          v14 = (_WORD *)(0x140000000LL + 20 * v10 + 3134080);
          if ( *v14 )
          {
            while ( 1 )
            {
              v15 = ExCheckSingleFilter(v12, *(_DWORD *)&v14[2 * v13 + 2]);
              v12 = v17;
              if ( v15 )
                break;
              result = (unsigned __int16)*v14;
              if ( ++v13 >= (unsigned int)result )
                goto LABEL_9;
            }
            result = (unsigned int)(1 << v10);
            v8 |= result;
          }
        }
      }
LABEL_9:
      v9 = !_BitScanForward((unsigned int *)&v10, v4);
    }
    while ( !v9 );
    if ( v8 )
    {
      v18 = a2 + 48;
      v19 = a4;
      v21[0] = &v18;
      v20 = a3;
      v21[1] = 16LL;
      return EtwpTraceKernelEventWithFilter((unsigned int)v21, 1, v8, a1, 290463490);
    }
  }
  return result;
}
