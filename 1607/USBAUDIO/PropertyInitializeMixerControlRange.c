/*
 * XREFs of PropertyInitializeMixerControlRange @ 0x1C001A7B0
 * Callers:
 *     TopologyProcessMixerUnit @ 0x1C0017360 (TopologyProcessMixerUnit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeMixerControlRange(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  int v7; // r8d
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int i; // ebp
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a3 + 1) != 0 ? 2 : 0;
  v7 = 0;
  v8 = v6 + 129;
  v9 = 129;
  for ( i = *(_DWORD *)(a3 + 4) + *(_DWORD *)(*(_QWORD *)(a2 + 128) + 4LL); v9 <= v8; ++v9 )
  {
    if ( v7 < 0 )
      break;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, int *))(a2 + 136))(
           a1,
           a2,
           v9,
           i,
           *(_DWORD *)(a3 + 8),
           1,
           &v12);
    if ( v7 >= 0 )
    {
      switch ( v9 )
      {
        case 0x81u:
          *(_DWORD *)(a3 + 12) = v12;
          break;
        case 0x82u:
          *(_DWORD *)(a3 + 24) = v12;
          break;
        case 0x83u:
          *(_DWORD *)(a3 + 28) = v12;
          break;
        case 0x84u:
          *(_DWORD *)(a3 + 16) = v12;
          break;
      }
    }
  }
  return (unsigned int)v7;
}
