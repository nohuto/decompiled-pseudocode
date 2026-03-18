/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003C910
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003CCA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, (void **)&v12) )
      return 0;
    v4 = v12;
    *v12 = 36;
    v5 = v4 + 1;
    memset(v4 + 1, 0, 0x20uLL);
    *v5 = 204;
    v5[1] = *((_DWORD *)this + 6);
    if ( (*((_BYTE *)this + 84) & 1) != 0 && (v6 = *((_QWORD *)this + 7)) != 0 && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
      v5[2] = *(_DWORD *)(v7 + 24);
    else
      v5[2] = 0;
    v5[3] = *((_DWORD *)this + 16);
    v5[7] = *((_DWORD *)this + 12);
    v8 = *((_QWORD *)this + 9);
    if ( !v8 )
    {
      v5[6] = 0;
LABEL_9:
      *((_QWORD *)v5 + 2) = 0LL;
LABEL_10:
      *((_DWORD *)this + 4) |= 0x40u;
      return v3;
    }
    *((_WORD *)v5 + 12) = *(unsigned __int8 *)(v8 + 4);
    *((_WORD *)v5 + 13) = **((_WORD **)this + 9);
    v10 = *((_QWORD *)this + 9);
    if ( *(_DWORD *)v10 == 1 )
    {
      v11 = *(unsigned __int8 *)(v10 + 8);
    }
    else
    {
      if ( *(_DWORD *)v10 != 2 )
        goto LABEL_9;
      v11 = *(_QWORD *)(v10 + 8);
    }
    *((_QWORD *)v5 + 2) = v11;
    goto LABEL_10;
  }
  return v3;
}
