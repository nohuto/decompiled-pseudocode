/*
 * XREFs of DecodeMWaitCState @ 0x1C0014F20
 * Callers:
 *     <none>
 * Callees:
 *     IsValidAcpiGenericAddress @ 0x1C0015B6C (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall DecodeMWaitCState(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r10
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-10h]

  v5 = 0LL;
  HIDWORD(v16) = 0;
  if ( *(_BYTE *)a2 == 127 && *(_BYTE *)(a2 + 1) == 1 && *(_BYTE *)(a2 + 2) == 2 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 0x7F000) != 0 )
    {
      v9 = (*(_DWORD *)(a1 + 256) & 0x80000) == 0;
      v10 = *(_QWORD *)(a2 + 4);
      v11 = *(_BYTE *)(a2 + 3);
      *(_QWORD *)&v15 = v10;
      LODWORD(v16) = v11;
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(a1 + 184);
      if ( !v9 )
        DWORD1(v15) = HIDWORD(v10) | 1;
      if ( a3 )
      {
        v14 = (unsigned int)v10 | 0x30000000000000LL;
        if ( (v11 & 2) != 0 )
          v14 = (unsigned int)v10 | 0x130000000000000LL;
        *a3 = v14;
      }
      v12 = a5;
      if ( a5 )
      {
        *(_BYTE *)(a5 + 64) = 1;
        if ( (v11 & 2) != 0 && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C000F434) )
          *(_QWORD *)(v12 + 16) = MWaitIdleCheck;
        else
          *(_QWORD *)(v12 + 16) = v5;
        *(_OWORD *)(v12 + 32) = v15;
        *(_QWORD *)(v12 + 24) = MWaitIdle;
        *(_QWORD *)(v12 + 48) = v16;
      }
      if ( a4 )
        *a4 = v5;
    }
    else
    {
      LODWORD(v5) = -1073741637;
    }
  }
  else
  {
    LODWORD(v5) = -1073741823;
  }
  return (unsigned int)v5;
}
