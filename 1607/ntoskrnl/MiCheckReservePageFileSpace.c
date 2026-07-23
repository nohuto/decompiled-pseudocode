/*
 * XREFs of MiCheckReservePageFileSpace @ 0x1400E2AF0
 * Callers:
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x14001E930 (MI_IS_RESET_PTE.c)
 *     MiGetWorkingSetSwapSupport @ 0x140075EDC (MiGetWorkingSetSwapSupport.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 */

char __fastcall MiCheckReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 v7; // r9
  unsigned __int16 v8; // ax
  int *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE *v13; // r10
  __int64 v14; // r11

  v5 = MI_READ_PTE_LOCK_FREE(a1 + 16);
  LODWORD(WorkingSetSwapSupport) = MiInvalidPteConforms(v5);
  if ( (_DWORD)WorkingSetSwapSupport )
  {
    v8 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
    v9 = v8 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v8);
    LODWORD(WorkingSetSwapSupport) = v9[237];
    if ( (_DWORD)WorkingSetSwapSupport )
    {
      LOBYTE(WorkingSetSwapSupport) = v7 >> 1;
      if ( (v7 & 2) == 0 )
      {
        WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(a3);
        if ( !WorkingSetSwapSupport )
        {
          LODWORD(WorkingSetSwapSupport) = MI_IS_RESET_PTE(v12, v10, v11);
          if ( !(_DWORD)WorkingSetSwapSupport || (*(_BYTE *)(a1 + 34) & 0x10) != 0 || (*v13 & 0x42) != 0 )
          {
            LOBYTE(WorkingSetSwapSupport) = 120;
            if ( (unsigned __int64)v13 <= 0xFFFFF6BFFFFFFF78uLL )
            {
              LOBYTE(WorkingSetSwapSupport) = 0;
              if ( (unsigned __int64)v13 >= 0xFFFFF68000000000uLL )
                LOBYTE(WorkingSetSwapSupport) = MiReservePageFileSpace(v14, (__int64)v13, a3);
            }
          }
        }
      }
    }
  }
  return WorkingSetSwapSupport;
}
