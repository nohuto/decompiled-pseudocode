/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8F04
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D9060 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned __int8 *v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  _DWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, (void **)&v11) )
    {
      v4 = v11;
      *v11 = 36;
      v5 = v4 + 1;
      memset(v4 + 1, 0, 0x20uLL);
      *v5 = 179;
      v5[1] = *((_DWORD *)this + 6);
      v5[3] = *((_DWORD *)this + 14);
      v5[4] = *((_DWORD *)this + 15);
      v5[2] = *((unsigned __int8 *)this + 52);
      v6 = (unsigned __int8 *)*((_QWORD *)this + 8);
      if ( !v6 )
      {
        *(_QWORD *)(v5 + 5) = 0LL;
        v5[7] = 0;
LABEL_10:
        *((_DWORD *)this + 4) |= 0x80u;
        return v3;
      }
      *((_WORD *)v5 + 14) = *v6;
      *((_WORD *)v5 + 15) = *(_WORD *)(*((_QWORD *)this + 8) + 4LL);
      v7 = *((_QWORD *)this + 8);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 == 1 )
      {
        v9 = *(unsigned __int8 *)(v7 + 8);
LABEL_9:
        *(_QWORD *)(v5 + 5) = v9;
        goto LABEL_10;
      }
      if ( v8 == 2 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        goto LABEL_9;
      }
    }
    return 0;
  }
  return v3;
}
