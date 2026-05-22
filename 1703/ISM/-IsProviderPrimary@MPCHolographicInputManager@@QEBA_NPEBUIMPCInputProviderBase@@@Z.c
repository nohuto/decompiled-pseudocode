/*
 * XREFs of ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18004B57C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::IsProviderPrimary(
        MPCHolographicInputManager *this,
        const struct IMPCInputProviderBase *a2)
{
  const struct IMPCInputProviderBase **v2; // rdi
  const struct IMPCInputProviderBase **v4; // rsi
  const struct IMPCInputProviderBase *v5; // rbx

  v2 = (const struct IMPCInputProviderBase **)*((_QWORD *)this + 295);
  v4 = (const struct IMPCInputProviderBase **)*((_QWORD *)this + 296);
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    v5 = *v2;
    if ( *v2 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 8LL))(*v2);
    if ( v5 == a2 )
      break;
    if ( v5 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
    ++v2;
  }
  if ( v5 )
    (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
  return 1;
}
