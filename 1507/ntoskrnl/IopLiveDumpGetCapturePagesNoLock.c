/*
 * XREFs of IopLiveDumpGetCapturePagesNoLock @ 0x1403FF3CC
 * Callers:
 *     IopLiveDumpGetCapturePages @ 0x1403FF334 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x140677F38 (IopLiveDumpGetNtMergePages.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x14014CF00 (RtlFindSetBitsEx.c)
 */

_UNKNOWN **__fastcall IopLiveDumpGetCapturePagesNoLock(
        PRTL_BITMAP_EX BitMapHeader,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  _UNKNOWN **result; // rax
  ULONG64 v8; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = *(_QWORD *)(a2 + 40);
  *a5 = 0;
  if ( v8 != -1LL )
  {
    while ( 1 )
    {
      result = (_UNKNOWN **)RtlFindSetBitsEx(BitMapHeader, 1uLL, v8);
      if ( (unsigned __int64)result < v8 || result == (_UNKNOWN **)-1LL )
        break;
      v11 = (unsigned int)*a5;
      v8 = (ULONG64)result + 1;
      *(_QWORD *)(a3 + 8 * v11) = result;
      *a5 = v11 + 1;
      if ( (unsigned int)(v11 + 1) >= 0x40 )
      {
        result = (_UNKNOWN **)(*(_QWORD *)(a3 + 8LL * (unsigned int)v11) + 1LL);
        *(_QWORD *)(a2 + 40) = result;
        goto LABEL_7;
      }
    }
  }
  *(_QWORD *)(a2 + 40) = -1LL;
LABEL_7:
  if ( *a5 )
  {
    v12 = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 32) = *a5;
    *a6 = v12;
    result = (_UNKNOWN **)(v12 + 1);
    *(_QWORD *)(a2 + 48) = v12 + 1;
  }
  return result;
}
