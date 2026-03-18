/*
 * XREFs of RootHub_D0Entry @ 0x1C0006460
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  int v1; // ebx
  int *v3; // rsi
  __int64 v4; // rbp
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  KIRQL v8; // al
  __int64 v10; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-18h]

  v1 = 1;
  *(_BYTE *)(a1 + 57) = 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v3 = (int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)(v1 - 1));
      v4 = 56LL * (unsigned int)(v1 - 1);
      v5 = *(_BYTE *)(*(_QWORD *)(a1 + 48) + v4 + 1);
      if ( v5 == 2 )
        break;
      if ( v5 == 3 )
      {
        v6 = 30;
LABEL_4:
        v7 = *(_QWORD *)(a1 + 8);
        LODWORD(v13) = *v3;
        LODWORD(v12) = v1;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v7 + 64),
          4u,
          0xAu,
          v6,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v12,
          v13);
        v14 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
        if ( (v14 & 0x20000000) != 0 )
        {
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + *(_QWORD *)(a1 + 48) + 16LL));
          *v3 = *v3 & 0xC200 | 0xE000000;
          _InterlockedOr(v11, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + *(_QWORD *)(a1 + 48) + 16LL), v8);
        }
        goto LABEL_6;
      }
      v10 = *(_QWORD *)(a1 + 8);
      LODWORD(v13) = v5;
      LODWORD(v12) = v1;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v10 + 64),
        2u,
        0xAu,
        0x1Fu,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v12,
        v13);
LABEL_6:
      if ( (unsigned int)++v1 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    v6 = 29;
    goto LABEL_4;
  }
  return 0LL;
}
