/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C004797C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C0047884 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  ULONG ActiveProcessorCount; // eax
  POOL_TYPE v3; // ecx
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int16 v6; // bp
  unsigned int v7; // esi
  unsigned __int8 v9; // di
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int i; // edi
  __int64 v13; // [rsp+28h] [rbp-30h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp+8h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
  v4 = 2 * ActiveProcessorCount;
  PoolWithTag = ExAllocatePoolWithTag(v3, v4, 0x49434858u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v4);
    v6 = 1;
    if ( *(_DWORD *)(a1 + 24) > 1u )
    {
      do
      {
        v9 = 0;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v6);
        ProcNumber.Reserved = 0;
        ProcNumber.Group = *(_WORD *)(v10 + 36);
        v11 = *(_QWORD *)(v10 + 40);
        while ( v11 && v9 < 0x40u )
        {
          if ( _bittest64(&v11, v9) )
          {
            v11 &= ~(1LL << v9);
            ProcNumber.Number = v9;
            *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * KeGetProcessorIndexFromNumber(&ProcNumber)) = v6;
          }
          ++v9;
        }
        ++v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(a1 + 24) );
    }
    v7 = 0;
  }
  else
  {
    v7 = -1073741670;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      8u,
      0x36u,
      (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
  }
  if ( *(_DWORD *)(a1 + 24) > 1u )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
    {
      if ( !*(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) )
      {
        LODWORD(v13) = i;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          8u,
          0x37u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          v13);
      }
    }
  }
  return v7;
}
