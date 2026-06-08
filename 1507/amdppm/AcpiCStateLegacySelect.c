/*
 * XREFs of AcpiCStateLegacySelect @ 0x1C0002384
 * Callers:
 *     AcpiCStateIdlePrepare @ 0x1C00024D0 (AcpiCStateIdlePrepare.c)
 *     PepIdlePreselect @ 0x1C0003D80 (PepIdlePreselect.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiCStateLegacySelect(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  char i; // r10
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdi

  v2 = *(_DWORD *)(a2 + 32);
  i = 0;
  if ( v2 == -1 )
  {
    if ( *(_BYTE *)(a2 + 42) )
    {
      i = 1;
      v6 = *(unsigned __int8 *)(a1 + 20) - 1;
      v2 = *(unsigned __int8 *)(v6 + a1 + 21);
    }
    else
    {
      v8 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 32);
      v6 = *(_DWORD *)(a1 + 16);
      if ( v8 >= *(unsigned int *)(a2 + 36) )
      {
        v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 24);
        if ( v9 < (unsigned int)(v8 * *(unsigned __int8 *)(a2 + 41) / 0x64) && v6 )
        {
          --v6;
        }
        else if ( v9 >= (unsigned int)(v8 * *(unsigned __int8 *)(a2 + 40) / 0x64)
               && v6 + 1 < *(unsigned __int8 *)(a1 + 20) )
        {
          ++v6;
        }
        i = 1;
      }
      v2 = *(unsigned __int8 *)(v6 + a1 + 21);
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 56);
    if ( v2 >= v5 )
      v2 = v5 - 1;
    v6 = 0;
    v7 = 0LL;
    for ( i = 1; (unsigned int)v7 < *(unsigned __int8 *)(a1 + 20); v7 = (unsigned int)(v7 + 1) )
    {
      if ( (_DWORD)v7 && *(unsigned __int8 *)(v7 + a1 + 21) <= v2 )
        v6 = v7;
    }
  }
  *(_DWORD *)(a1 + 12) = v2;
  *(_DWORD *)(a1 + 16) = v6;
  if ( i )
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  }
}
