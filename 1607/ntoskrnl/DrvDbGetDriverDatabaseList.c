/*
 * XREFs of DrvDbGetDriverDatabaseList @ 0x1404E5AAC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404E5860 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseList(
        _QWORD *a1,
        unsigned __int8 (__fastcall *a2)(_QWORD, __int64, __int64, __int64),
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int8 (__fastcall *v8)(_QWORD, __int64, __int64, __int64); // rax
  int v9; // r13d
  __int64 **v10; // r15
  __int64 **v11; // rsi
  int v12; // r12d
  int v13; // eax
  unsigned int v14; // eax
  _QWORD *v16; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v16 = a1;
  v6 = 0;
  v8 = a2;
  v9 = 0;
  *a6 = 0;
  if ( a5 )
    *a4 = 0;
  v10 = (__int64 **)(a1 + 2);
  v11 = (__int64 **)a1[2];
  while ( v11 != v10 )
  {
    if ( !v8 || v8(*a1, (__int64)v11[3], 6LL, a3) )
    {
      v13 = (*((unsigned __int16 *)v11 + 8) >> 1) + 1;
      *a6 += v13;
      if ( a4 )
      {
        v12 = v13 + v9;
        if ( v13 + v9 < a5 )
        {
          RtlStringCchCopyExW(&a4[v9], a5 - v9, (NTSTRSAFE_PCWSTR)v11[3], 0LL, 0LL, 0x900u);
          v9 = v12;
        }
      }
    }
    v11 = (__int64 **)*v11;
    v8 = a2;
    a1 = v16;
    a3 = v18;
  }
  v14 = ++*a6;
  if ( a4 && v14 <= a5 )
    a4[v14 - 1] = 0;
  else
    return (unsigned int)-1073741789;
  return v6;
}
