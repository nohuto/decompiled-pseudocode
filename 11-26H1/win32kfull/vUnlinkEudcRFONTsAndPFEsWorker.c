/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x140325628
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     vMakeInactiveHelper @ 0x1403250D4 (vMakeInactiveHelper.c)
 */

__int64 __fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 v9; // r8
  int v10; // esi
  __int64 i; // rdx
  HSEMAPHORE *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx

  v3 = *a3;
  result = *(unsigned int *)(*a3 + 52);
  if ( (result & 8) == 0 )
  {
    result = v3 + 72;
    v8 = *(__int64 **)(v3 + 72);
    while ( v8 != (__int64 *)result )
    {
      v9 = *((unsigned int *)v8 + 90);
      v10 = 1;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
      {
        v12 = (HSEMAPHORE *)(v8[33] + 8 * i);
        if ( *v12 )
        {
          v13 = *((_QWORD *)*v12 + 15);
          v10 = 0;
          if ( v13 == *a1 || v13 == a1[1] )
          {
            vMakeInactiveHelper(v12, i, v9);
            if ( *(_QWORD *)(*(v8 - 46) + 120) == a2 )
              goto LABEL_12;
            break;
          }
        }
      }
      if ( !v8[33] || !v10 )
        goto LABEL_15;
LABEL_12:
      v14 = (__int64 *)v8[33];
      if ( v14 != v8 + 34 )
        Win32FreePool(v14);
      v8[33] = 0LL;
      *(__int64 *)((char *)v8 + 356) = 0LL;
      *((_DWORD *)v8 + 88) = 0;
LABEL_15:
      *((_DWORD *)v8 + 58) = 0;
      v3 = *a3;
      v8 = (__int64 *)*v8;
      result = *a3 + 72;
    }
    v15 = 0LL;
    if ( *(_DWORD *)(v3 + 216) )
    {
      do
      {
        v16 = *(_QWORD *)(v3 + 8 * v15 + 224);
        if ( *(_QWORD *)(v16 + 120) == a2 )
          *(_QWORD *)(v16 + 120) = 0LL;
        v3 = *a3;
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *(_DWORD *)(*a3 + 216) );
    }
  }
  return result;
}
