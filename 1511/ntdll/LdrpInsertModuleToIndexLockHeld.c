/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x180031CD4
 * Callers:
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpInsertModuleToIndex @ 0x18007EDC4 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180031350 (RtlRbInsertNodeEx.c)
 *     LdrpCompareModuleMappingInfo @ 0x180031C18 (LdrpCompareModuleMappingInfo.c)
 *     LdrpCompareModuleBaseAddresses @ 0x180032D38 (LdrpCompareModuleBaseAddresses.c)
 */

BOOLEAN __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  BOOLEAN v3; // bl
  int v5; // eax
  _RTL_BALANCED_NODE *Root; // rdi
  BOOLEAN v7; // r8
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rdi
  _RTL_BALANCED_NODE *v10; // rax
  BOOLEAN result; // al
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v3 = 0;
  *(_DWORD *)(a1 + 128) = v2;
  v5 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v5;
  Root = LdrpMappingInfoIndex.Root;
  v12 = v2;
  v7 = 0;
  v13 = v5;
  if ( LdrpMappingInfoIndex.Root )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleMappingInfo(&v12, (__int64)Root) < 0 )
      {
        v8 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          v7 = 0;
          break;
        }
      }
      else
      {
        v8 = Root->Children[1];
        if ( !v8 )
        {
          v7 = 1;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = LdrpModuleBaseAddressIndex.Root;
  if ( LdrpModuleBaseAddressIndex.Root )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleBaseAddresses(*(_QWORD *)(a1 + 48), v9) >= 0 )
      {
        v10 = v9->Children[1];
        if ( !v10 )
        {
          v3 = 1;
          break;
        }
      }
      else
      {
        v10 = v9->Children[0];
        if ( !v9->Children[0] )
          break;
      }
      v9 = v10;
    }
  }
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v9, v3, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
