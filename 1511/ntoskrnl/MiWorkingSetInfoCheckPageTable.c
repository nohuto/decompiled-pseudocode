/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1400BA994
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(__int64 a1, __int64 a2, char a3, KIRQL a4)
{
  unsigned __int64 v8; // rax
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v14[0] = v8;
  if ( (v8 & 1) != 0 )
    return 1LL;
  v10 = 0;
  v11 = (v8 >> 11) & 1;
  if ( (_DWORD)v11 || (unsigned int)MI_GET_PAGING_FILE_OFFSET(v14) )
  {
    if ( (a3 & 1) != 0 )
    {
      v12 = *(_QWORD *)(a2 + 8) | 0x200000LL;
      *(_QWORD *)(a2 + 8) = v12;
      if ( (_DWORD)v11 )
        v13 = v12 & 0xFFFFFFFFFF3FFFFFuLL | 0x400000;
      else
        v13 = v12 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      *(_QWORD *)(a2 + 8) = v13;
    }
    else if ( (a3 & 2) != 0 )
    {
      MiMakeSystemAddressValid(a1 << 25 >> 16, 0LL, 0LL, a4, 0);
      return 1;
    }
  }
  return v10;
}
