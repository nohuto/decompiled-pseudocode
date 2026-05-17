/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x180031810
 * Callers:
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpInsertModuleToIndex @ 0x1800828D8 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC20 (RtlRbInsertNodeEx.c)
 *     LdrpCompareModuleMappingInfo @ 0x180031754 (LdrpCompareModuleMappingInfo.c)
 *     LdrpCompareModuleBaseAddresses @ 0x180032218 (LdrpCompareModuleBaseAddresses.c)
 */

void __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  bool v3; // bl
  int v5; // eax
  _QWORD *v6; // rdi
  bool v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v3 = 0;
  *(_DWORD *)(a1 + 128) = v2;
  v5 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v5;
  v6 = (_QWORD *)LdrpMappingInfoIndex;
  v11 = v2;
  v7 = 0;
  v12 = v5;
  if ( LdrpMappingInfoIndex )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleMappingInfo(&v11, (__int64)v6) < 0 )
      {
        v8 = (_QWORD *)*v6;
        if ( !*v6 )
        {
          v7 = 0;
          break;
        }
      }
      else
      {
        v8 = (_QWORD *)v6[1];
        if ( !v8 )
        {
          v7 = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&LdrpMappingInfoIndex, (unsigned __int64)v6, v7, a1 + 224);
  v9 = (_QWORD *)LdrpModuleBaseAddressIndex;
  if ( LdrpModuleBaseAddressIndex )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleBaseAddresses(*(_QWORD *)(a1 + 48), v9) >= 0 )
      {
        v10 = (_QWORD *)v9[1];
        if ( !v10 )
        {
          v3 = 1;
          break;
        }
      }
      else
      {
        v10 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
      }
      v9 = v10;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&LdrpModuleBaseAddressIndex, (unsigned __int64)v9, v3, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
}
