/*
 * XREFs of ?SmFatalPageErrorDumpCallback@@YAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASON_CALLBACK_RECORD@@PEAXK@Z @ 0x140221420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SmFatalPageErrorDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  v4 = ((unsigned __int64)&Record[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = (unsigned int)(*(_DWORD *)(v4 + 12) + 56);
  if ( v5 <= *((unsigned int *)ReasonSpecificData + 3) )
  {
    ReasonSpecificData[4] = v4;
    *((_DWORD *)ReasonSpecificData + 10) = v5;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_140286D90;
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 0;
  }
}
