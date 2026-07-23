/*
 * XREFs of ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800F7B18
 * Callers:
 *     ResCDirectoryValidate @ 0x1800F7DA8 (ResCDirectoryValidate.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7870 (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 */

_BOOL8 __fastcall Validate<_RESCDIRECTORY *,_RESCDENTRY *>(__int64 a1)
{
  BOOL v2; // ebx
  _DWORD *v3; // rax
  _BYTE *Heap; // rsi
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
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3[18]);
        if ( Heap )
        {
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
          if ( v6 < 0 || (unsigned int)RecurseValidate<_RESCDIRECTORY *>(a1, v6, (__int64)Heap) )
          {
            for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 92LL);
                  i >= 0;
                  i = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 48LL * i + 36) )
            {
              if ( (unsigned int)i >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL) || Heap[i] )
                goto LABEL_18;
              Heap[i] = 1;
            }
            v8 = *(_QWORD *)(a1 + 24);
            if ( *(int *)(v8 + 96) >= 0 )
              v2 = Heap[*(int *)(v8 + 96)] != 0;
          }
          else
          {
LABEL_18:
            v2 = 0;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v2;
        }
      }
    }
  }
  return 0LL;
}
