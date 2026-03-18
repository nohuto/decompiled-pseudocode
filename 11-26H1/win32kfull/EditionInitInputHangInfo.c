/*
 * XREFs of EditionInitInputHangInfo @ 0x1401DDF40
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 EditionInitInputHangInfo()
{
  __int64 v0; // rcx
  __int64 result; // rax
  _BYTE v2[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v2);
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)PtiCurrent(v0) + 60) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  result = xxxUpdateInputHangInfo(0LL, 1);
  if ( v2[0] )
  {
    result = v3;
    --*(_DWORD *)(v3 + 28);
  }
  return result;
}
