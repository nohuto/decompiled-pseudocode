/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004BD30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004B630 (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004B6B8 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004B898 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004C4C0 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bp
  unsigned int v6; // esi
  char *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  char *v10; // r8
  __int64 v11; // rcx
  char *v12; // rcx
  __int64 v13; // rax
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    while ( *((_DWORD *)this + 52) )
    {
      v6 = *((_DWORD *)this + 52) - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
        return 0;
      v7 = (char *)v14;
      *(_DWORD *)v14 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 200;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v7 + 3) = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL * v6);
      if ( v6 < --*((_DWORD *)this + 52) )
      {
        do
        {
          v8 = v6++;
          *(_DWORD *)(*((_QWORD *)this + 25) + 4 * v8) = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL * v6);
        }
        while ( v6 < *((_DWORD *)this + 52) );
      }
    }
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
    return 0;
  while ( *((_DWORD *)this + 56) )
  {
    v9 = *((_DWORD *)this + 56) - 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v14) )
      return 0;
    v10 = (char *)v14;
    *(_DWORD *)v14 = 28;
    *(_QWORD *)(v10 + 4) = 0LL;
    *(_QWORD *)(v10 + 12) = 0LL;
    *(_QWORD *)(v10 + 20) = 0LL;
    *((_DWORD *)v10 + 1) = 199;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v10 + 3) = **(_DWORD **)(*((_QWORD *)this + 27) + 8LL * v9);
    *((_DWORD *)v10 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v9) + 4LL);
    *(_QWORD *)(v10 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v9) + 8LL);
    Win32FreePool();
    if ( v9 < --*((_DWORD *)this + 56) )
    {
      do
      {
        v11 = v9++;
        *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v11) = *(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v9);
      }
      while ( v9 < *((_DWORD *)this + 56) );
    }
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
      return 0;
    v12 = (char *)v14;
    *(_DWORD *)v14 = 16;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 3) = 0;
    *((_DWORD *)v12 + 1) = 197;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 6);
    v13 = *((_QWORD *)this + 29);
    if ( v13 )
      LODWORD(v13) = *(_DWORD *)(v13 + 24);
    *((_DWORD *)v12 + 3) = v13;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 40),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 112),
          a2) )
  {
    return 0;
  }
  return v4;
}
