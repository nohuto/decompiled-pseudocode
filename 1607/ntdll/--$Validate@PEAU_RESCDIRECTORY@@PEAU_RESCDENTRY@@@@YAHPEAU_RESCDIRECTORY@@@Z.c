/*
 * XREFs of ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800FFD14
 * Callers:
 *     ResCDirectoryValidate @ 0x1800FFF9C (ResCDirectoryValidate.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800FFA6C (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 */

_BOOL8 __fastcall Validate<_RESCDIRECTORY *,_RESCDENTRY *>(__int64 a1)
{
  BOOL v2; // ebx
  _DWORD *v3; // rax
  __int64 Heap; // rsi
  signed int v6; // edx
  int i; // ecx
  __int64 v8; // rax

  v2 = 1;
  if ( a1 )
  {
    v3 = *(_DWORD **)(a1 + 24);
    if ( v3 )
    {
      if ( !v3[18] )
        return v2;
      if ( (int)v3[22] >= 0 || (int)v3[23] >= 0 )
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3[18]);
        if ( Heap )
        {
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
          if ( v6 < 0 || (unsigned int)RecurseValidate<_RESCDIRECTORY *>(a1, v6, Heap) )
          {
            for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 92LL); ; i = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 48LL * i + 36) )
            {
              v8 = *(_QWORD *)(a1 + 24);
              if ( i < 0 )
                break;
              if ( (unsigned int)i >= *(_DWORD *)(v8 + 72) || *(_BYTE *)(i + Heap) )
                goto LABEL_10;
              *(_BYTE *)(i + Heap) = 1;
            }
            if ( *(int *)(v8 + 96) >= 0 )
              v2 = *(_BYTE *)(*(int *)(v8 + 96) + Heap) != 0;
          }
          else
          {
LABEL_10:
            v2 = 0;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v2;
        }
      }
    }
  }
  return 0LL;
}
