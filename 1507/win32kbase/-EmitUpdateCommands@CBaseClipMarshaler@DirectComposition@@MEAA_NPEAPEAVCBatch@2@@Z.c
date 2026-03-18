/*
 * XREFs of ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028780
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00269A0 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

char __fastcall DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rdi
  double *v7; // rdi
  float v8; // xmm0_4
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v4 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v9) )
  {
    v5 = (char *)v9;
    *(_DWORD *)v9 = 60;
    v6 = v5 + 4;
    memset(v5 + 4, 0, 0x38uLL);
    *(_DWORD *)v6 = 91;
    *((_DWORD *)v6 + 1) = *((_DWORD *)this + 6);
    if ( *((_QWORD *)this + 5) )
    {
      v7 = (double *)(v6 + 8);
      do
      {
        v8 = *(float *)(*((_QWORD *)this + 5) + v4);
        v4 += 4LL;
        *v7++ = v8;
      }
      while ( v4 < 24 );
    }
    else
    {
      *((_QWORD *)v6 + 2) = 0LL;
      *((_QWORD *)v6 + 1) = 0x3FF0000000000000LL;
      *((_QWORD *)v6 + 4) = 0x3FF0000000000000LL;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 5) = 0LL;
      *((_QWORD *)v6 + 6) = 0LL;
    }
    return 1;
  }
  return 0;
}
