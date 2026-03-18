/*
 * XREFs of ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C00477A8
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     Template_pqxx @ 0x1C001FB3C (Template_pqxx.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0046E5C (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a3)
{
  struct _RTL_BALANCED_NODE *v3; // rsi
  char v4; // di
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  struct _RTL_BALANCED_NODE *v10; // rax
  char v11; // [rsp+70h] [rbp+18h]

  v11 = (char)a3.0;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadRangeAvl((char *)a2, v3) < 0 )
      {
        v10 = v3->Children[0];
        if ( !v3->Children[0] )
          break;
      }
      else
      {
        v10 = v3->Children[1];
        if ( !v10 )
        {
          v4 = 1;
          break;
        }
      }
      v3 = v10;
    }
  }
  *(_BYTE *)&a3.0 = v4;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlAvlInsertNodeEx)((char *)this + 32, v3, a3.0, a2);
  if ( (v11 & 0x10) != 0 )
    *((_DWORD *)a2 + 18) |= 0x800u;
  if ( (v11 & 8) != 0 || (v11 & 4) != 0 )
    v9 = *((_DWORD *)a2 + 18) & 0xFFFFFFF0 | 2;
  else
    v9 = *((_DWORD *)a2 + 18) & 0xFFFFFFF0 | 3;
  *((_DWORD *)a2 + 18) = v9;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    Template_pqxx(
      v7,
      &CreateGpuVirtualAddressRange,
      v8,
      this,
      *((_DWORD *)a2 + 18),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
}
