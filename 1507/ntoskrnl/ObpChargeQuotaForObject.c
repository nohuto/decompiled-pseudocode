/*
 * XREFs of ObpChargeQuotaForObject @ 0x1404CF634
 * Callers:
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x1404CF74C (PsChargeSharedPoolQuota.c)
 *     SeComputeQuotaInformationSize @ 0x1404CF7D0 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 */

__int64 __fastcall ObpChargeQuotaForObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int *v5; // rbx
  char v6; // al
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    v5 = (unsigned int *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF]);
  else
    v5 = 0LL;
  v6 = *(_BYTE *)(a1 + 27);
  if ( (v6 & 1) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 27) = v6 & 0xFE;
  if ( v5 )
  {
    v7 = *v5;
    v8 = v5[1];
    if ( a3 || (v9 = *(_QWORD *)(a1 + 40)) != 0 && (a3 = v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      result = SeComputeQuotaInformationSize(a3, &v16);
      if ( (int)result < 0 )
        return result;
      v11 = v16;
      if ( v16 )
      {
        v12 = PsChargeSharedPoolQuota(a2, v16, 0LL);
        *((_QWORD *)v5 + 2) = v12;
        if ( !v12 )
          return 3221225540LL;
      }
      v5[2] = v11;
    }
  }
  else
  {
    v14 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
    v7 = *(_DWORD *)(v14 + 104);
    v8 = *(_DWORD *)(v14 + 108);
  }
  v13 = PsChargeSharedPoolQuota(a2, v7, v8);
  *(_QWORD *)(a1 + 32) = v13;
  if ( !v13 )
  {
    if ( v5 )
    {
      v15 = (void *)*((_QWORD *)v5 + 2);
      if ( v15 )
        PsReturnSharedPoolQuota(v15);
    }
    return 3221225540LL;
  }
  return 0LL;
}
