/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C000A7F0
 * Callers:
 *     VidSchiUpdatePriorityTables @ 0x1C0008AF0 (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     Template_piiqq @ 0x1C0022804 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // r14
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  __int64 v7; // r9
  char v8; // si
  _QWORD *v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  char v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v4 = (_DWORD *)a2;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(volatile signed __int32 **)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 940));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2756));
  _InterlockedIncrement(v6 + 283);
  if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 4) > 1 )
    _InterlockedIncrement(v6 + 284);
  v8 = 1;
  if ( !*(_DWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 72) & 4) != 0 )
  {
    a2 = *(unsigned int *)(a1 + 152);
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 104LL) + 32LL) + 8 * a2 + 2968);
    _InterlockedExchangeAdd(v6 + 569, 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 784));
  ++*(_DWORD *)(v2 + 780);
  ++*(_DWORD *)(v5 + 2752);
  ++*(_DWORD *)(v7 + 936);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2, v5, v7);
  v9[3] = a1;
  v9[4] = *(_QWORD *)(a1 + 104);
  v9[5] = v2;
  v9[6] = *(_QWORD *)(v2 + 136);
  v9[7] = *(_QWORD *)(v2 + 152);
  WdLogEvent5_WdEvent(v9);
  v11 = v2 + 664;
  v12 = *(__int64 **)(v2 + 672);
  result = a1 + 32;
  if ( *v12 != v2 + 664 )
    __fastfail(3u);
  *(_QWORD *)result = v11;
  *(_QWORD *)(a1 + 40) = v12;
  *v12 = result;
  *(_QWORD *)(v2 + 672) = result;
  if ( *(_DWORD *)(v2 + 780) == 1 )
  {
    LODWORD(v12) = 0;
    *(_QWORD *)(v2 + 648) = a1;
    *(_DWORD *)(v2 + 644) ^= (*(_DWORD *)(v2 + 644) ^ ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1)) & 1;
    v14 = *(_DWORD *)(v2 + 644) ^ ((unsigned __int8)*(_DWORD *)(v2 + 644) ^ (unsigned __int8)(2
                                                                                            * (*(_DWORD *)(a1 + 48) == 3))) & 2;
    *(_DWORD *)(v2 + 644) = v14;
    LODWORD(v11) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(4 * (*(_DWORD *)(a1 + 48) == 7))) & 4;
    *(_DWORD *)(v2 + 644) = v11;
    if ( *(_DWORD *)(a1 + 48) != 6 )
      v8 = 0;
    *(_DWORD *)(v2 + 644) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(8 * v8)) & 8;
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
                      v15 = *(_QWORD *)(v2 + 96);
                      v17 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v15 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v15 + 24) + 32LL),
                        &v17);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 13120LL);
                    *v4 = result;
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
    v16 = *(_QWORD *)(v2 + 56);
    if ( !v16 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v16) = v2;
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      return Template_piiqq(
               v11,
               (_DWORD)v12,
               v10,
               v16,
               *(_QWORD *)(v2 + 464),
               *(_QWORD *)(v2 + 456),
               *(_DWORD *)(v2 + 448),
               3);
  }
  return result;
}
