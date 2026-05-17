/*
 * XREFs of RtlpModuleEnumeratorCallback @ 0x180001430
 * Callers:
 *     <none>
 * Callees:
 *     NtLockVirtualMemory @ 0x1800A8430 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlpModuleEnumeratorCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int16 v7; // r11
  unsigned int *v8; // rcx
  unsigned int i; // edx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned int *v13; // [rsp+28h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 48);
  result = 23117LL;
  if ( *(_WORD *)v5 == 23117 )
  {
    result = v5 + *(int *)(v5 + 60);
    if ( *(_DWORD *)result == 17744 )
    {
      if ( *(_WORD *)(result + 20) )
      {
        v7 = *(_WORD *)(result + 6);
        if ( v7 )
        {
          if ( *(_WORD *)(result + 20) == 240 )
          {
            v8 = (unsigned int *)(result + 264);
            v13 = (unsigned int *)(result + 264);
            for ( i = 0; ; ++i )
            {
              result = v7;
              if ( i >= v7 )
                break;
              v10 = v5 + v8[3];
              if ( v8[2] )
                v11 = v8[2];
              else
                v11 = v8[4];
              v12 = (v10 + v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              if ( *(_QWORD *)a2 >= v10 && *(_QWORD *)a2 < v12 )
              {
                *(_QWORD *)(a2 + 16) = v10;
                *(_QWORD *)(a2 + 24) = v12 - v10;
                result = NtLockVirtualMemory(-1LL, a2 + 16, a2 + 24, 1LL, i, v13);
                *(_DWORD *)(a2 + 8) = result;
                *a3 = 1;
                return result;
              }
              v8 += 10;
              v13 = v8;
            }
          }
        }
      }
    }
  }
  return result;
}
