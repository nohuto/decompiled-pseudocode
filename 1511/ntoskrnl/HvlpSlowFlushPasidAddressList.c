/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1401B21D0
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401B19D8 (HvlSvmFlushPasid.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401B20E0 (HvlpFlushPasidAddressSpace.c)
 */

char __fastcall HvlpSlowFlushPasidAddressList(unsigned int a1, unsigned int a2, unsigned int a3, const void *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h]
  PHYSICAL_ADDRESS v11[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = a3;
  v8 = HvlpAcquireHypercallPage(v11, 5, 0LL, 0LL);
  if ( !v8 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)(v8 + 4) = a1;
  *(_DWORD *)v8 = a2;
  memmove((void *)(v8 + 16), a4, 8 * v5);
  LODWORD(v10) = 161;
  HIDWORD(v10) = v5 & 0xFFF;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(v10, (PHYSICAL_ADDRESS)v11[3].QuadPart, 0LL);
  return HvlpReleaseHypercallPage((__int64)v11);
}
