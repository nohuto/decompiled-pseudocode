/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C003DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C003DCDC (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003E808 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CRegion **a2, bool *a3)
{
  unsigned int v6; // ebp
  int v7; // eax
  const struct CFlipToken *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char v12; // al

  v6 = -1073741811;
  v7 = (*((__int64 (__fastcall **)(const struct CRegion **))*a2 + 8))(a2);
  v8 = 0LL;
  *a3 = 0;
  if ( v7 == 1 )
    v8 = (const struct CFlipToken *)a2;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 + 25);
    v6 = 0;
    if ( v9 >= *((_DWORD *)this + 72) )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 73) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 120LL))(v8);
    if ( *((_DWORD *)this + 96) != v9 )
    {
      *((_DWORD *)this + 96) = v9;
      *a3 = 1;
    }
    if ( CFlipExBuffer::UpdateAttributes(this, v8) )
      *a3 = 1;
    v10 = *((_DWORD *)this + 97);
    if ( v10 != -1 )
    {
      if ( v10 <= 1 || v10 > 3 )
      {
LABEL_11:
        CCompositionBuffer::NotifyDirty(this, a2[10], (const struct ScrollOptimization *)((char *)a2 + 52));
        return v6;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 144LL))(v8) )
      {
        v12 = *((_BYTE *)this + 396);
        *((_DWORD *)this + 97) = 3;
LABEL_17:
        if ( v12 )
          *a3 = 1;
        goto LABEL_11;
      }
      *((_DWORD *)this + 97) = -1;
    }
    v12 = 1;
    goto LABEL_17;
  }
  return v6;
}
