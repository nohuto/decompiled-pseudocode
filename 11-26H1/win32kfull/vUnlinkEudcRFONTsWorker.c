/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x140325770
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x140325380 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     vMakeInactiveHelper @ 0x1403250D4 (vMakeInactiveHelper.c)
 */

__int64 __fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 i; // rdi
  HSEMAPHORE *v8; // rcx
  __int64 v9; // rax

  v2 = *(_QWORD *)a2;
  result = *(unsigned int *)(*(_QWORD *)a2 + 52LL);
  if ( (result & 8) == 0 )
  {
    result = v2 + 72;
    v6 = *(__int64 **)(v2 + 72);
    while ( v6 != (__int64 *)result )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 90); i = (unsigned int)(i + 1) )
      {
        v8 = (HSEMAPHORE *)(v6[33] + 8 * i);
        if ( *v8 )
        {
          v9 = *((_QWORD *)*v8 + 15);
          if ( v9 == *a1 || v9 == a1[1] )
            vMakeInactiveHelper(v8, a2, v2);
        }
      }
      *((_DWORD *)v6 + 58) = 0;
      v6 = (__int64 *)*v6;
      result = *(_QWORD *)a2 + 72LL;
    }
  }
  return result;
}
