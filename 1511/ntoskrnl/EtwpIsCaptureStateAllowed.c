/*
 * XREFs of EtwpIsCaptureStateAllowed @ 0x1403B5208
 * Callers:
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1404CDCE4 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x140666B58 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 */

char __fastcall EtwpIsCaptureStateAllowed(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // rax
  _DWORD *i; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  unsigned int v15; // edx

  v5 = 0;
  LOBYTE(a4) = 1;
  if ( !*a3 || (LOBYTE(a4) = EtwpApplyExeFilter(a1, *a3, a3, a4), (_BYTE)a4) )
  {
    v8 = a3[1];
    if ( v8 || a3[2] )
      LOBYTE(a4) = EtwpApplyPackageIdFilter(a1, v8, a3[2], a4);
    if ( (_BYTE)a4 )
    {
      v9 = *(_DWORD *)(a2 + 116);
      v10 = 0LL;
      if ( v9 )
      {
        for ( i = (_DWORD *)(a2 + 132); *i != -2147483644; i += 4 )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v9 )
            return a4;
        }
        v13 = 2 * v10;
        LOBYTE(a4) = 0;
        v14 = (_DWORD *)(a2 + *(_QWORD *)(a2 + 8 * v13 + 120));
        v15 = *(_DWORD *)(a2 + 8 * v13 + 128) >> 2;
        if ( v15 )
        {
          while ( *v14 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 744LL) )
          {
            ++v5;
            ++v14;
            if ( v5 >= v15 )
              return a4;
          }
          LOBYTE(a4) = 1;
        }
      }
    }
  }
  return a4;
}
