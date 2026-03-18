/*
 * XREFs of EtwTraceDuplicateHandle @ 0x1406E379C
 * Callers:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x140523C8C (ObInheritObjectHandle.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14025E6F4 (EtwpTraceKernelEventWithFilter.c)
 */

__int64 __fastcall EtwTraceDuplicateHandle(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  bool v10; // zf
  __int64 v11; // rsi
  int v12; // r12d
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int16 *v15; // rbx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  char v18; // r8
  _DWORD v19[2]; // [rsp+38h] [rbp-39h]
  _DWORD v20[2]; // [rsp+40h] [rbp-31h]
  __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  int v22; // [rsp+50h] [rbp-21h]
  int v23; // [rsp+54h] [rbp-1Dh]
  int v24; // [rsp+58h] [rbp-19h]
  __int16 v25; // [rsp+5Ch] [rbp-15h]
  int v26; // [rsp+5Eh] [rbp-13h]
  __int64 v27; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+70h] [rbp-1h]
  __int64 v29; // [rsp+78h] [rbp+7h]
  __int64 *v30; // [rsp+80h] [rbp+Fh] BYREF
  int v31; // [rsp+88h] [rbp+17h]
  int v32; // [rsp+8Ch] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+4Fh] BYREF

  result = (__int64)&retaddr;
  v7 = 0;
  v8 = EtwpActiveSystemLoggers;
  v10 = !_BitScanForward((unsigned int *)&v11, EtwpActiveSystemLoggers);
  v12 = *(_DWORD *)(a6 + 192);
  v28 = a3;
  v29 = a2;
  v27 = a1;
  if ( !v10 )
  {
    do
    {
      v8 &= v8 - 1;
      result = (__int64)&EtwpGroupMasks + 32 * (unsigned int)v11;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x40) != 0 )
        {
          result = 5 * v11;
          v13 = 0;
          v14 = (unsigned __int16)EtwpObjectTypeFilter[10 * v11];
          if ( EtwpObjectTypeFilter[10 * v11] )
          {
            v19[0] = v12;
            v15 = &EtwpObjectTypeFilter[10 * v11 + 2];
            do
            {
              result = *(unsigned int *)v15;
              v16 = 0;
              v17 = 0LL;
              v20[0] = *(_DWORD *)v15;
              while ( 1 )
              {
                v18 = *((_BYTE *)v20 + v17);
                if ( v18 == 42 )
                {
LABEL_13:
                  result = (unsigned int)(1 << v11);
                  v7 |= result;
                  goto LABEL_14;
                }
                if ( v18 != 63 && (v16 != 3 || (*((_BYTE *)v19 + v17) & 0x7F) != v18) && *((_BYTE *)v19 + v17) != v18 )
                  break;
                ++v16;
                ++v17;
                if ( v16 >= 4 )
                  goto LABEL_13;
              }
              ++v13;
              v15 += 2;
            }
            while ( v13 < v14 );
          }
        }
      }
LABEL_14:
      v10 = !_BitScanForward((unsigned int *)&v11, v8);
    }
    while ( !v10 );
    if ( v7 )
    {
      v32 = 0;
      v21 = v28;
      v22 = v27;
      v23 = v29;
      v24 = a5;
      v25 = *(unsigned __int8 *)(a6 + 40);
      v30 = &v21;
      v26 = a4;
      v31 = 26;
      return (__int64)EtwpTraceKernelEventWithFilter((__int64)&v30, 1u, v7, 0x1122u, 273684739);
    }
  }
  return result;
}
