/*
 * XREFs of ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAB54
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D13A0 (xxxSetForegroundCheckNoActivate.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A30 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8B60 (-IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall xxxProcessPointerPrimaryDown(const struct tagPOINTERINPUTFRAME *a1)
{
  unsigned int v1; // r10d
  unsigned int v2; // r9d
  __int64 v3; // r8
  unsigned int i; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)a1 + 6);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 9);
  for ( i = 1; v2 < v1; ++v2 )
  {
    if ( (*(_QWORD *)(v3 + 16) || IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v3))
      && (unsigned int)IsPointerInfoNodePrimaryDown((const struct tagPOINTERINFONODE *)v3) )
    {
      break;
    }
    v3 += 216LL;
  }
  if ( v2 == v1 )
    return 0LL;
  v6 = *(_QWORD *)(v3 + 80);
  if ( !v6 )
    return 0LL;
  v7 = ValidateHwnd(v6);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v9 + 392) != gpqForeground || v9 != gptiForeground )
  {
    if ( IsCompositionInputWindow((struct tagWND *)v7) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v8);
      if ( CompositionInputWindowUIOwner )
        v8 = (__int64)CompositionInputWindowUIOwner;
    }
    if ( !gpqForeground
      || gpqForeground != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 392LL)
      || (*(_DWORD *)(gpqForeground + 332LL) & 0x2000000) == 0
      || (v11 = *(_QWORD *)(gpqForeground + 72LL)) == 0
      || gptiForeground != *(_QWORD *)(v11 + 16) )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v14;
      v14[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      i = xxxSetForegroundCheckNoActivate((struct tagWND *)v8);
      ThreadUnlock1(v13, v12);
    }
  }
  return i;
}
