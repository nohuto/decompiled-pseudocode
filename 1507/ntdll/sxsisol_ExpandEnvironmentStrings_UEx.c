/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800C9814
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlExpandEnvironmentStrings_U @ 0x18000F480 (RtlExpandEnvironmentStrings_U.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpEnsureBufferSize @ 0x180068970 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  if ( a2 && a3 && a2 != a3 )
  {
    if ( *a2 )
    {
      v11 = 0;
      v12 = 0LL;
      RtlEnterCriticalSection((__int64)&FastPebLock);
      v5 = RtlExpandEnvironmentStrings_U(0, a2, (__int64)&v11, &v13);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741789 )
      {
        if ( (unsigned int)v13 > 0xFFFE || (v9 = (unsigned int)v13 + 4LL, v9 > 0xFFFE) )
        {
          v5 = -1073741562;
        }
        else if ( (a3 == (unsigned __int16 *)-16LL || v9 > *((_QWORD *)a3 + 4))
               && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v9) < 0 )
        {
          v5 = -1073741801;
        }
        else
        {
          *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 2);
          a3[1] = a3[16];
          v5 = RtlExpandEnvironmentStrings_U(0, a2, (__int64)a3, 0LL);
          if ( v5 >= 0 )
            v5 = 0;
        }
      }
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    else
    {
      *a3 = 0;
      v6 = *a2 + 2LL;
      if ( v6 <= 0xFFFE )
      {
        v7 = (__int64 *)(a3 + 8);
        if ( (a3 == (unsigned __int16 *)-16LL || v6 > *((_QWORD *)a3 + 4))
          && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v6) < 0 )
        {
          return (unsigned int)-1073741801;
        }
        else
        {
          v8 = *v7;
          *((_QWORD *)a3 + 1) = *v7;
          memmove((void *)(v8 + 2 * ((unsigned __int64)*a3 >> 1)), *((const void **)a2 + 1), *a2);
          a3[1] = *a3 + *a2 + 2;
          *a3 += *a2;
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)*a3 >> 1)) = 0;
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
