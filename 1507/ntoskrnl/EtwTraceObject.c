/*
 * XREFs of EtwTraceObject @ 0x1406E4034
 * Callers:
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 *     ObpRegisterObject @ 0x1406AE194 (ObpRegisterObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14025E6F4 (EtwpTraceKernelEventWithFilter.c)
 */

__int64 __fastcall EtwTraceObject(unsigned __int16 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // r10d
  unsigned __int8 v5; // si
  bool v6; // zf
  __int64 v7; // r14
  __int64 result; // rax
  int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned int *v12; // r11
  unsigned int v13; // r9d
  __int64 v14; // rdx
  char v15; // r8
  _DWORD v16[2]; // [rsp+38h] [rbp-38h]
  _DWORD v17[2]; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int16 v19; // [rsp+50h] [rbp-20h]
  __int64 *v20; // [rsp+58h] [rbp-18h] BYREF
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  v2 = EtwpActiveSystemLoggers;
  v3 = 0;
  v5 = ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v6 = !_BitScanForward((unsigned int *)&v7, EtwpActiveSystemLoggers);
  result = ObTypeIndexTable[v5];
  v9 = *(_DWORD *)(result + 192);
  if ( !v6 )
  {
    do
    {
      v2 &= v2 - 1;
      result = (__int64)&EtwpGroupMasks + 32 * (unsigned int)v7;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v7;
          v10 = 0;
          v11 = (unsigned __int16)EtwpObjectTypeFilter[10 * v7];
          if ( EtwpObjectTypeFilter[10 * v7] )
          {
            v16[0] = v9;
            v12 = (unsigned int *)(0x140000000LL + 20 * v7 + 3305924);
            do
            {
              result = *v12;
              v13 = 0;
              v14 = 0LL;
              v17[0] = *v12;
              while ( 1 )
              {
                v15 = *((_BYTE *)v17 + v14);
                if ( v15 == 42 )
                {
LABEL_13:
                  result = (unsigned int)(1 << v7);
                  v3 |= result;
                  goto LABEL_14;
                }
                if ( v15 != 63 && (v13 != 3 || (*((_BYTE *)v16 + v14) & 0x7F) != v15) && *((_BYTE *)v16 + v14) != v15 )
                  break;
                ++v13;
                ++v14;
                if ( v13 >= 4 )
                  goto LABEL_13;
              }
              ++v10;
              ++v12;
            }
            while ( v10 < v11 );
          }
        }
      }
LABEL_14:
      v6 = !_BitScanForward((unsigned int *)&v7, v2);
    }
    while ( !v6 );
    if ( v3 )
    {
      v22 = 0;
      v18 = a2 + 48;
      v19 = v5;
      v20 = &v18;
      v21 = 16;
      return (__int64)EtwpTraceKernelEventWithFilter((__int64)&v20, 1u, v3, a1, 273684738);
    }
  }
  return result;
}
