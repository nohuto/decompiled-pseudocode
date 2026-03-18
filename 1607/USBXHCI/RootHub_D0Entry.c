/*
 * XREFs of RootHub_D0Entry @ 0x1C0005C80
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  bool v1; // cf
  unsigned int v3; // esi
  int *v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // dl
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v11; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 16) == 0;
  *(_BYTE *)(a1 + 57) = 1;
  if ( !v1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = (int *)(*(_QWORD *)(a1 + 40) + 16LL * v3);
      v5 = 56LL * v3;
      v6 = *(_BYTE *)(*(_QWORD *)(a1 + 48) + v5 + 1);
      if ( v6 == 2 )
        break;
      if ( v6 == 3 )
      {
        v7 = 30;
LABEL_5:
        LODWORD(v14) = *v4;
        v8 = *(_QWORD *)(a1 + 8);
        LODWORD(v13) = ++v3;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v8 + 64),
          4u,
          0xAu,
          v7,
          (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
          v13,
          v14);
        v15 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
        if ( (v15 & 0x20000000) != 0 )
        {
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + *(_QWORD *)(a1 + 48) + 16LL));
          *v4 = *v4 & 0xC200 | 0xE000000;
          _InterlockedOr(v12, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + *(_QWORD *)(a1 + 48) + 16LL), v9);
        }
        goto LABEL_7;
      }
      v11 = *(_QWORD *)(a1 + 8);
      ++v3;
      LODWORD(v14) = v6;
      LODWORD(v13) = v3;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v11 + 64),
        2u,
        0xAu,
        0x1Fu,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v13,
        v14);
LABEL_7:
      if ( v3 + 1 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    v7 = 29;
    goto LABEL_5;
  }
  return 0LL;
}
