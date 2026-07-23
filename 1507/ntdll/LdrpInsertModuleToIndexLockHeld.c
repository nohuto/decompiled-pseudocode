/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x180016F10
 * Callers:
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpInsertModuleToIndex @ 0x1800731A4 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     LdrpCompareModuleBaseAddresses @ 0x1800164FC (LdrpCompareModuleBaseAddresses.c)
 *     LdrpCompareModuleMappingInfo @ 0x180016FFC (LdrpCompareModuleMappingInfo.c)
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  BOOLEAN v2; // bl
  int v4; // eax
  _RTL_BALANCED_NODE *Root; // rdi
  __int64 v6; // r8
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rdi
  _RTL_BALANCED_NODE *v9; // rax
  BOOLEAN result; // al
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v6 = *(unsigned int *)(a2 + 8);
  v2 = 0;
  *(_DWORD *)(a1 + 128) = v6;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  Root = LdrpMappingInfoIndex.Root;
  v11 = v6;
  LOBYTE(v6) = 0;
  v12 = v4;
  if ( LdrpMappingInfoIndex.Root )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleMappingInfo(&v11, Root, v6) < 0 )
      {
        v7 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v7 = Root->Children[1];
        if ( !v7 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      Root = v7;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, Root, v6, (PRTL_BALANCED_NODE)(a1 + 224));
  v8 = LdrpModuleBaseAddressIndex.Root;
  if ( LdrpModuleBaseAddressIndex.Root )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleBaseAddresses(*(_QWORD *)(a1 + 48), (__int64)v8) >= 0 )
      {
        v9 = v8->Children[1];
        if ( !v9 )
        {
          v2 = 1;
          break;
        }
      }
      else
      {
        v9 = v8->Children[0];
        if ( !v8->Children[0] )
          break;
      }
      v8 = v9;
    }
  }
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v8, v2, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
