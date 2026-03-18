/*
 * XREFs of Control_FindTrbMatch @ 0x1C0025E4C
 * Callers:
 *     Control_ProcessTransferEventPointer @ 0x1C0025F58 (Control_ProcessTransferEventPointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall Control_FindTrbMatch(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5, int *a6)
{
  __int64 v6; // rax
  bool v7; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  __int64 i; // r8
  unsigned int v12; // eax
  int v13; // ecx

  v6 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v9 = v6 + 16LL * a3;
  v10 = v6 + 16LL * a4;
  if ( v9 <= v10 )
  {
    for ( i = 16LL * a3 + *(_QWORD *)(a2 + 24); ; i += 16LL )
    {
      if ( v7 )
        return v7;
      v7 = i == *(_QWORD *)a1;
      if ( (unsigned __int16)*(_DWORD *)(v9 + 12) >> 10 != 1 && (unsigned __int16)*(_DWORD *)(v9 + 12) >> 10 != 3 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 12) >> 10 == 7 && i != *(_QWORD *)a1 )
        {
          *a6 = 0;
          ++*a5;
        }
        goto LABEL_20;
      }
      if ( i != *(_QWORD *)a1 )
        break;
      v12 = *(unsigned __int8 *)(a1 + 11);
      if ( v12 >= 2 )
      {
        if ( v12 <= 4 || v12 == 6 || v12 == 26 )
        {
LABEL_16:
          v13 = (*(_DWORD *)(v9 + 8) & 0x1FFFF) - (*(_DWORD *)(a1 + 8) & 0xFFFFFF);
LABEL_19:
          *a6 += v13;
          goto LABEL_20;
        }
        if ( v12 == 28 )
        {
          *a6 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
        }
        else if ( v12 == 36 )
        {
          goto LABEL_16;
        }
      }
LABEL_20:
      v9 += 16LL;
      if ( v9 > v10 )
        return v7;
    }
    v13 = *(_DWORD *)(v9 + 8) & 0x1FFFF;
    goto LABEL_19;
  }
  return v7;
}
