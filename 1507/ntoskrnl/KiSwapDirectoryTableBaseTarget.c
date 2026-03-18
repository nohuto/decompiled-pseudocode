/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x14010EDCC
 * Callers:
 *     <none>
 * Callees:
 *     MmStealTopLevelPage @ 0x14010EF54 (MmStealTopLevelPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v4; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // esi
  volatile signed __int32 v10; // eax
  unsigned int v11; // edi
  signed __int32 v12; // eax
  unsigned int v13; // edi
  unsigned __int64 result; // rax
  unsigned int v15; // esi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx

  v4 = *(_QWORD *)(a2 + 8);
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v10 = *(_DWORD *)a4;
    v11 = 0;
    while ( (v10 & 0x80000000) != v9 )
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
      v10 = *(_DWORD *)a4;
    }
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v12 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v13 = ~v12 & 0x80000000;
  if ( (v12 & 0x7FFFFFFF) != 0 )
  {
    v15 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v13 )
        break;
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
    }
  }
  else
  {
    result = v13 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  if ( *(_BYTE *)a2 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 184) == v4 )
    {
      v16 = *(_QWORD *)(v4 + 40);
      if ( KiKvaShadow )
      {
        v17 = *(_QWORD *)(v4 + 40);
        if ( (v16 & 2) != 0 )
          v17 = v16 | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v17);
        KiSetAddressPolicy(*(unsigned __int8 *)(v4 + 640));
      }
      result = (unsigned int)HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
        result = HvlSwitchVirtualAddressSpace(v16);
      else
        __writecr3(v16);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v18 = __readcr4();
        if ( (v18 & 0x20080) != 0 )
        {
          result = v18 ^ 0x80;
          __writecr4(v18 ^ 0x80);
          __writecr4(v18);
        }
        else
        {
          result = __readcr3();
          __writecr3(result);
        }
      }
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
