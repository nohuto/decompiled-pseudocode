/*
 * XREFs of PnpiBiosExtendedIrqToIoDescriptor @ 0x1C007E024
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C007030C (PnpiUpdateResourceList.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 */

__int64 __fastcall PnpiBiosExtendedIrqToIoDescriptor(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax
  int v10; // r14d
  char v11; // r15
  bool v12; // si
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  _BYTE *v16; // rcx
  char v17; // al
  _BYTE *v18; // [rsp+58h] [rbp+10h] BYREF

  if ( a3 >= *(_BYTE *)(a2 + 4) )
    return 3221225485LL;
  v10 = *(_DWORD *)(a2 + 4LL * a3 + 5);
  if ( !v10 )
    return 0LL;
  v11 = 0;
  v12 = (*(_BYTE *)(a2 + 3) & 2) != 0;
  if ( a1 )
  {
    result = PnpiUpdateForceActiveBothInterrupts();
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD *)(a1 + 648);
    v14 = 0;
    if ( v13 )
    {
      while ( v10 != *(_DWORD *)(*(_QWORD *)(a1 + 640) + 4LL * v14) )
      {
        if ( ++v14 >= v13 )
          goto LABEL_13;
      }
      if ( !v12 )
        return 3221225485LL;
      v11 = 1;
    }
  }
LABEL_13:
  result = PnpiUpdateResourceList(a4 + 8LL * a5, &v18);
  v15 = result;
  if ( (int)result >= 0 )
  {
    v16 = v18;
    *v18 = a3 != 0 ? 8 : 0;
    v16[1] = 2;
    *((_DWORD *)v16 + 2) = v10;
    *((_DWORD *)v16 + 3) = v10;
    *((_WORD *)v16 + 2) = 0;
    if ( v12 )
    {
      *((_WORD *)v16 + 2) = 1;
      if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
      {
        v16[2] = 1;
        goto LABEL_20;
      }
      v17 = (v11 != 0) + 2;
    }
    else
    {
      *((_WORD *)v16 + 2) = 0;
      v17 = (unsigned __int8)(*(_BYTE *)(a2 + 3) & 8 | 4) >> 2;
    }
    v16[2] = v17;
LABEL_20:
    if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
      *((_WORD *)v16 + 2) |= 0x20u;
    *((_DWORD *)v16 + 4) = (*(unsigned __int8 *)(a2 + 3) >> 1) & 2;
    if ( v11 )
      *((_DWORD *)v16 + 4) |= 8u;
    return v15;
  }
  return result;
}
