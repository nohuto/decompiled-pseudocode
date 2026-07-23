/*
 * XREFs of MiUnlockDriverCode @ 0x140544D4C
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x140081D40 (MiUnlockCodePage.c)
 */

__int64 __fastcall MiUnlockDriverCode(__int64 a1)
{
  void *v1; // rbx
  __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // rsi
  unsigned int v5; // edi
  unsigned int *v6; // r14
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v10; // rdx

  v1 = *(void **)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int64)v1 < qword_140326950
      || (result = qword_140326950 + 0x8000000000LL, (unsigned __int64)v1 >= qword_140326950 + 0x8000000000LL) )
    {
      v4 = RtlImageNtHeader(v1);
      v5 = 0;
      result = v4->FileHeader.SizeOfOptionalHeader;
      if ( v4->FileHeader.NumberOfSections )
      {
        v6 = (unsigned int *)((char *)&v4->OptionalHeader.SizeOfInitializedData + result);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * v5) )
          {
            v7 = *v6;
            if ( v6[2] >= *v6 )
              v7 = v6[2];
            MiGetPteAddress(((unsigned __int64)v1 + v6[1] + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL);
            PteAddress = MiGetPteAddress(v8);
            MiUnlockCodePage(PteAddress, v10);
          }
          result = v4->FileHeader.NumberOfSections;
          ++v5;
          v6 += 10;
        }
        while ( v5 < (unsigned int)result );
      }
    }
  }
  return result;
}
