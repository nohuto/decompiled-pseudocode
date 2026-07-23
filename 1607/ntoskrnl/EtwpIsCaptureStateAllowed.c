/*
 * XREFs of EtwpIsCaptureStateAllowed @ 0x14052E318
 * Callers:
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x14048F658 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x1406A8BD4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 */

char __fastcall EtwpIsCaptureStateAllowed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  char v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // rax
  _DWORD *i; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  unsigned int v15; // edx

  v4 = 0;
  v7 = 1;
  if ( !*a3 || (v7 = EtwpApplyExeFilter(a1, *a3)) != 0 )
  {
    v8 = a3[1];
    if ( v8 || a3[2] )
      v7 = EtwpApplyPackageIdFilter(a1, v8, a3[2]);
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
        v13 = 2 * v10;
        v7 = 0;
        v14 = (_DWORD *)(a2 + *(_QWORD *)(a2 + 8 * v13 + 120));
        v15 = *(_DWORD *)(a2 + 8 * v13 + 128) >> 2;
        if ( v15 )
        {
          while ( *v14 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 744LL) )
          {
            ++v4;
            ++v14;
            if ( v4 >= v15 )
              return v7;
          }
          return 1;
        }
      }
    }
  }
  return v7;
}
