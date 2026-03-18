/*
 * XREFs of NtUserGetRawInputBuffer @ 0x140053C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x140053CD4 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z @ 0x1400541EC (-GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(struct tagRAWINPUT *a1, unsigned int *a2, int a3)
{
  int *v5; // rdi
  unsigned int RawInputBuffer_NoUserCrit; // eax
  unsigned int v7; // ebx
  unsigned int ULongFromUser; // [rsp+2Ch] [rbp-Ch]

  if ( a3 == 24 )
  {
    v5 = (int *)PtiCurrent((__int64)a1);
    ULongFromUser = RtlReadULongFromUser(a2);
    RawInputBuffer_NoUserCrit = GetRawInputBuffer_NoUserCrit((struct tagTHREADINFO *)v5, a1, a2, ULongFromUser);
    v7 = RawInputBuffer_NoUserCrit;
    if ( a1 )
      InputTraceLogging::RawInput::GetRawInputBuffer(RawInputBuffer_NoUserCrit, v5[296]);
  }
  else
  {
    v7 = -1;
    UserSetLastError(87);
  }
  return v7;
}
