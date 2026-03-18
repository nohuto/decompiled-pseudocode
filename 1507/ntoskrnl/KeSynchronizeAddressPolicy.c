/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x1401FF8D4
 * Callers:
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 * Callees:
 *     KiIpiSendPacket @ 0x140129790 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14020A5D0 (KiSynchronizeAddressPolicyTarget.c)
 */

__int64 __fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // ax
  unsigned int v5; // r9d
  int v6; // edi
  __int64 v7; // r11
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned __int16 v12[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v13; // [rsp+34h] [rbp-C4h]
  _QWORD v14[21]; // [rsp+38h] [rbp-C0h] BYREF

  if ( *(_BYTE *)(a1 + 640) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = *(_WORD *)(a1 + 272);
    v4 = *(_WORD *)(a1 + 274);
    v12[0] = v3;
    v12[1] = v4;
    v13 = 0;
    if ( v3 )
    {
      memmove(v14, (const void *)(a1 + 280), 8LL * v3);
      v3 = v12[0];
    }
    v5 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
    if ( v3 > v5 >> 6 )
    {
      v14[v5 >> 6] &= ~(1LL << (v5 & 0x3F));
      v3 = v12[0];
    }
    v6 = 0;
    if ( v3 )
    {
      v7 = v3;
      v8 = v14;
      do
      {
        v9 = *v8;
        v10 = *v8++;
        v6 += (unsigned int)((0x101010101010101LL
                            * ((((v9 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v9 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                              + ((((v9 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v9 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v7;
      }
      while ( v7 );
    }
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v6 )
    {
      KiIpiSendPacket(0, v12, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      while ( CurrentPrcb->PacketBarrier )
        _mm_pause();
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
