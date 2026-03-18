/*
 * XREFs of NtUserConvertMemHandle @ 0x1C02113E0
 * Callers:
 *     <none>
 * Callees:
 *     _ConvertMemHandle @ 0x1C0150634 (_ConvertMemHandle.c)
 */

__int64 __fastcall NtUserConvertMemHandle(char *Src, size_t Size)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = (unsigned int)Size;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v2 && ((unsigned __int64)&Src[v2] > W32UserProbeAddress || &Src[v2] < Src) )
    *W32UserProbeAddress = 0;
  v5 = ConvertMemHandle(Src, (unsigned int)v2, v4);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
