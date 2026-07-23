/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1401BEA00
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401BE204 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401BE910 (HvlpFlushPasidAddressSpace.c)
 *     HvlpCopyFlushVaList @ 0x1401C14B4 (HvlpCopyFlushVaList.c)
 */

char __fastcall HvlpSlowFlushPasidAddressList(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h]
  PHYSICAL_ADDRESS v11[6]; // [rsp+28h] [rbp-30h] BYREF

  v8 = HvlpAcquireHypercallPage(v11, 5, 0LL, 0LL);
  if ( !v8 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)(v8 + 4) = a1;
  *(_DWORD *)v8 = a2;
  HvlpCopyFlushVaList(a3, a4, 0LL, v8 + 16);
  LODWORD(v10) = 161;
  HIDWORD(v10) = a3 & 0xFFF;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(v10, (PHYSICAL_ADDRESS)v11[3].QuadPart, 0LL);
  return HvlpReleaseHypercallPage((__int64)v11);
}
