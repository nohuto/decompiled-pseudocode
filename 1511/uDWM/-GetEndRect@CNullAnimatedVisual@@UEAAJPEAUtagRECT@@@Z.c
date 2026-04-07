/*
 * XREFs of ?GetEndRect@CNullAnimatedVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180050550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNullAnimatedVisual::GetEndRect(CNullAnimatedVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)&a2->left = 0LL;
  *(_QWORD *)&a2->right = 0LL;
  return result;
}
