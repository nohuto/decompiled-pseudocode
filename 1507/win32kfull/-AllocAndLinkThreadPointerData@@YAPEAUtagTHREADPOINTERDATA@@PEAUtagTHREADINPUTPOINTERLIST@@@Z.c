/*
 * XREFs of ?AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F7470
 * Callers:
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F72D4 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADPOINTERDATA *__fastcall AllocAndLinkThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  struct tagTHREADPOINTERDATA *result; // rax
  __int64 v3; // rcx

  result = (struct tagTHREADPOINTERDATA *)Win32AllocPoolZInit(56LL, 1953526613LL);
  if ( result )
  {
    v3 = *(_QWORD *)a1;
    *(_QWORD *)result = *(_QWORD *)a1;
    *((_QWORD *)result + 1) = a1;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)(v3 + 8) != a1 )
      __fastfail(3u);
    *(_QWORD *)(v3 + 8) = result;
    *(_QWORD *)a1 = result;
    ++*((_DWORD *)a1 + 4);
  }
  return result;
}
