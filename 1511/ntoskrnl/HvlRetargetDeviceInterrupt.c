/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x1401B0F5C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1401AE8CC (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v8; // r14
  unsigned int v9; // r15d
  _QWORD *v10; // rdi
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  PHYSICAL_ADDRESS v16; // r8
  int v17; // ecx
  unsigned __int16 v18; // ax
  unsigned int v19; // ebx
  __int64 v22; // [rsp+28h] [rbp-E0h]
  PHYSICAL_ADDRESS v23[4]; // [rsp+30h] [rbp-D8h] BYREF
  PHYSICAL_ADDRESS v24[5]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v26[21]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v27[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v28[256]; // [rsp+148h] [rbp+40h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = (_QWORD *)HvlpAcquireHypercallPage(v23, 1, (__int64)v28, 128LL);
  memset(v10, 0, 0x38uLL);
  *(_OWORD *)(v10 + 5) = *a3;
  v25 = 1310721LL;
  memset(v26, 0, 0xA0uLL);
  v11 = *((_WORD *)a4 + 4);
  v12 = *a4;
  if ( v11 )
    LOWORD(v25) = v11 + 1;
  v26[v11] |= v12;
  v13 = HvlpAffinityToHvProcessorSet((__int64)&v25, v10 + 6, (v23[0].LowPart & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)v23);
    v10 = (_QWORD *)HvlpAcquireHypercallPage(v23, 1, 0LL, 0LL);
    memset(v10, 0, 0x38uLL);
    *(_OWORD *)(v10 + 5) = *a3;
    v13 = HvlpAffinityToHvProcessorSet((__int64)&v25, v10 + 6, 0xFC0u);
  }
  v14 = v13 + 64;
  if ( v14 > 0x38 )
    v9 = v14 - 56;
  *((_DWORD *)v10 + 11) |= 2u;
  *v10 = -1LL;
  v10[1] = a1;
  *((_OWORD *)v10 + 1) = *a2;
  if ( a5 )
  {
    v15 = HvlpAcquireHypercallPage(v24, 2, (__int64)v27, 16LL);
    v16 = v24[3];
    v17 = 127;
    v8 = (_OWORD *)v15;
  }
  else
  {
    v16.QuadPart = 0LL;
    v17 = 126;
  }
  HIDWORD(v22) = v17 >> 31;
  LODWORD(v22) = (v17 ^ ((v9 + 7) << 14)) & 0x3FE0000 ^ v17;
  v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
          v22,
          (PHYSICAL_ADDRESS)v23[3].QuadPart,
          (PHYSICAL_ADDRESS)v16.QuadPart);
  if ( v18 )
  {
    v19 = HvlpHvToNtStatus(v18);
  }
  else
  {
    v19 = 0;
    if ( a5 )
      *a5 = *v8;
  }
  HvlpReleaseHypercallPage((__int64)v23);
  if ( a5 )
    HvlpReleaseHypercallPage((__int64)v24);
  return v19;
}
