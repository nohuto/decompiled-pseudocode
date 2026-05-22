/*
 * XREFs of std::_Func_impl__lambda_b14b63c0582e0f697813a04f12ff944e__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x18004E010
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800504D4 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl__lambda_b14b63c0582e0f697813a04f12ff944e__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 2184LL);
  if ( *(_BYTE *)(v2 + 64) )
  {
    if ( *(_BYTE *)(v2 + 56) && *(_BYTE *)(v2 + 65) )
    {
      if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2) & 2) != 0 )
      {
        MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v2, 0, 1, 0);
        *(_DWORD *)(v2 + 32) = 0;
        *(_OWORD *)v2 = 0uLL;
        *(_OWORD *)(v2 + 16) = 0u;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 32) = 0;
      *(_OWORD *)v2 = 0uLL;
      *(_OWORD *)(v2 + 16) = 0u;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v2, 1, 1, 0);
    }
  }
}
