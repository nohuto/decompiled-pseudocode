/*
 * XREFs of ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D7E80
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D7D4C (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEAUDwmIntera.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00D7F64 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchpadConfiguration(
        __int64 a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v5; // eax
  unsigned int v7; // ecx
  int updated; // esi
  unsigned __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  *a4 = 0;
  v5 = a2[1];
  v7 = a2[2];
  if ( v5 <= v7 )
  {
    v10 = __PAIR64__(v7, v5);
    v11 = a2[3];
    updated = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
                v7,
                a3,
                (unsigned int)&v10,
                (int)a1 + 40,
                (__int64)a4);
    if ( updated >= 0 && *a4 )
    {
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 12) |= 8u;
    }
  }
  else
  {
    updated = -1073741811;
  }
  Win32FreePool();
  return (unsigned int)updated;
}
