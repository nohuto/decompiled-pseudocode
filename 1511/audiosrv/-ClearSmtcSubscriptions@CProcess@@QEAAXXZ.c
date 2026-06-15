/*
 * XREFs of ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x180065020
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E948 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ClearSmtcSubscriptions(CProcess *this)
{
  int v1; // edx
  _DWORD *v2; // rcx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 464);
  do
  {
    *v2 = 0;
    ++v1;
    ++v2;
  }
  while ( (unsigned __int64)v1 < 2 );
}
