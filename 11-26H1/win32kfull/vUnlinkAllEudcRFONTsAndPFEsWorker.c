/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x140325234
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     PFTOBJ::EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_::_5_::_lambda_3___ @ 0x140323C28 (PFTOBJ--EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_--_5_--_lambda_3___.c)
 * Callees:
 *     vMakeInactiveHelper @ 0x1403250D4 (vMakeInactiveHelper.c)
 */

__int64 __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(int a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 *v6; // rbx
  unsigned int i; // edi
  HSEMAPHORE *v8; // rcx
  __int64 *v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rdx

  v2 = *(_QWORD *)a2;
  result = *(unsigned int *)(*(_QWORD *)a2 + 52LL);
  if ( (result & 8) == 0 )
  {
    result = v2 + 72;
    v6 = *(__int64 **)(v2 + 72);
    while ( v6 != (__int64 *)result )
    {
      if ( v6[30] )
        vMakeInactiveHelper((HSEMAPHORE *)v6 + 30, a2, v2);
      if ( v6[31] )
        vMakeInactiveHelper((HSEMAPHORE *)v6 + 31, a2, v2);
      if ( v6[32] )
        vMakeInactiveHelper((HSEMAPHORE *)v6 + 32, a2, v2);
      if ( a1 && v6[33] )
      {
        for ( i = 0; i < *((_DWORD *)v6 + 90); ++i )
        {
          v8 = (HSEMAPHORE *)(v6[33] + 8LL * i);
          if ( *v8 )
            vMakeInactiveHelper(v8, a2, v2);
        }
        v9 = (__int64 *)v6[33];
        if ( v9 != v6 + 34 )
          Win32FreePool(v9);
        *(__int64 *)((char *)v6 + 356) = 0LL;
        v6[33] = 0LL;
        *((_DWORD *)v6 + 88) = 0;
      }
      *((_DWORD *)v6 + 58) = 0;
      v2 = *(_QWORD *)a2;
      v6 = (__int64 *)*v6;
      result = *(_QWORD *)a2 + 72LL;
    }
    if ( a1 )
    {
      v10 = 0;
      if ( *(_DWORD *)(v2 + 216) )
      {
        do
        {
          result = v10;
          v11 = *(_QWORD *)(v2 + 8LL * v10 + 224);
          if ( *(_QWORD *)(v11 + 120) )
            *(_QWORD *)(v11 + 120) = 0LL;
          v2 = *(_QWORD *)a2;
          ++v10;
        }
        while ( v10 < *(_DWORD *)(*(_QWORD *)a2 + 216LL) );
      }
    }
  }
  return result;
}
