/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C0002D28
 * Callers:
 *     VidSchiUpdatePriorityTables @ 0x1C0002C9C (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C0003278 (VidSchiSetNextRunPacket.c)
 *     Template_piiqq @ 0x1C0013D70 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // rax
  int v9; // r8d
  int v10; // ecx
  __int64 *v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  char v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 896));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2844));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1008));
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 760));
  ++*(_DWORD *)(v2 + 756);
  ++*(_DWORD *)(v5 + 2840);
  ++*(_DWORD *)(v7 + 892);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent();
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
    VidSchiSetNextRunPacket(v2, a1);
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
                      v13 = *(_QWORD *)(v2 + 96);
                      v15 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v13 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v13 + 24) + 32LL),
                        &v15);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 11639LL);
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
    v14 = *(_QWORD *)(v2 + 56);
    if ( !v14 || (result = *(unsigned int *)(v2 + 112), (result & 0x40) != 0) )
      LODWORD(v14) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      return Template_piiqq(
               v10,
               (_DWORD)v11,
               v9,
               v14,
               *(_QWORD *)(v2 + 464),
               *(_QWORD *)(v2 + 456),
               *(_DWORD *)(v2 + 448),
               3);
  }
  return result;
}
