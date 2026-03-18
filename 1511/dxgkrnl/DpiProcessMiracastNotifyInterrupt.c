/*
 * XREFs of DpiProcessMiracastNotifyInterrupt @ 0x1C0025DB0
 * Callers:
 *     DxgNotifyInterruptCB @ 0x1C000B460 (DxgNotifyInterruptCB.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C0023CAC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     Template_xqqqqqqqq @ 0x1C0027DB0 (Template_xqqqqqqqq.c)
 */

void __fastcall DpiProcessMiracastNotifyInterrupt(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  _QWORD *v6; // rax
  struct MIRACAST_CHUNK *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct MIRACAST_CHUNK *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  struct MIRACAST_CHUNK **v15; // rcx
  _QWORD *v16; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_xqqqqqqqq(
        (*(_QWORD *)(a2 + 24) >> 40) & 0xFFFFFF,
        a2,
        a3,
        *(_QWORD *)(v3 + 1904),
        *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 24),
        (unsigned __int16)WORD2(*(_QWORD *)(a2 + 24)) >> 8,
        *(_DWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a2 + 48),
        *(_DWORD *)(a2 + 52));
    if ( *(_QWORD *)(v3 + 1896) && !*(_BYTE *)(v3 + 1913) )
    {
      if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(v3 + 1888) && *(_DWORD *)(a2 + 48) <= *(_DWORD *)(v3 + 1880) )
      {
        v7 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v3 + 1920));
        v12 = v7;
        if ( v7 )
        {
          *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 16);
          *((_QWORD *)v7 + 4) = *(_QWORD *)(a2 + 32);
          *((_DWORD *)v7 + 10) = *(_DWORD *)(a2 + 48);
          memmove((char *)v7 + 44, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 48));
          v14 = *(_QWORD *)(v3 + 1928);
          v15 = *(struct MIRACAST_CHUNK ***)(v14 + 8);
          *(_QWORD *)v12 = v14;
          *((_QWORD *)v12 + 1) = v15;
          if ( *v15 != (struct MIRACAST_CHUNK *)v14 )
            __fastfail(3u);
          *v15 = v12;
          *(_QWORD *)(v14 + 8) = v12;
          ++*(_DWORD *)(v14 + 16);
        }
        else
        {
          v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
          *(_QWORD *)(v13 + 24) = DpiProcessMiracastNotifyInterrupt;
          *(_QWORD *)(v13 + 32) = v3;
          WdLogEvent5_WdWarning(v13);
          *(_BYTE *)(v3 + 1912) = 1;
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741811;
        v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
        v6[3] = DpiProcessMiracastNotifyInterrupt;
        v6[4] = v3;
        v6[5] = -1073741811LL;
        WdLogEvent5_WdError(v6);
        *(_BYTE *)(v3 + 1913) = 1;
      }
    }
  }
  else
  {
    v4 = -1073741811;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v16[3] = DpiProcessMiracastNotifyInterrupt;
    v16[4] = v3;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
  }
  *(_DWORD *)(a2 + 52) = v4;
}
