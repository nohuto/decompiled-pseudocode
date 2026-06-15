/*
 * XREFs of ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x180064FF8
 * Callers:
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z @ 0x18009EF5C (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ResetDataFlowAccessCheckResults(CProcess *this)
{
  int v1; // edx
  _DWORD *v2; // rcx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 216);
  do
  {
    ++v1;
    *v2++ = -2147023728;
  }
  while ( (unsigned __int64)v1 < 2 );
}
