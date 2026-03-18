/*
 * XREFs of EtwTraceObjectOperation @ 0x14025D138
 * Callers:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14025E6F4 (EtwpTraceKernelEventWithFilter.c)
 */

__int64 __fastcall EtwTraceObjectOperation(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edi
  int v5; // r10d
  unsigned __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rsi
  __int64 result; // rax
  int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  unsigned int *v15; // r11
  unsigned int v16; // r9d
  __int64 v17; // rdx
  char v18; // r8
  _DWORD v20[2]; // [rsp+38h] [rbp-48h]
  _DWORD v21[2]; // [rsp+40h] [rbp-40h]
  int v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+58h] [rbp-28h]
  int v25; // [rsp+5Ch] [rbp-24h]
  __int64 *v26; // [rsp+60h] [rbp-20h] BYREF
  int v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+6Ch] [rbp-14h]

  v4 = EtwpActiveSystemLoggers;
  v5 = 0;
  v8 = *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  v22 = a3;
  v9 = !_BitScanForward((unsigned int *)&v10, EtwpActiveSystemLoggers);
  result = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v8];
  v12 = *(_DWORD *)(result + 192);
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
          v14 = (unsigned __int16)EtwpObjectTypeFilter[10 * v10];
          if ( EtwpObjectTypeFilter[10 * v10] )
          {
            v20[0] = v12;
            v15 = (unsigned int *)(0x140000000LL + 20 * v10 + 3305924);
            do
            {
              result = *v15;
              v16 = 0;
              v17 = 0LL;
              v21[0] = *v15;
              while ( 1 )
              {
                v18 = *((_BYTE *)v21 + v17);
                if ( v18 == 42 )
                {
LABEL_13:
                  result = (unsigned int)(1 << v10);
                  v5 |= result;
                  goto LABEL_14;
                }
                if ( v18 != 63 && (v16 != 3 || (*((_BYTE *)v20 + v17) & 0x7F) != v18) && *((_BYTE *)v20 + v17) != v18 )
                  break;
                ++v16;
                ++v17;
                if ( v16 >= 4 )
                  goto LABEL_13;
              }
              ++v13;
              ++v15;
            }
            while ( v13 < v14 );
          }
        }
      }
LABEL_14:
      v9 = !_BitScanForward((unsigned int *)&v10, v4);
    }
    while ( !v9 );
    if ( v5 )
    {
      v28 = 0;
      v23 = a2 + 48;
      v25 = v22;
      v26 = &v23;
      v24 = a4;
      v27 = 16;
      return EtwpTraceKernelEventWithFilter((unsigned int)&v26, 1, v5, a1, 290463490);
    }
  }
  return result;
}
