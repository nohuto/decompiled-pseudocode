/*
 * XREFs of _lambda_f6342d8231bbc0d051acb947e9cc99c6_::operator() @ 0x1402E7268
 * Callers:
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_f6342d8231bbc0d051acb947e9cc99c6_::operator()(_QWORD **a1)
{
  __int64 result; // rax

  *(_DWORD *)(**a1 + 4LL) |= 0xC180u;
  *(_DWORD *)(**a1 + 96LL) = *(unsigned __int16 *)(*a1[1] + 40LL);
  *(_OWORD *)(**a1 + 60LL) = *(_OWORD *)(*a1[1] + 24LL);
  *(_OWORD *)(**a1 + 76LL) = *(_OWORD *)(*a1[1] + 8LL);
  result = *(unsigned int *)(*a1[1] + 64LL);
  *(_DWORD *)(**a1 + 92LL) = result;
  return result;
}
