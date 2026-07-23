/*
 * XREFs of KiOp_SLDTSTR @ 0x1401DB848
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x1401DB32C (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SLDTSTR(__int64 a1)
{
  int v2; // ecx
  unsigned __int16 v3; // si
  __int64 v4; // r14
  char v5; // al
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( (KiBugCheckActive & 3) == 0 )
  {
    v2 = 0;
LABEL_5:
    if ( !KiNPIEPEnabled || *(_BYTE *)(a1 + 73) != 1 && !v2 )
      return 0LL;
    goto LABEL_8;
  }
  v2 = 1;
  if ( !VslVsmEnabled )
    goto LABEL_5;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 57) & 0x38) != 0 )
    v3 = 64;
  else
    v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)v4 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v12, &v10, &v11) < 0 )
  {
    v7 = -1LL;
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 40) & 0x40;
    if ( *(_BYTE *)(a1 + 50) )
      v6 = v5 != 0 ? 2 : 4;
    else
      v6 = v5 != 0 ? 2 : 8;
    if ( v10 == 1 )
    {
      v7 = v12;
      v8 = v12 + v6;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v7 = v12;
    }
    if ( !v11 || v6 == 2 )
    {
      *(_WORD *)v7 = v3;
    }
    else if ( v6 == 4 )
    {
      *(_DWORD *)v7 = v3;
    }
    else
    {
      *(_QWORD *)v7 = v3;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !*(_BYTE *)(a1 + 88) )
  {
    *(_DWORD *)v4 = -1073741819;
    *(_QWORD *)(v4 + 32) = 1LL;
    *(_QWORD *)(v4 + 40) = v7;
    *(_BYTE *)(a1 + 89) = 1;
  }
  return 0LL;
}
