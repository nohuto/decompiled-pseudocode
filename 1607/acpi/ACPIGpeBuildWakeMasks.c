/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C001E8A0
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C001E8A0 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C0029CB0 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E8A0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C00201F4 (ACPIGpeIndexToGpeRegister.c)
 */

void __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  _QWORD *v1; // r9
  _QWORD *v2; // rax
  __int64 v3; // r10
  __int64 v4; // rdx
  KSPIN_LOCK *v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // r9d
  PKSPIN_LOCK v11; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  KSPIN_LOCK *v13; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  _QWORD *v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  unsigned int v17; // [rsp+50h] [rbp-10h]

  v1 = (_QWORD *)(a1 + 752);
  v2 = *(_QWORD **)(a1 + 752);
  v3 = 768LL;
  v4 = 0LL;
  v12[0] = v1;
  v5 = 0LL;
  v13 = 0LL;
  v16 = 768LL;
  v6 = (__int64)(v2 - 96);
  v17 = 0;
  v7 = v2 - 96;
  v12[1] = *v2;
  v15 = v2 - 96;
  if ( v2 == v1 )
    v7 = 0LL;
  while ( (_QWORD *)(v6 + v3) != v1 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v6);
      KeReleaseSpinLock(v11, NewIrql);
    }
    ACPIGpeBuildWakeMasks(v7, v4, v5);
    if ( (v7[1] & 0x10000) != 0 && (v7[114] & 0x500000000LL) == 0 )
    {
      v9 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v7 + 114));
      v10 = 1 << (*((unsigned __int8 *)v7 + 456) % 8);
      if ( ((unsigned __int8)v10 & *((_BYTE *)GpeEnable + v9)) != 0 )
      {
        if ( (v7[1] & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v9) |= v10;
          *((_BYTE *)GpeWakeHandler + v9) &= ~(_BYTE)v10;
        }
        else if ( ((unsigned __int8)v10 & *((_BYTE *)GpeSpecialHandler + v9)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v9) |= v10;
        }
      }
    }
    v8 = ACPIExtListEnumNext(v12);
    v4 = v17;
    v7 = (_QWORD *)v8;
    v3 = v16;
    v6 = (__int64)v15;
    v5 = v13;
    v1 = (_QWORD *)v12[0];
  }
  if ( (_DWORD)v4 )
    KeReleaseSpinLock(v5, NewIrql);
}
