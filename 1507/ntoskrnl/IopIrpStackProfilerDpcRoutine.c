/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x140125928
 * Callers:
 *     <none>
 * Callees:
 *     IopProcessIrpStackProfiler @ 0x140125B68 (IopProcessIrpStackProfiler.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KiCustomAccessRoutine2 @ 0x14018CED0 (KiCustomAccessRoutine2.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r8
  int v10; // ecx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD v15[28]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v16; // [rsp+73h] [rbp-185h]
  __int64 v17; // [rsp+9Bh] [rbp-15Dh]
  __int64 v18; // [rsp+B3h] [rbp-145h]
  _DWORD *v19; // [rsp+F8h] [rbp-100h]
  _QWORD v20[20]; // [rsp+140h] [rbp-B8h] BYREF

  v19 = v15;
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v15[8] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v18 = a3;
    v16 = __ROL8__(a2, a3);
    v17 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine2(a2);
    v14 = __ROL8__(v17, v18);
    *(_QWORD *)(v14 + 32) = __ROR8__(v16, v18);
    *(_BYTE *)v14 = 19;
  }
  memset(v20, 0, sizeof(v20));
  v4 = 0LL;
  v5 = 0LL;
  for ( result = (unsigned int)KeNumberProcessors_0;
        (unsigned int)v5 < (unsigned int)KeNumberProcessors_0;
        result = (unsigned int)KeNumberProcessors_0 )
  {
    if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0 )
      v7 = 0LL;
    else
      v7 = KiProcessorBlock[v5];
    if ( v7 )
    {
      v4 += (unsigned int)(*(_DWORD *)(v7 + 25808) - *(_DWORD *)(v7 + 25892));
      v8 = 0LL;
      v9 = (_DWORD *)(v7 + 25728);
      do
      {
        v20[v8++] += (unsigned int)(*v9 - v9[21]);
        ++v9;
      }
      while ( v8 < 20 );
    }
    v5 = (unsigned int)(v5 + 1);
  }
  v10 = 20;
  v11 = IopIrpStackProfilerSampleSize;
  if ( v4 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v10 = 0;
    result = 0LL;
    v5 = (unsigned int)IopIrpStackProfilerMinSizeThreshold;
    do
    {
      if ( v20[result] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v10;
      ++result;
    }
    while ( result < 20 );
  }
  if ( v10 != 20 )
  {
    IopProcessIrpStackProfiler(v20, v5);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize = 2 * v11;
    if ( (unsigned int)(2 * v11) > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    v12 = 0LL;
    for ( result = (unsigned int)KeNumberProcessors_0;
          (unsigned int)v12 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      if ( (unsigned int)v12 >= (unsigned int)KeNumberProcessors_0 )
        v13 = 0LL;
      else
        v13 = KiProcessorBlock[v12];
      if ( v13 )
      {
        *(_OWORD *)(v13 + 25812) = *(_OWORD *)(v13 + 25728);
        *(_OWORD *)(v13 + 25828) = *(_OWORD *)(v13 + 25744);
        *(_OWORD *)(v13 + 25844) = *(_OWORD *)(v13 + 25760);
        *(_OWORD *)(v13 + 25860) = *(_OWORD *)(v13 + 25776);
        *(_OWORD *)(v13 + 25876) = *(_OWORD *)(v13 + 25792);
        *(_DWORD *)(v13 + 25892) = *(_DWORD *)(v13 + 25808);
      }
      v12 = (unsigned int)(v12 + 1);
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
  return result;
}
