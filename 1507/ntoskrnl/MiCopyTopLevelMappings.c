/*
 * XREFs of MiCopyTopLevelMappings @ 0x14006AE80
 * Callers:
 *     MiUpdateSystemPdes @ 0x140210604 (MiUpdateSystemPdes.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiShadowTopLevelPxes @ 0x140225870 (MiShadowTopLevelPxes.c)
 *     MiGetTopPteAddress @ 0x140225B6C (MiGetTopPteAddress.c)
 */

__int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rax
  __int64 v4; // rdx
  _OWORD *v6; // r8
  __int128 v7; // xmm1
  __int64 TopPteAddress; // rax
  __int64 result; // rax

  v3 = (_OWORD *)(a2 + 2048);
  v4 = 14LL;
  v6 = (_OWORD *)0xFFFFF6FB7DBED800LL;
  do
  {
    *v3 = *v6;
    v3[1] = v6[1];
    v3[2] = v6[2];
    v3[3] = v6[3];
    v3[4] = v6[4];
    v3[5] = v6[5];
    v3[6] = v6[6];
    v3 += 8;
    v7 = v6[7];
    v6 += 8;
    *(v3 - 1) = v7;
    --v4;
  }
  while ( v4 );
  *v3 = *v6;
  v3[1] = v6[1];
  v3[2] = v6[2];
  v3[3] = v6[3];
  v3[4] = v6[4];
  v3[5] = v6[5];
  *(_OWORD *)(a2 + 3944) = MEMORY[0xFFFFF6FB7DBEDF68];
  *(_OWORD *)(a2 + 3960) = MEMORY[0xFFFFF6FB7DBEDF78];
  *(_OWORD *)(a2 + 3976) = MEMORY[0xFFFFF6FB7DBEDF88];
  *(_OWORD *)(a2 + 3992) = MEMORY[0xFFFFF6FB7DBEDF98];
  *(_OWORD *)(a2 + 4008) = MEMORY[0xFFFFF6FB7DBEDFA8];
  *(_OWORD *)(a2 + 4024) = MEMORY[0xFFFFF6FB7DBEDFB8];
  *(_OWORD *)(a2 + 4040) = MEMORY[0xFFFFF6FB7DBEDFC8];
  *(_OWORD *)(a2 + 4056) = MEMORY[0xFFFFF6FB7DBEDFD8];
  *(_OWORD *)(a2 + 4072) = MEMORY[0xFFFFF6FB7DBEDFE8];
  *(_QWORD *)(a2 + 4088) = MEMORY[0xFFFFF6FB7DBEDFF8];
  TopPteAddress = MiGetTopPteAddress(0LL);
  MiShadowTopLevelPxes(a1, TopPteAddress + 2048, 256LL);
  result = *(_QWORD *)(a1 + 1024);
  if ( result )
  {
    result = *(_QWORD *)(result + 7680);
    *(_QWORD *)(a2 + 3984) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 3984) = 0LL;
  }
  return result;
}
