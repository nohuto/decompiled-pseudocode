/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x1401DAE10
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiLoadDirectoryTableBase @ 0x1400979E0 (KiLoadDirectoryTableBase.c)
 *     MmStealTopLevelPage @ 0x1401E3504 (MmStealTopLevelPage.c)
 */

unsigned __int64 __fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  signed __int32 v8; // eax
  unsigned int v9; // edi
  signed __int32 v10; // eax
  unsigned int v11; // edi
  unsigned __int64 result; // rax
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v13 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v13);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
    }
  }
  else
  {
    result = v11 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  if ( *(_BYTE *)a2 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 184) == v4 )
      result = KiLoadDirectoryTableBase(v4, *(_QWORD *)(v4 + 40));
  }
  _InterlockedDecrement(a3);
  return result;
}
