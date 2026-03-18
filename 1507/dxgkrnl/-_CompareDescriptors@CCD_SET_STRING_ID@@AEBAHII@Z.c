/*
 * XREFs of ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C017E194
 * Callers:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0066FC8 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 * Callees:
 *     memcmp @ 0x1C0010840 (memcmp.c)
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C0066F9C (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 */

int __fastcall CCD_SET_STRING_ID::_CompareDescriptors(CCD_SET_STRING_ID *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r8d
  unsigned __int16 DescriptorLength; // ax
  unsigned __int16 v8; // r11

  v3 = a3;
  v5 = a2;
  CCD_SET_STRING_ID::_GetDescriptorLength(this, a2);
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(this, v6);
  if ( v8 < DescriptorLength )
    return -1;
  if ( v8 <= DescriptorLength )
    return memcmp(
             (const void *)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8 * v5)),
             (const void *)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8 * v3)),
             v8);
  return 1;
}
