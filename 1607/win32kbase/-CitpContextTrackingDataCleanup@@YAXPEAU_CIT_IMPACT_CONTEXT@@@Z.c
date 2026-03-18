/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F1F0
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F078 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00F63C4 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx

  for ( i = 0; i < *((_DWORD *)a1 + 90); ++i )
  {
    v5 = *((_QWORD *)a1 + 38) + 176LL * i;
    if ( *(_BYTE *)(v5 + 34) )
    {
      --*((_DWORD *)a1 + 91);
    }
    else if ( *(_BYTE *)(v5 + 35) )
    {
      --*((_DWORD *)a1 + 92);
    }
    v6 = (_QWORD *)(v5 + 16);
    v7 = *(_QWORD *)(v5 + 16);
    v8 = *(_QWORD **)(v5 + 24);
    if ( *(_QWORD *)(v7 + 8) != v5 + 16 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *v6 = v6;
    *(_QWORD *)v5 = 0LL;
    CitpProgDataCleanup((struct _CIT_PROG_DATA *)v5);
  }
  if ( *((_QWORD *)a1 + 38) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 38) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 50);
  *((_DWORD *)a1 + 90) = 0;
  *((_DWORD *)a1 + 93) = 0;
  if ( v3 )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 50) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 49);
  *((_DWORD *)a1 + 102) = 0;
  if ( v4 )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 49) = 0LL;
  }
  *((_QWORD *)a1 + 47) = 0LL;
  *((_QWORD *)a1 + 48) = 0LL;
}
