/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x14043E724
 * Callers:
 *     PiDqQueryEnumObject @ 0x14043E924 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     FilterEval @ 0x14043E8D8 (FilterEval.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(_QWORD *a1, void *a2, bool *a3)
{
  __int64 v6; // rax
  char *v7; // rbx
  PVOID PoolWithTag; // rsi
  int v9; // edi
  HANDLE Handle[6]; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  memset(Handle, 0, sizeof(Handle));
  v6 = a1[3];
  v7 = 0LL;
  P = 0LL;
  *a3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * *(unsigned int *)(v6 + 80), 0x58706E50u);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 48LL * *(unsigned int *)(a1[3] + 80LL));
    LODWORD(Handle[1]) = *(_DWORD *)(a1[3] + 80LL);
    Handle[2] = PoolWithTag;
    Handle[4] = a2;
    Handle[5] = a1;
    PiPnpRtlBeginOperation((__int64 **)&P);
    v9 = FilterEval(
           (unsigned int)&PiDqPropertyCallback,
           (unsigned int)Handle,
           *(_DWORD *)(a1[3] + 80LL),
           *(_QWORD *)(a1[3] + 88LL),
           (__int64)&v12);
    if ( v9 >= 0 )
      *a3 = v12 != 0;
    PnpFreeDevPropertyArray(LODWORD(Handle[3]), PoolWithTag, 1483763280LL);
    v7 = (char *)P;
  }
  else
  {
    v9 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v9;
}
