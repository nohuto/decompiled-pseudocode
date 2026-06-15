/*
 * XREFs of ?GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z @ 0x180028EB0
 * Callers:
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x18001D5A0 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetImplementation(CProcess *this, struct CProcess **a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = (CProcess *)((char *)this - 24);
  _InterlockedIncrement((volatile signed __int32 *)this - 4);
  return result;
}
