/*
 * XREFs of DpiWritePnpRegistryValue @ 0x1C00CC750
 * Callers:
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00CBE20 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiWritePnpRegistryValue(__int64 a1, const WCHAR *a2, void *ValueData, ULONG ValueLength, int a5)
{
  __int64 v5; // r10
  const WCHAR *v7; // rdx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v5 = *(_QWORD *)(a1 + 64);
  if ( a5 == 1 )
  {
    v7 = *(const WCHAR **)(v5 + 488);
  }
  else
  {
    if ( a5 != 2 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)(a5 - 1));
      LODWORD(v13) = -1073741811;
      v15[4] = 0LL;
      v15[7] = 0LL;
      v15[3] = DpiReadPnpRegistryValue;
      v15[6] = a5;
      v15[5] = -1073741811LL;
      WdLogEvent5_WdError(v15);
      return (unsigned int)v13;
    }
    v7 = *(const WCHAR **)(v5 + 504);
  }
  v8 = RtlWriteRegistryValue(0, v7, a2, 3u, ValueData, ValueLength);
  v13 = v8;
  if ( v8 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    v16[3] = DpiWritePnpRegistryValue;
    v16[5] = a5;
    v16[4] = v13;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdEvent(v16);
  }
  return (unsigned int)v13;
}
