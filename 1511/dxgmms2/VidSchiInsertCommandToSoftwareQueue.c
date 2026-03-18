/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C000AB20
 * Callers:
 *     VidSchiUpdatePriorityTables @ 0x1C000AA90 (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     Template_piiqq @ 0x1C001F7D0 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  int v9; // r8d
  int v10; // ecx
  __int64 *v11; // rdx
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  char v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 904));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2716));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1136));
  if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 4) > 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1140));
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 760));
  ++*(_DWORD *)(v2 + 756);
  ++*(_DWORD *)(v5 + 2712);
  ++*(_DWORD *)(v7 + 900);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, a2);
  v8[3] = a1;
  v8[4] = *(_QWORD *)(a1 + 96);
  v8[5] = v2;
  v8[6] = *(_QWORD *)(v2 + 136);
  v8[7] = *(_QWORD *)(v2 + 152);
  WdLogEvent5_WdEvent(v8);
  v10 = v2 + 664;
  v11 = *(__int64 **)(v2 + 672);
  result = a1 + 32;
  *(_QWORD *)(a1 + 32) = v2 + 664;
  *(_QWORD *)(a1 + 40) = v11;
  if ( *v11 != v2 + 664 )
    __fastfail(3u);
  *v11 = result;
  *(_QWORD *)(v2 + 672) = result;
  if ( *(_DWORD *)(v2 + 756) == 1 )
  {
    v9 = 0;
    *(_QWORD *)(v2 + 648) = a1;
    *(_DWORD *)(v2 + 644) ^= (*(_DWORD *)(v2 + 644) ^ ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1)) & 1;
    v13 = *(_DWORD *)(v2 + 644) ^ ((unsigned __int8)*(_DWORD *)(v2 + 644) ^ (unsigned __int8)(2
                                                                                            * (*(_DWORD *)(a1 + 48) == 3))) & 2;
    *(_DWORD *)(v2 + 644) = v13;
    v10 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(4 * (*(_DWORD *)(a1 + 48) == 7))) & 4;
    *(_DWORD *)(v2 + 644) = v10;
    LODWORD(v11) = *(_DWORD *)(a1 + 48) == 6;
    *(_DWORD *)(v2 + 644) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8 * (_BYTE)v11)) & 8;
    result = *(unsigned int *)(v2 + 176);
    if ( (result & 0x200) == 0 )
    {
      result = *(unsigned int *)(v2 + 176);
      if ( (result & 8) == 0 )
      {
        result = *(unsigned int *)(v2 + 176);
        if ( (result & 4) == 0 )
        {
          result = *(unsigned int *)(v2 + 176);
          if ( (result & 0x10) == 0 )
          {
            result = *(unsigned int *)(v2 + 176);
            if ( (result & 0x40) == 0 )
            {
              result = *(unsigned int *)(v2 + 176);
              if ( (result & 0x80u) == 0LL )
              {
                result = *(unsigned int *)(v2 + 176);
                if ( (result & 0x100) == 0 )
                {
                  result = *(unsigned int *)(v2 + 176);
                  if ( (result & 0x20) == 0 )
                  {
                    if ( !*(_DWORD *)(v2 + 176)
                      && _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 0, 0) >= 2 )
                    {
                      v14 = *(_QWORD *)(v2 + 96);
                      v16 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v14 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v14 + 24) + 32LL),
                        &v16);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 12019LL);
                    *a2 = result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( bTracingEnabled )
  {
    v15 = *(_QWORD *)(v2 + 56);
    if ( !v15 || (result = *(unsigned int *)(v2 + 112), (result & 0x40) != 0) )
      LODWORD(v15) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      return Template_piiqq(
               v10,
               (_DWORD)v11,
               v9,
               v15,
               *(_QWORD *)(v2 + 464),
               *(_QWORD *)(v2 + 456),
               *(_DWORD *)(v2 + 448),
               3);
  }
  return result;
}
