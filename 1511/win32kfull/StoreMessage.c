/*
 * XREFs of StoreMessage @ 0x1C00FF530
 * Callers:
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 */

__int64 __fastcall StoreMessage(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r10

  if ( a2 )
    v7 = *a2;
  else
    v7 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  result = LogicalCursorPos(a7);
  *(_QWORD *)(v9 + 36) = result;
  return result;
}
