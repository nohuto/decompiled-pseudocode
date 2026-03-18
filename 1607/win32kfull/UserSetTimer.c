/*
 * XREFs of UserSetTimer @ 0x1C0231578
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     vEnableSynchronize @ 0x1C012DEE0 (vEnableSynchronize.c)
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( gptmrMaster )
    v3 = InternalSetTimer(0LL, 0LL, 50LL, (__int64)GreSynchronizeTimer, 0, 132);
  else
    v3 = 0LL;
  if ( !v5 )
    UserSessionSwitchLeaveCrit(v2, v1);
  return v3;
}
