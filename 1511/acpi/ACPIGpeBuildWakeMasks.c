/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C00153A4
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C00153A4 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C0022C00 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008794 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00153A4 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListStartEnum @ 0x1C00154B0 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C0015510 (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 */

void __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+50h] [rbp-10h]

  v12 = 0;
  v7 = a1 + 744;
  v11 = 760LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = ACPIExtListStartEnum(&v7); ; i = ACPIExtListEnumNext(&v7) )
  {
    v2 = i;
    if ( v10 + v11 == v7 )
      break;
    if ( v12 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v10);
      KeReleaseSpinLock(SpinLock[1], NewIrql);
    }
    ACPIGpeBuildWakeMasks(v2);
    if ( (*(_DWORD *)v2 & 0x10000LL) != 0 && (*(_QWORD *)(v2 + 904) & 0x500000000LL) == 0 )
    {
      v5 = (unsigned int)ACPIGpeIndexToGpeRegister(*(unsigned int *)(v2 + 448), v3, v4);
      v6 = 1 << (*(unsigned __int8 *)(v2 + 448) % 8);
      if ( ((unsigned __int8)v6 & *((_BYTE *)GpeEnable + v5)) != 0 )
      {
        if ( (*(_QWORD *)v2 & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v5) |= v6;
          *((_BYTE *)GpeWakeHandler + v5) &= ~(_BYTE)v6;
        }
        else if ( ((unsigned __int8)v6 & *((_BYTE *)GpeSpecialHandler + v5)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v5) |= v6;
        }
      }
    }
  }
  if ( v12 )
    KeReleaseSpinLock(SpinLock[1], NewIrql);
}
