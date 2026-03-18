/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C004A6F8
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  ULONG ActiveProcessorCount; // eax
  SIZE_T v3; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int16 v5; // bp
  unsigned int v6; // esi
  unsigned __int8 v8; // di
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int i; // edi
  __int64 v12; // [rsp+28h] [rbp-30h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp+8h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
  v3 = 2 * ActiveProcessorCount;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v3, 0x49434858u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v3);
    v5 = 1;
    if ( *(_DWORD *)(a1 + 24) > 1u )
    {
      do
      {
        v8 = 0;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v5);
        ProcNumber.Reserved = 0;
        ProcNumber.Group = *(_WORD *)(v9 + 36);
        v10 = *(_QWORD *)(v9 + 40);
        while ( v10 && v8 < 0x40u )
        {
          if ( _bittest64(&v10, v8) )
          {
            v10 &= ~(1LL << v8);
            ProcNumber.Number = v8;
            *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * KeGetProcessorIndexFromNumber(&ProcNumber)) = v5;
          }
          ++v8;
        }
        ++v5;
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a1 + 24) );
    }
    v6 = 0;
  }
  else
  {
    v6 = -1073741670;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      8u,
      0x36u,
      (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
  }
  if ( *(_DWORD *)(a1 + 24) > 1u )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
    {
      if ( !*(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) )
      {
        LODWORD(v12) = i;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          8u,
          0x37u,
          (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
          v12);
      }
    }
  }
  return v6;
}
