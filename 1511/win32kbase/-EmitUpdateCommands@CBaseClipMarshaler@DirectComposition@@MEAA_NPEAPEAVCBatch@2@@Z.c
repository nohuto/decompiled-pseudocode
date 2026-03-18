/*
 * XREFs of ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0015B50
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014680 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017DB8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

bool __fastcall DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rbx
  double *v6; // rdi
  double *v7; // rdi
  float v8; // xmm0_4
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v9) )
        return v4;
      v6 = (double *)((char *)v9 + 4);
      *(_DWORD *)v9 = 60;
      memset(v6, 0, 0x38uLL);
      *(_DWORD *)v6 = 98;
      *((_DWORD *)v6 + 1) = *((_DWORD *)this + 6);
      if ( *((_QWORD *)this + 7) )
      {
        v7 = v6 + 1;
        do
        {
          v8 = *(float *)(*((_QWORD *)this + 7) + v4);
          v4 += 4LL;
          *v7++ = v8;
        }
        while ( v4 < 24 );
      }
      else
      {
        v6[2] = 0.0;
        v6[1] = 1.0;
        v6[4] = 1.0;
        v6[3] = 0.0;
        v6[5] = 0.0;
        v6[6] = 0.0;
      }
    }
    LOBYTE(v4) = 1;
  }
  return v4;
}
