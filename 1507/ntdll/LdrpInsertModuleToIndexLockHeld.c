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

__int64 __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v4; // eax
  _QWORD *v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v6 = *(unsigned int *)(a2 + 8);
  v2 = 0;
  *(_DWORD *)(a1 + 128) = v6;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  v5 = (_QWORD *)LdrpMappingInfoIndex;
  v12 = v6;
  LOBYTE(v6) = 0;
  v13 = v4;
  if ( LdrpMappingInfoIndex )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleMappingInfo(&v12, v5, v6) < 0 )
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
        {
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, v5, v6, a1 + 224);
  v9 = (_QWORD *)LdrpModuleBaseAddressIndex;
  if ( LdrpModuleBaseAddressIndex )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleBaseAddresses(*(_QWORD *)(a1 + 48), (__int64)v9) >= 0 )
      {
        v10 = (_QWORD *)v9[1];
        if ( !v10 )
        {
          v2 = 1;
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
  LOBYTE(v8) = v2;
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v9, v8, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
