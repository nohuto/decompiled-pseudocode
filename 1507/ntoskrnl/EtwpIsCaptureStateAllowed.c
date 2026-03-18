/*
 * XREFs of EtwpIsCaptureStateAllowed @ 0x1406EA4DC
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1404D5198 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x1406E9D3C (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1406E9DF0 (EtwpApplyPackageIdFilter.c)
 */

char __fastcall EtwpIsCaptureStateAllowed(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v7; // r9
  _WORD *v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // rax
  _DWORD *i; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  unsigned int v14; // edx

  v4 = 0;
  v7 = 1;
  if ( !*(_QWORD *)a3 || (v7 = EtwpApplyExeFilter(a1, *(_WORD **)a3)) != 0 )
  {
    v8 = *(_WORD **)(a3 + 8);
    if ( v8 || *(_QWORD *)(a3 + 16) )
      v7 = EtwpApplyPackageIdFilter(a1, v8, *(_WORD **)(a3 + 16));
    if ( v7 )
    {
      v9 = *(_DWORD *)(a2 + 116);
      v10 = 0LL;
      if ( v9 )
      {
        for ( i = (_DWORD *)(a2 + 132); *i != -2147483644; i += 4 )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v9 )
            return v7;
        }
        v12 = 2 * v10;
        v7 = 0;
        v13 = (_DWORD *)(a2 + *(_QWORD *)(a2 + 8 * v12 + 120));
        v14 = *(_DWORD *)(a2 + 8 * v12 + 128) >> 2;
        if ( v14 )
        {
          while ( *v13 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 744LL) )
          {
            ++v4;
            ++v13;
            if ( v4 >= v14 )
              return v7;
          }
          return 1;
        }
      }
    }
  }
  return v7;
}
