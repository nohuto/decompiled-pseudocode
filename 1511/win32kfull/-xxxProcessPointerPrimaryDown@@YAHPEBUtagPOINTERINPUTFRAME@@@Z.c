/*
 * XREFs of ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAFF4
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D3018 (xxxSetForegroundCheckNoActivate.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8EE0 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F9010 (-IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall xxxProcessPointerPrimaryDown(const struct tagPOINTERINPUTFRAME *a1)
{
  unsigned int v1; // r10d
  unsigned int v2; // r9d
  __int64 v3; // r8
  unsigned int i; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // r11
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
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v8 + 384) != gpqForeground || v8 != gptiForeground )
  {
    if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v7) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v9);
      if ( CompositionInputWindowUIOwner )
        v9 = CompositionInputWindowUIOwner;
    }
    if ( !gpqForeground
      || gpqForeground != *(_QWORD *)(*((_QWORD *)v9 + 2) + 384LL)
      || (*(_DWORD *)(gpqForeground + 332LL) & 0x2000000) == 0
      || (v11 = *(_QWORD *)(gpqForeground + 72LL)) == 0
      || gptiForeground != *(_QWORD *)(v11 + 16) )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v14[1] = v9;
      ++*((_DWORD *)v9 + 2);
      i = xxxSetForegroundCheckNoActivate(v9);
      ThreadUnlock1(v13, v12);
    }
  }
  return i;
}
