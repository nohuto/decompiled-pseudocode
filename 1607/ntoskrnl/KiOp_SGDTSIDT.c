/*
 * XREFs of KiOp_SGDTSIDT @ 0x1401DB6B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     KiOpRetrieveRegMemAddress @ 0x1401DB32C (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SGDTSIDT(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // xmm0_8
  void *IdtBase; // rcx
  __int16 v5; // ax
  __int64 v6; // rdi
  unsigned int v7; // ecx
  char *v8; // r8
  _TBYTE Src; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF
  void *v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  if ( (KiBugCheckActive & 3) != 0 )
  {
    v2 = 1;
    if ( VslVsmEnabled )
      goto LABEL_8;
  }
  else
  {
    v2 = 0;
  }
  if ( !KiNPIEPEnabled || *(_BYTE *)(a1 + 73) != 1 && !v2 )
    return 0LL;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 57) & 0x38) != 0 )
  {
    if ( *(_BYTE *)(a1 + 73) )
    {
      v3 = KiOpIdtr;
      goto LABEL_14;
    }
    IdtBase = KeGetPcr()->IdtBase;
    v5 = 4095;
LABEL_16:
    LOWORD(Src) = v5;
    *(_QWORD *)((char *)&Src + 2) = IdtBase;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 73) )
  {
    IdtBase = KeGetPcr()->NtTib.ExceptionList;
    v5 = 87;
    goto LABEL_16;
  }
  v3 = KiOpGdtr;
LABEL_14:
  *(_QWORD *)&Src = v3;
  HIWORD(Src) = -1;
LABEL_17:
  v6 = *(_QWORD *)(a1 + 24);
  v13 = v6;
  *(_DWORD *)v6 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v12, &v11, 0LL) < 0 )
  {
    v12 = (void *)-1LL;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 50) != 0 ? 6 : 10;
    if ( v11 == 1 )
    {
      v8 = (char *)v12 + v7;
      if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v12, &Src, v7);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !*(_BYTE *)(a1 + 88) )
  {
    *(_DWORD *)v6 = -1073741819;
    *(_QWORD *)(v6 + 32) = 1LL;
    *(_QWORD *)(v6 + 40) = v12;
    *(_BYTE *)(a1 + 89) = 1;
  }
  return 0LL;
}
