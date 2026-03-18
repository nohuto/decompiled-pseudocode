/*
 * XREFs of KiOp_SLDTSTR @ 0x1401CBADC
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x1401419E4 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SLDTSTR(__int64 a1)
{
  unsigned __int16 v2; // si
  __int64 v3; // r14
  char v4; // al
  unsigned int v5; // ecx
  __int64 v6; // r8
  ULONG64 v7; // rdx
  char v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  if ( KiNPIEPEnabled && *(_BYTE *)(a1 + 73) == 1 )
  {
    if ( (*(_BYTE *)(a1 + 57) & 0x38) != 0 )
      v2 = 64;
    else
      v2 = 0;
    v3 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)v3 = -1073741819;
    if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v11, &v9, &v10) < 0 )
    {
      v6 = -1LL;
    }
    else
    {
      v4 = *(_BYTE *)(a1 + 40) & 0x40;
      if ( *(_BYTE *)(a1 + 50) )
        v5 = v4 != 0 ? 2 : 4;
      else
        v5 = v4 != 0 ? 2 : 8;
      if ( v9 == 1 )
      {
        v6 = v11;
        v7 = v11 + v5;
        if ( v7 > MmUserProbeAddress || v7 < v11 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      else
      {
        v6 = v11;
      }
      if ( !v10 || v5 == 2 )
      {
        *(_WORD *)v6 = v2;
      }
      else if ( v5 == 4 )
      {
        *(_DWORD *)v6 = v2;
      }
      else
      {
        *(_QWORD *)v6 = v2;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1);
      ++KiOpDescriptorTableStoreSkip;
      *(_BYTE *)(a1 + 88) = 1;
    }
    if ( !*(_BYTE *)(a1 + 88) )
    {
      *(_DWORD *)v3 = -1073741819;
      *(_QWORD *)(v3 + 32) = 1LL;
      *(_QWORD *)(v3 + 40) = v6;
      *(_BYTE *)(a1 + 89) = 1;
    }
  }
  return 0LL;
}
