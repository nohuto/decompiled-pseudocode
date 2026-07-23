/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry @ 0x18006DC80
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetModuleName @ 0x18006D704 (LdrpGetModuleName.c)
 *     LdrpReadMemory @ 0x18006DBF4 (LdrpReadMemory.c)
 *     LdrpProtectedCopyMemory @ 0x18006DDE0 (LdrpProtectedCopyMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall LdrQueryModuleInfoFromLdrEntry(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  NTSTATUS result; // eax
  int v10; // esi
  int Memory; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64, __int64 *, __int64, __int64 *); // rax
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+D0h] [rbp-30h]
  _BYTE v21[32]; // [rsp+D8h] [rbp-28h] BYREF
  int v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+128h] [rbp+28h]
  __int64 v24; // [rsp+1F0h] [rbp+F0h] BYREF

  result = LdrpReadMemory(a1, a3, (int)&v18, 288LL);
  if ( result >= 0 )
  {
    result = LdrpReadMemory(a1, v23, (int)&v16, 80LL);
    if ( result >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v19;
      *(_DWORD *)(a2 + 24) = v20;
      *(_DWORD *)(a2 + 28) = v22;
      if ( v17 > 0xFFFF )
        *(_WORD *)(a2 + 36) = -1;
      else
        *(_WORD *)(a2 + 36) = v17;
      if ( (a5 & 2) != 0 )
      {
        v10 = 10240;
        Memory = LdrpReadMemory(a1, a4, (int)&v24, 8LL);
LABEL_7:
        if ( Memory >= 0 )
        {
          while ( 1 )
          {
            v12 = v24;
            if ( v24 == a4 )
              break;
            ++*(_WORD *)(a2 + 34);
            if ( a3 == v12 - 32 )
              break;
            if ( !--v10 )
              break;
            v13 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 *))a1[1];
            v14 = (char *)v13 == (char *)LdrpProtectedCopyMemory
                ? LdrpProtectedCopyMemory(*a1)
                : v13(*a1, v12, &v24, 8LL, &v15);
            if ( v14 < 0 )
              break;
            if ( v15 != 8 )
            {
              Memory = -2147483635;
              goto LABEL_7;
            }
          }
        }
      }
      return LdrpGetModuleName((HANDLE *)a1, (__int64)v21, a2, 0);
    }
  }
  return result;
}
