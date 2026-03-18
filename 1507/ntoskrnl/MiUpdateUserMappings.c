/*
 * XREFs of MiUpdateUserMappings @ 0x1403F0374
 * Callers:
 *     MmUpdateHiberMappings @ 0x1403F02FC (MmUpdateHiberMappings.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiMakeQuasiPte @ 0x140195D50 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x140195D60 (MiRevertQuasiPte.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 MiUpdateUserMappings()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // r9d

  v0 = (unsigned __int64)MmHighestUserAddress;
  v1 = 0LL;
  result = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --result;
  }
  while ( result );
  while ( v1 <= v0 )
  {
    v3 = *(_QWORD *)v1;
    result = MiPteInShadowRange(v1);
    if ( (_DWORD)result )
    {
      result = MiReadPteShadow(v1, v3);
      v3 = result;
    }
    if ( (v3 & 1) != 0 )
    {
      result = MiMakeQuasiPte(v3);
    }
    else
    {
      if ( (v3 & 0x400) == 0 )
        goto LABEL_12;
      result = MiRevertQuasiPte(v3);
    }
    *(_QWORD *)v1 = result;
    if ( v4 )
      result = (__int64)MiWritePteShadow(v1, result);
LABEL_12:
    v1 += 8LL;
  }
  return result;
}
